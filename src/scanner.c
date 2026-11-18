#include "tree_sitter/parser.h"

#include <string.h>
#include <wctype.h>

enum TokenType {
  DESCENDANT_OP,
  PSEUDO_CLASS_SELECTOR_COLON,
  ERROR_RECOVERY,
  JS_EXPRESSION,
};

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

enum JSContext {
  JS_ROOT,
  JS_OBJECT,
  JS_BLOCK,
  JS_PAREN,
  JS_CONTROL_PAREN,
  JS_FUNCTION_PAREN,
  JS_BRACKET,
  JS_TEMPLATE,
  JS_SUBSTITUTION,
};

enum JSFunctionScope {
  JS_ASYNC = 1,
  JS_GENERATOR = 2,
};

enum JSAsyncPrefix {
  JS_NO_ASYNC_PREFIX,
  JS_ASYNC_PREFIX,
  JS_ASYNC_PARAMETER,
};

typedef struct {
  enum JSContext context;
  bool regex_allowed;
  bool statement_start;
  bool property;
  bool control;
  bool function;
  bool class_body;
  bool declaration;
  bool function_body;
  bool arrow_body;
  bool after_paren;
  bool seen_token;
  bool regex_after;
  bool for_loop;
  bool object_key;
  bool break_statement;
  bool return_statement;
  bool line_break;
  bool arrow_expression;
  bool type_assertion;
  bool jsx_opening_tag;
  bool contextual_identifier;
  bool slash_after_contextual;
  bool regex_class_candidate;
  enum JSAsyncPrefix async_prefix;
  unsigned scope;
  unsigned function_scope;
  unsigned arrow_scope;
  unsigned type_arguments;
  unsigned jsx_depth;
  unsigned ternaries;
} JSFrame;

typedef struct {
  JSFrame *frames;
  size_t size;
  size_t capacity;
} JSStack;

static bool push_js_frame(JSStack *stack, JSFrame frame) {
  if (stack->size == stack->capacity) {
    size_t capacity = stack->capacity ? stack->capacity * 2 : 8;
    JSFrame *frames = realloc(stack->frames, capacity * sizeof(JSFrame));
    if (!frames) return false;
    stack->frames = frames;
    stack->capacity = capacity;
  }
  stack->frames[stack->size++] = frame;
  return true;
}

static bool js_line_end(int32_t c) {
  return c == '\n' || c == '\r' || c == 0x2028 || c == 0x2029;
}

static bool js_space(int32_t c) {
  return (c >= '\t' && c <= '\r') || c == ' ' || c == 0xa0 ||
         c == 0x1680 || (c >= 0x2000 && c <= 0x200a) ||
         js_line_end(c) || c == 0x202f || c == 0x205f ||
         c == 0x3000 || c == 0xfeff;
}

static bool js_identifier(int32_t c) {
  return !js_space(c) &&
         (iswalnum(c) || c == '_' || c == '$' || c >= 0x80);
}

static void js_newline(JSFrame *frame) {
  frame->line_break = true;
  if (frame->break_statement || frame->return_statement) {
    frame->regex_allowed = true;
    frame->statement_start = true;
    frame->break_statement = false;
    frame->return_statement = false;
  }
}

static void js_value(JSFrame *frame) {
  frame->regex_allowed = false;
  frame->statement_start = false;
  frame->property = false;
  frame->arrow_body = false;
  frame->after_paren = false;
  frame->seen_token = true;
  frame->return_statement = false;
  frame->line_break = false;
  frame->async_prefix = JS_NO_ASYNC_PREFIX;
  frame->contextual_identifier = false;
  frame->slash_after_contextual = false;
}

static unsigned js_scope(const JSFrame *frame) {
  return frame->arrow_expression ? frame->arrow_scope : frame->scope;
}

static bool scan_js_string(TSLexer *lexer) {
  int32_t quote = lexer->lookahead;
  advance(lexer);
  while (!lexer->eof(lexer)) {
    int32_t c = lexer->lookahead;
    advance(lexer);
    if (c == quote) return true;
    if (c == '\n' || c == '\r') return false;
    if (c == '\\') {
      if (lexer->eof(lexer)) return false;
      c = lexer->lookahead;
      advance(lexer);
      if (c == '\r' && lexer->lookahead == '\n') advance(lexer);
    }
  }
  return false;
}

static bool scan_js_regex(TSLexer *lexer, bool character_class) {
  while (!lexer->eof(lexer)) {
    int32_t c = lexer->lookahead;
    if (js_line_end(c)) return false;
    advance(lexer);
    if (c == '\\') {
      if (lexer->eof(lexer) || js_line_end(lexer->lookahead)) return false;
      advance(lexer);
    } else if (c == '[') {
      character_class = true;
    } else if (c == ']') {
      character_class = false;
    } else if (c == '/' && !character_class) {
      while (js_identifier(lexer->lookahead)) advance(lexer);
      return true;
    }
  }
  return false;
}

static bool scan_js_slash(TSLexer *lexer, JSFrame *frame) {
  advance(lexer);
  if (lexer->lookahead == '/') {
    do {
      advance(lexer);
    } while (!lexer->eof(lexer) && !js_line_end(lexer->lookahead));
    return true;
  }
  if (lexer->lookahead == '*') {
    advance(lexer);
    while (!lexer->eof(lexer)) {
      int32_t c = lexer->lookahead;
      if (js_line_end(c)) js_newline(frame);
      advance(lexer);
      if (c == '*' && lexer->lookahead == '/') {
        advance(lexer);
        return true;
      }
    }
    return false;
  }
  if (frame->jsx_opening_tag && lexer->lookahead == '>') {
    advance(lexer);
    frame->jsx_opening_tag = false;
    frame->jsx_depth--;
    js_value(frame);
    return true;
  }
  if (frame->regex_allowed) {
    if (!scan_js_regex(lexer, false)) return false;
    js_value(frame);
  } else {
    frame->slash_after_contextual = frame->contextual_identifier;
    frame->contextual_identifier = false;
    if (lexer->lookahead == '=') advance(lexer);
    frame->regex_allowed = true;
    frame->statement_start = false;
    frame->property = false;
    frame->after_paren = false;
    frame->line_break = false;
    frame->async_prefix = JS_NO_ASYNC_PREFIX;
    frame->type_assertion = false;
  }
  return true;
}

static void scan_js_word(TSLexer *lexer, JSFrame *frame, bool after_newline) {
  char word[16];
  size_t length = 0;
  do {
    if (length < sizeof(word) - 1) {
      word[length] = lexer->lookahead < 0x80 ? lexer->lookahead : '?';
    }
    length++;
    advance(lexer);
  } while (js_identifier(lexer->lookahead));
  word[length < sizeof(word) ? length : sizeof(word) - 1] = '\0';

  bool property = frame->property ||
                  (frame->context == JS_OBJECT && frame->object_key);
  bool statement_start = frame->statement_start;
  bool follows_value = !frame->regex_allowed;
  bool for_of = frame->for_loop && follows_value;
  enum JSAsyncPrefix async_prefix =
      after_newline ? JS_NO_ASYNC_PREFIX : frame->async_prefix;
  bool await = !strcmp(word, "await") && (js_scope(frame) & JS_ASYNC);
  bool yield = !strcmp(word, "yield") && (js_scope(frame) & JS_GENERATOR);
  js_value(frame);
  if (property || length >= sizeof(word)) return;

  if (!strcmp(word, "if") || !strcmp(word, "while") ||
      !strcmp(word, "for") || !strcmp(word, "with") ||
      !strcmp(word, "switch") || !strcmp(word, "catch")) {
    frame->control = true;
    frame->for_loop = !strcmp(word, "for");
    frame->regex_allowed = true;
  } else if (!strcmp(word, "break") || !strcmp(word, "continue") ||
             !strcmp(word, "debugger")) {
    frame->break_statement = true;
  } else if (for_of && !strcmp(word, "of")) {
    frame->regex_allowed = true;
  } else if (!strcmp(word, "function") || !strcmp(word, "class")) {
    frame->function = !strcmp(word, "function");
    frame->function_scope = frame->function && async_prefix ? JS_ASYNC : 0;
    frame->class_body = !strcmp(word, "class");
    frame->declaration = statement_start;
    frame->regex_allowed = true;
  } else if (!strcmp(word, "else") || !strcmp(word, "do") ||
             !strcmp(word, "try") || !strcmp(word, "finally")) {
    frame->regex_allowed = true;
    frame->statement_start = true;
  } else if (!strcmp(word, "return") || !strcmp(word, "throw") ||
             !strcmp(word, "case") || !strcmp(word, "delete") ||
             !strcmp(word, "void") || !strcmp(word, "typeof") ||
             !strcmp(word, "new") || !strcmp(word, "in") ||
             !strcmp(word, "instanceof") || yield || await) {
    frame->regex_allowed = true;
    frame->return_statement = !strcmp(word, "return") || yield;
  } else if (!strcmp(word, "async")) {
    frame->async_prefix = JS_ASYNC_PREFIX;
    frame->statement_start = statement_start;
  } else if (!strcmp(word, "as") && follows_value) {
    frame->type_assertion = true;
  } else if (!strcmp(word, "await") || !strcmp(word, "yield")) {
    frame->contextual_identifier = true;
  } else if (async_prefix == JS_ASYNC_PREFIX) {
    frame->async_prefix = JS_ASYNC_PARAMETER;
  }
}

static bool scan_jsx_close(TSLexer *lexer, JSFrame *frame) {
  advance(lexer);
  while (js_identifier(lexer->lookahead) || lexer->lookahead == '-' ||
         lexer->lookahead == '.' || lexer->lookahead == ':') {
    advance(lexer);
  }
  while (js_space(lexer->lookahead)) advance(lexer);
  if (lexer->lookahead != '>') return scan_js_regex(lexer, false);
  advance(lexer);
  frame->jsx_depth--;
  frame->jsx_opening_tag = false;
  return true;
}

static bool scan_js_body(TSLexer *lexer, JSStack *stack) {
  while (!lexer->eof(lexer)) {
    JSFrame *frame = &stack->frames[stack->size - 1];
    int32_t c = lexer->lookahead;
    if (frame->context == JS_TEMPLATE) {
      advance(lexer);
      if (c == '\\') {
        if (lexer->eof(lexer)) return false;
        advance(lexer);
      } else if (c == '`') {
        stack->size--;
        js_value(&stack->frames[stack->size - 1]);
      } else if (c == '$' && lexer->lookahead == '{') {
        advance(lexer);
        if (!push_js_frame(stack, (JSFrame){
              .context = JS_SUBSTITUTION, .regex_allowed = true,
              .scope = frame->scope,
            })) return false;
      }
      continue;
    }
    if (js_space(c)) {
      if (js_line_end(c)) js_newline(frame);
      advance(lexer);
      continue;
    }
    if (c == '\'' || c == '"') {
      if (frame->jsx_depth && !frame->jsx_opening_tag &&
          !frame->regex_allowed && !frame->line_break) {
        advance(lexer);
        continue;
      }
      if (!scan_js_string(lexer)) return false;
      js_value(frame);
      continue;
    }
    if (c == '/') {
      if (!scan_js_slash(lexer, frame)) return false;
      continue;
    }
    bool after_newline = frame->line_break;
    frame->line_break = false;
    if (c == '`') {
      js_value(frame);
      advance(lexer);
      if (!push_js_frame(stack, (JSFrame){
            .context = JS_TEMPLATE, .scope = js_scope(frame),
          })) return false;
      continue;
    }
    if (c == '}') {
      // Without the host's lexical goal, try division until it is impossible.
      if (frame->regex_class_candidate) {
        if (!scan_js_regex(lexer, true)) return false;
        stack->size--;
        js_value(&stack->frames[stack->size - 1]);
        continue;
      }
      if (frame->context == JS_ROOT) {
        if (!frame->seen_token) return false;
        lexer->mark_end(lexer);
        return true;
      }
      if (frame->context != JS_BLOCK && frame->context != JS_OBJECT &&
          frame->context != JS_SUBSTITUTION) return false;
      JSFrame closed = *frame;
      stack->size--;
      advance(lexer);
      if (closed.context != JS_SUBSTITUTION) {
        frame = &stack->frames[stack->size - 1];
        js_value(frame);
        frame->regex_allowed = closed.regex_after;
        frame->statement_start = closed.regex_after;
      }
      continue;
    }
    if (c == ')' || c == ']') {
      bool paren = c == ')';
      if (!paren && frame->context == JS_OBJECT &&
          stack->frames[stack->size - 2].regex_class_candidate) {
        if (!scan_js_regex(lexer, true)) return false;
        stack->size -= 2;
        js_value(&stack->frames[stack->size - 1]);
        continue;
      }
      if (paren ? (frame->context != JS_PAREN &&
                   frame->context != JS_CONTROL_PAREN &&
                   frame->context != JS_FUNCTION_PAREN)
                : frame->context != JS_BRACKET) return false;
      JSFrame closed = *frame;
      stack->size--;
      advance(lexer);
      frame = &stack->frames[stack->size - 1];
      js_value(frame);
      frame->after_paren = paren;
      if (closed.context == JS_CONTROL_PAREN) {
        frame->regex_allowed = true;
        frame->statement_start = true;
      } else if (closed.context == JS_FUNCTION_PAREN) {
        frame->function_body = true;
        frame->function_scope = closed.function_scope;
        frame->declaration = closed.declaration;
      } else if (closed.context == JS_PAREN) {
        frame->async_prefix = closed.async_prefix;
      }
      continue;
    }
    if (c == '{' || c == '(' || c == '[') {
      JSFrame next = {.regex_allowed = true, .scope = js_scope(frame)};
      if (c == '{') {
        bool function_body = frame->function_body;
        bool function = frame->function_body || frame->class_body;
        bool asi_block = after_newline && frame->context == JS_BLOCK &&
                         !frame->regex_allowed;
        bool block = function || frame->arrow_body ||
                     frame->statement_start || frame->after_paren ||
                     frame->control || asi_block;
        next.context = block ? JS_BLOCK : JS_OBJECT;
        next.statement_start = block;
        next.object_key = !block;
        if (function_body) next.scope = frame->function_scope;
        else if (frame->after_paren && frame->async_prefix) next.scope = JS_ASYNC;
        next.regex_after = function ? frame->declaration
                                   : block && !frame->arrow_body;
        frame->function_body = false;
        frame->class_body = false;
        frame->control = false;
        if (frame->arrow_body) frame->arrow_expression = false;
      } else if (c == '(') {
        next.context = frame->control ? JS_CONTROL_PAREN
                     : frame->function ? JS_FUNCTION_PAREN : JS_PAREN;
        next.declaration = frame->declaration;
        next.function_scope = frame->function_scope;
        next.async_prefix =
            after_newline ? JS_NO_ASYNC_PREFIX : frame->async_prefix;
        next.for_loop = frame->for_loop;
        frame->for_loop = false;
        frame->control = false;
        frame->function = false;
      } else {
        next.context = JS_BRACKET;
        next.regex_class_candidate = frame->slash_after_contextual;
      }
      js_value(frame);
      advance(lexer);
      if (!push_js_frame(stack, next)) return false;
      continue;
    }
    if (c >= '0' && c <= '9') {
      do {
        advance(lexer);
      } while (js_identifier(lexer->lookahead) || lexer->lookahead == '.');
      js_value(frame);
      continue;
    }
    if (js_identifier(c)) {
      scan_js_word(lexer, frame, after_newline);
      continue;
    }

    advance(lexer);
    enum JSAsyncPrefix async_prefix =
        after_newline ? JS_NO_ASYNC_PREFIX : frame->async_prefix;
    frame->async_prefix = JS_NO_ASYNC_PREFIX;
    frame->contextual_identifier = false;
    frame->slash_after_contextual = false;
    frame->seen_token = true;
    frame->property = false;
    frame->after_paren = false;
    frame->arrow_body = false;
    frame->return_statement = false;
    bool statement_start = c == ';';
    if (c == '<' && frame->jsx_depth && lexer->lookahead == '/') {
      if (!scan_jsx_close(lexer, frame)) return false;
      js_value(frame);
      continue;
    } else if (c == '<' && frame->type_assertion) {
      frame->type_arguments++;
      frame->regex_allowed = true;
    } else if (c == '>' && frame->type_arguments) {
      frame->type_arguments--;
      frame->regex_allowed = frame->type_arguments != 0;
      frame->type_assertion = frame->type_arguments != 0;
    } else if (c == '>' && frame->jsx_opening_tag) {
      frame->jsx_opening_tag = false;
      frame->regex_allowed = true;
    } else if (c == '<') {
      if ((frame->regex_allowed || frame->jsx_depth) &&
          (js_identifier(lexer->lookahead) || lexer->lookahead == '>')) {
        frame->jsx_depth++;
        frame->jsx_opening_tag = true;
      }
      frame->regex_allowed = true;
    } else if (c == '*' && frame->function) {
      frame->function_scope |= JS_GENERATOR;
    } else if (c == '.') {
      if (lexer->lookahead == '.') {
        advance(lexer);
        if (lexer->lookahead == '.') advance(lexer);
        frame->regex_allowed = true;
        frame->object_key = false;
      } else {
        frame->property = true;
        frame->regex_allowed = false;
      }
    } else if ((c == '+' || c == '-') && lexer->lookahead == c) {
      advance(lexer);
    } else if (c == '=' && lexer->lookahead == '>') {
      advance(lexer);
      frame->arrow_body = true;
      frame->arrow_expression = true;
      frame->arrow_scope = async_prefix ? JS_ASYNC : 0;
      frame->regex_allowed = true;
    } else if (c == '?' && lexer->lookahead == '.') {
      advance(lexer);
      frame->regex_allowed = lexer->lookahead >= '0' && lexer->lookahead <= '9';
      frame->property = !frame->regex_allowed;
      if (frame->regex_allowed) frame->ternaries++;
    } else if (c == '?' && lexer->lookahead == '?') {
      advance(lexer);
      frame->regex_allowed = true;
    } else {
      if (c != '!' || lexer->lookahead == '=') frame->regex_allowed = true;
      if (c == '?') frame->ternaries++;
      if (c == ':') {
        if (frame->ternaries) {
          frame->ternaries--;
        } else {
          frame->object_key = false;
          statement_start = frame->context == JS_BLOCK;
        }
      }
      if (c == ',' && frame->context == JS_OBJECT) frame->object_key = true;
      if ((c == ',' || c == ';') && !frame->type_arguments) {
        frame->type_assertion = false;
        frame->arrow_expression = false;
      }
      if (c == ';') {
        frame->for_loop = false;
        frame->break_statement = false;
      }
    }
    frame->statement_start = statement_start;
  }
  return false;
}

static bool scan_js_expression(TSLexer *lexer) {
  JSStack stack = {0};
  bool result = push_js_frame(&stack, (JSFrame){
    .context = JS_ROOT, .regex_allowed = true,
  }) && scan_js_body(lexer, &stack);
  free(stack.frames);
  return result;
}

void *tree_sitter_styled_external_scanner_create() { return NULL; }

void tree_sitter_styled_external_scanner_destroy(void *payload) {}

void tree_sitter_styled_external_scanner_reset(void *payload) {}

unsigned tree_sitter_styled_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_styled_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_styled_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  if (valid_symbols[ERROR_RECOVERY]) {
    return false;
  }

  if (valid_symbols[JS_EXPRESSION]) {
    if (!scan_js_expression(lexer)) return false;
    lexer->result_symbol = JS_EXPRESSION;
    return true;
  }

  if (iswspace(lexer->lookahead) && valid_symbols[DESCENDANT_OP]) {
    lexer->result_symbol = DESCENDANT_OP;

    lexer->advance(lexer, true);
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }
    lexer->mark_end(lexer);

    if (lexer->lookahead == '#' || lexer->lookahead == '.' ||
        lexer->lookahead == '[' || lexer->lookahead == '-' ||
        lexer->lookahead == '*' || iswalnum(lexer->lookahead)) {
      return true;
    }

    if (lexer->lookahead == ':') {
      lexer->advance(lexer, false);
      if (iswspace(lexer->lookahead)) {
        return false;
      }
      for (;;) {
        if (lexer->lookahead == ';' || lexer->lookahead == '}' ||
            lexer->eof(lexer)) {
          return false;
        }
        if (lexer->lookahead == '{') {
          return true;
        }
        lexer->advance(lexer, false);
      }
    }
  }

  if (valid_symbols[PSEUDO_CLASS_SELECTOR_COLON]) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }
    if (lexer->lookahead == ':') {
      advance(lexer);
      if (lexer->lookahead == ':') {
        return false;
      }
      lexer->mark_end(lexer);
      // We need a { to be a pseudo class selector, a ; indicates a property
      // The $ is added for styled-components interpolation syntax which should
      // not be considered a pseudo class selector.
      while (lexer->lookahead != ';' && lexer->lookahead != '}' &&
             lexer->lookahead != '$' && !lexer->eof(lexer)) {
        advance(lexer);
        if (lexer->lookahead == '{') {
          lexer->result_symbol = PSEUDO_CLASS_SELECTOR_COLON;
          return true;
        }
      }
      return false;
    }
  }

  return false;
}
