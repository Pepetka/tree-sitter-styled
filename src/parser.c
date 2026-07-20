#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 411
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 144
#define ALIAS_COUNT 10
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_has = 17,
  anon_sym_not = 18,
  anon_sym_is = 19,
  anon_sym_where = 20,
  anon_sym_host = 21,
  anon_sym_host_DASHcontext = 22,
  anon_sym_nth_DASHchild = 23,
  anon_sym_nth_DASHlast_DASHchild = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_POUND = 26,
  anon_sym_LBRACK = 27,
  anon_sym_EQ = 28,
  anon_sym_TILDE_EQ = 29,
  anon_sym_CARET_EQ = 30,
  anon_sym_PIPE_EQ = 31,
  anon_sym_STAR_EQ = 32,
  anon_sym_DOLLAR_EQ = 33,
  anon_sym_RBRACK = 34,
  anon_sym_GT = 35,
  anon_sym_TILDE = 36,
  anon_sym_PLUS = 37,
  anon_sym_PIPE = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_even = 41,
  anon_sym_odd = 42,
  anon_sym_of = 43,
  sym__nth_functional_notation = 44,
  anon_sym_COLON = 45,
  sym_important = 46,
  anon_sym_LPAREN2 = 47,
  anon_sym_and = 48,
  anon_sym_or = 49,
  anon_sym_only = 50,
  anon_sym_selector = 51,
  aux_sym_color_value_token1 = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_string_value_token1 = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_string_value_token2 = 56,
  sym_escape_sequence = 57,
  aux_sym_integer_value_token1 = 58,
  aux_sym_float_value_token1 = 59,
  sym_unit = 60,
  anon_sym_LBRACK2 = 61,
  anon_sym_DASH = 62,
  anon_sym_SLASH = 63,
  sym_identifier = 64,
  sym_at_keyword = 65,
  sym_js_comment = 66,
  sym_comment = 67,
  sym_plain_value = 68,
  anon_sym_DOLLAR_LBRACE = 69,
  anon_sym_RBRACE_SEMI = 70,
  sym__js_statement = 71,
  sym__descendant_operator = 72,
  sym__pseudo_class_selector_colon = 73,
  sym___error_recovery = 74,
  sym_stylesheet = 75,
  sym_import_statement = 76,
  sym_media_statement = 77,
  sym_charset_statement = 78,
  sym_namespace_statement = 79,
  sym_keyframes_statement = 80,
  sym_keyframe_block_list = 81,
  sym_keyframe_block = 82,
  sym_supports_statement = 83,
  sym_postcss_statement = 84,
  sym_at_rule = 85,
  sym_rule_set = 86,
  sym_selectors = 87,
  sym_block = 88,
  sym__selector = 89,
  sym_universal_selector = 90,
  sym_class_selector = 91,
  sym_pseudo_class_selector = 92,
  sym__nth_child_pseudo_class_selector = 93,
  sym_pseudo_element_selector = 94,
  sym_id_selector = 95,
  sym_attribute_selector = 96,
  sym_child_selector = 97,
  sym_descendant_selector = 98,
  sym_sibling_selector = 99,
  sym_adjacent_sibling_selector = 100,
  sym_namespace_selector = 101,
  sym_pseudo_class_arguments = 102,
  sym_pseudo_class_with_selector_arguments = 103,
  sym_pseudo_class_nth_child_arguments = 104,
  sym_pseudo_element_arguments = 105,
  sym_declaration = 106,
  sym_last_declaration = 107,
  sym__query = 108,
  sym_feature_query = 109,
  sym_parenthesized_query = 110,
  sym_binary_query = 111,
  sym_unary_query = 112,
  sym_selector_query = 113,
  sym__value = 114,
  sym_parenthesized_value = 115,
  sym_color_value = 116,
  sym_string_value = 117,
  sym_integer_value = 118,
  sym_float_value = 119,
  sym_grid_value = 120,
  sym_call_expression = 121,
  sym_binary_expression = 122,
  sym_arguments = 123,
  sym_class_name = 124,
  sym_interpolation = 125,
  sym__inline_interpolation = 126,
  aux_sym__js_expressions = 127,
  sym__js_expression = 128,
  sym__js_block = 129,
  aux_sym_stylesheet_repeat1 = 130,
  aux_sym_import_statement_repeat1 = 131,
  aux_sym_keyframe_block_list_repeat1 = 132,
  aux_sym_postcss_statement_repeat1 = 133,
  aux_sym_selectors_repeat1 = 134,
  aux_sym_block_repeat1 = 135,
  aux_sym_pseudo_class_arguments_repeat1 = 136,
  aux_sym_declaration_repeat1 = 137,
  aux_sym_string_value_repeat1 = 138,
  aux_sym_string_value_repeat2 = 139,
  aux_sym_grid_value_repeat1 = 140,
  aux_sym_arguments_repeat1 = 141,
  aux_sym_class_name_repeat1 = 142,
  aux_sym__js_block_repeat1 = 143,
  alias_sym_attribute_name = 144,
  alias_sym_feature_name = 145,
  alias_sym_function_name = 146,
  alias_sym_id_name = 147,
  alias_sym_js_expression = 148,
  alias_sym_keyframes_name = 149,
  alias_sym_keyword_query = 150,
  alias_sym_namespace_name = 151,
  alias_sym_property_name = 152,
  alias_sym_tag_name = 153,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_has] = "class_name",
  [anon_sym_not] = "not",
  [anon_sym_is] = "class_name",
  [anon_sym_where] = "class_name",
  [anon_sym_host] = "class_name",
  [anon_sym_host_DASHcontext] = "class_name",
  [anon_sym_nth_DASHchild] = "class_name",
  [anon_sym_nth_DASHlast_DASHchild] = "class_name",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_even] = "plain_value",
  [anon_sym_odd] = "plain_value",
  [anon_sym_of] = "of",
  [sym__nth_functional_notation] = "plain_value",
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_js_comment] = "js_comment",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE_SEMI] = "};",
  [sym__js_statement] = "_js_statement",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_postcss_statement] = "postcss_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym__nth_child_pseudo_class_selector] = "_nth_child_pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_class_with_selector_arguments] = "arguments",
  [sym_pseudo_class_nth_child_arguments] = "arguments",
  [sym_pseudo_element_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_string_value] = "string_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_class_name] = "class_name",
  [sym_interpolation] = "interpolation",
  [sym__inline_interpolation] = "interpolation",
  [aux_sym__js_expressions] = "_js_expressions",
  [sym__js_expression] = "_js_expression",
  [sym__js_block] = "_js_block",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_string_value_repeat1] = "string_value_repeat1",
  [aux_sym_string_value_repeat2] = "string_value_repeat2",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_class_name_repeat1] = "class_name_repeat1",
  [aux_sym__js_block_repeat1] = "_js_block_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_js_expression] = "js_expression",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_has] = sym_class_name,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_is] = sym_class_name,
  [anon_sym_where] = sym_class_name,
  [anon_sym_host] = sym_class_name,
  [anon_sym_host_DASHcontext] = sym_class_name,
  [anon_sym_nth_DASHchild] = sym_class_name,
  [anon_sym_nth_DASHlast_DASHchild] = sym_class_name,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_even] = sym_plain_value,
  [anon_sym_odd] = sym_plain_value,
  [anon_sym_of] = anon_sym_of,
  [sym__nth_functional_notation] = sym_plain_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_js_comment] = sym_js_comment,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [sym__js_statement] = sym__js_statement,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_postcss_statement] = sym_postcss_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym__nth_child_pseudo_class_selector] = sym__nth_child_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_class_with_selector_arguments] = sym_arguments,
  [sym_pseudo_class_nth_child_arguments] = sym_arguments,
  [sym_pseudo_element_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_string_value] = sym_string_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_class_name] = sym_class_name,
  [sym_interpolation] = sym_interpolation,
  [sym__inline_interpolation] = sym_interpolation,
  [aux_sym__js_expressions] = aux_sym__js_expressions,
  [sym__js_expression] = sym__js_expression,
  [sym__js_block] = sym__js_block,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_string_value_repeat1] = aux_sym_string_value_repeat1,
  [aux_sym_string_value_repeat2] = aux_sym_string_value_repeat2,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_class_name_repeat1] = aux_sym_class_name_repeat1,
  [aux_sym__js_block_repeat1] = aux_sym__js_block_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_js_expression] = alias_sym_js_expression,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host_DASHcontext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHlast_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_even] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_odd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym__nth_functional_notation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_js_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__js_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
  },
  [sym___error_recovery] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_postcss_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym__nth_child_pseudo_class_selector] = {
    .visible = false,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_with_selector_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_nth_child_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_grid_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__js_expressions] = {
    .visible = false,
    .named = false,
  },
  [sym__js_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__js_block] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postcss_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__js_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_js_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [1] = sym_class_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [1] = alias_sym_js_expression,
  },
  [11] = {
    [2] = sym_class_name,
  },
  [12] = {
    [2] = alias_sym_tag_name,
  },
  [13] = {
    [2] = alias_sym_id_name,
  },
  [14] = {
    [1] = alias_sym_namespace_name,
  },
  [15] = {
    [0] = alias_sym_property_name,
  },
  [16] = {
    [2] = alias_sym_attribute_name,
  },
  [17] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    alias_sym_attribute_name,
  aux_sym__js_expressions, 2,
    aux_sym__js_expressions,
    alias_sym_js_expression,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 4,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 25,
  [73] = 47,
  [74] = 55,
  [75] = 75,
  [76] = 76,
  [77] = 26,
  [78] = 35,
  [79] = 79,
  [80] = 32,
  [81] = 76,
  [82] = 82,
  [83] = 54,
  [84] = 56,
  [85] = 51,
  [86] = 86,
  [87] = 50,
  [88] = 24,
  [89] = 53,
  [90] = 49,
  [91] = 45,
  [92] = 42,
  [93] = 30,
  [94] = 23,
  [95] = 39,
  [96] = 38,
  [97] = 27,
  [98] = 98,
  [99] = 29,
  [100] = 44,
  [101] = 31,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 103,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 116,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 117,
  [127] = 125,
  [128] = 128,
  [129] = 118,
  [130] = 116,
  [131] = 121,
  [132] = 132,
  [133] = 122,
  [134] = 134,
  [135] = 122,
  [136] = 121,
  [137] = 137,
  [138] = 68,
  [139] = 63,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 63,
  [185] = 185,
  [186] = 186,
  [187] = 68,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 200,
  [204] = 199,
  [205] = 205,
  [206] = 206,
  [207] = 206,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 209,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 123,
  [220] = 220,
  [221] = 221,
  [222] = 182,
  [223] = 223,
  [224] = 165,
  [225] = 225,
  [226] = 226,
  [227] = 166,
  [228] = 228,
  [229] = 229,
  [230] = 223,
  [231] = 228,
  [232] = 232,
  [233] = 233,
  [234] = 181,
  [235] = 189,
  [236] = 63,
  [237] = 179,
  [238] = 180,
  [239] = 183,
  [240] = 185,
  [241] = 186,
  [242] = 188,
  [243] = 192,
  [244] = 191,
  [245] = 245,
  [246] = 190,
  [247] = 68,
  [248] = 123,
  [249] = 249,
  [250] = 166,
  [251] = 182,
  [252] = 165,
  [253] = 191,
  [254] = 179,
  [255] = 180,
  [256] = 190,
  [257] = 183,
  [258] = 63,
  [259] = 185,
  [260] = 68,
  [261] = 189,
  [262] = 181,
  [263] = 186,
  [264] = 192,
  [265] = 188,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 267,
  [272] = 267,
  [273] = 273,
  [274] = 270,
  [275] = 275,
  [276] = 276,
  [277] = 266,
  [278] = 275,
  [279] = 268,
  [280] = 276,
  [281] = 281,
  [282] = 282,
  [283] = 282,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 281,
  [290] = 290,
  [291] = 269,
  [292] = 286,
  [293] = 293,
  [294] = 286,
  [295] = 295,
  [296] = 296,
  [297] = 287,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 303,
  [306] = 306,
  [307] = 307,
  [308] = 306,
  [309] = 302,
  [310] = 299,
  [311] = 307,
  [312] = 303,
  [313] = 301,
  [314] = 304,
  [315] = 315,
  [316] = 316,
  [317] = 304,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 35,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 320,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 320,
  [332] = 330,
  [333] = 333,
  [334] = 328,
  [335] = 329,
  [336] = 45,
  [337] = 337,
  [338] = 330,
  [339] = 320,
  [340] = 328,
  [341] = 341,
  [342] = 341,
  [343] = 329,
  [344] = 328,
  [345] = 345,
  [346] = 329,
  [347] = 330,
  [348] = 26,
  [349] = 333,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 345,
  [354] = 328,
  [355] = 355,
  [356] = 329,
  [357] = 52,
  [358] = 330,
  [359] = 320,
  [360] = 333,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 361,
  [365] = 365,
  [366] = 363,
  [367] = 322,
  [368] = 368,
  [369] = 166,
  [370] = 355,
  [371] = 326,
  [372] = 372,
  [373] = 361,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 166,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 377,
  [385] = 382,
  [386] = 386,
  [387] = 387,
  [388] = 386,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 390,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 394,
  [398] = 398,
  [399] = 396,
  [400] = 392,
  [401] = 391,
  [402] = 402,
  [403] = 396,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 392,
  [408] = 408,
  [409] = 394,
  [410] = 398,
};

static inline bool sym_js_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(145);
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(84);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '~') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '[') ADVANCE(302);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '[') ADVANCE(302);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '[') ADVANCE(302);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '[') ADVANCE(302);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '[') ADVANCE(302);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '[') ADVANCE(302);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '[') ADVANCE(302);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '~') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '~') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(432);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(429);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(434);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == 'w') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == 'v') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == 'v') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(445);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(445);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '{') ADVANCE(439);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead == '`') ADVANCE(446);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == 'k') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(389);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 126:
      if (lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(439);
      END_STATE();
    case 129:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(312);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(268);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 138:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 139:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(51);
      END_STATE();
    case 140:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(437);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 142:
      if (eof) ADVANCE(145);
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(43);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(84);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '~') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 143:
      if (eof) ADVANCE(145);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(199);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 144:
      if (eof) ADVANCE(145);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '&') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(199);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ';') ADVANCE(440);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_from);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_to);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(264);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(264);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'c') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 't') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 't') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(299);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '/') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(299);
      if (lookahead == '/') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(312);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(429);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(51);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '/') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'y') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(329);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(414);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(406);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(391);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(393);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(404);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(409);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'y') ADVANCE(396);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == 'y') ADVANCE(397);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(433);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(430);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(432);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(438);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead == '`') ADVANCE(446);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(446);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(140);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(431);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '`') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '/') ADVANCE(441);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(446);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '/') ADVANCE(436);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(446);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 143, .external_lex_state = 2},
  [2] = {.lex_state = 143, .external_lex_state = 2},
  [3] = {.lex_state = 143, .external_lex_state = 2},
  [4] = {.lex_state = 14, .external_lex_state = 2},
  [5] = {.lex_state = 14, .external_lex_state = 2},
  [6] = {.lex_state = 14, .external_lex_state = 2},
  [7] = {.lex_state = 14, .external_lex_state = 2},
  [8] = {.lex_state = 14, .external_lex_state = 2},
  [9] = {.lex_state = 14, .external_lex_state = 2},
  [10] = {.lex_state = 14, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 2},
  [12] = {.lex_state = 5, .external_lex_state = 2},
  [13] = {.lex_state = 5, .external_lex_state = 2},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 14, .external_lex_state = 2},
  [21] = {.lex_state = 14, .external_lex_state = 2},
  [22] = {.lex_state = 14, .external_lex_state = 2},
  [23] = {.lex_state = 143, .external_lex_state = 2},
  [24] = {.lex_state = 143, .external_lex_state = 2},
  [25] = {.lex_state = 143, .external_lex_state = 2},
  [26] = {.lex_state = 143, .external_lex_state = 2},
  [27] = {.lex_state = 143, .external_lex_state = 2},
  [28] = {.lex_state = 14, .external_lex_state = 2},
  [29] = {.lex_state = 143, .external_lex_state = 2},
  [30] = {.lex_state = 143, .external_lex_state = 2},
  [31] = {.lex_state = 143, .external_lex_state = 2},
  [32] = {.lex_state = 143, .external_lex_state = 2},
  [33] = {.lex_state = 14, .external_lex_state = 2},
  [34] = {.lex_state = 14, .external_lex_state = 2},
  [35] = {.lex_state = 143, .external_lex_state = 2},
  [36] = {.lex_state = 14, .external_lex_state = 2},
  [37] = {.lex_state = 6, .external_lex_state = 3},
  [38] = {.lex_state = 143, .external_lex_state = 2},
  [39] = {.lex_state = 143, .external_lex_state = 2},
  [40] = {.lex_state = 14, .external_lex_state = 2},
  [41] = {.lex_state = 14, .external_lex_state = 2},
  [42] = {.lex_state = 143, .external_lex_state = 2},
  [43] = {.lex_state = 14, .external_lex_state = 2},
  [44] = {.lex_state = 143, .external_lex_state = 2},
  [45] = {.lex_state = 143, .external_lex_state = 2},
  [46] = {.lex_state = 14, .external_lex_state = 2},
  [47] = {.lex_state = 143, .external_lex_state = 2},
  [48] = {.lex_state = 14, .external_lex_state = 2},
  [49] = {.lex_state = 143, .external_lex_state = 2},
  [50] = {.lex_state = 143, .external_lex_state = 2},
  [51] = {.lex_state = 143, .external_lex_state = 2},
  [52] = {.lex_state = 143, .external_lex_state = 2},
  [53] = {.lex_state = 143, .external_lex_state = 2},
  [54] = {.lex_state = 143, .external_lex_state = 2},
  [55] = {.lex_state = 143, .external_lex_state = 2},
  [56] = {.lex_state = 143, .external_lex_state = 2},
  [57] = {.lex_state = 14, .external_lex_state = 2},
  [58] = {.lex_state = 14, .external_lex_state = 2},
  [59] = {.lex_state = 14, .external_lex_state = 2},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 9, .external_lex_state = 3},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 9, .external_lex_state = 3},
  [68] = {.lex_state = 9, .external_lex_state = 3},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 14, .external_lex_state = 2},
  [73] = {.lex_state = 14, .external_lex_state = 2},
  [74] = {.lex_state = 14, .external_lex_state = 2},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 14, .external_lex_state = 2},
  [78] = {.lex_state = 14, .external_lex_state = 2},
  [79] = {.lex_state = 14, .external_lex_state = 2},
  [80] = {.lex_state = 14, .external_lex_state = 2},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 14, .external_lex_state = 2},
  [83] = {.lex_state = 14, .external_lex_state = 2},
  [84] = {.lex_state = 14, .external_lex_state = 2},
  [85] = {.lex_state = 14, .external_lex_state = 2},
  [86] = {.lex_state = 16, .external_lex_state = 3},
  [87] = {.lex_state = 14, .external_lex_state = 2},
  [88] = {.lex_state = 14, .external_lex_state = 2},
  [89] = {.lex_state = 14, .external_lex_state = 2},
  [90] = {.lex_state = 14, .external_lex_state = 2},
  [91] = {.lex_state = 14, .external_lex_state = 2},
  [92] = {.lex_state = 14, .external_lex_state = 2},
  [93] = {.lex_state = 14, .external_lex_state = 2},
  [94] = {.lex_state = 14, .external_lex_state = 2},
  [95] = {.lex_state = 14, .external_lex_state = 2},
  [96] = {.lex_state = 14, .external_lex_state = 2},
  [97] = {.lex_state = 14, .external_lex_state = 2},
  [98] = {.lex_state = 16, .external_lex_state = 3},
  [99] = {.lex_state = 14, .external_lex_state = 2},
  [100] = {.lex_state = 14, .external_lex_state = 2},
  [101] = {.lex_state = 14, .external_lex_state = 2},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 16, .external_lex_state = 3},
  [108] = {.lex_state = 16, .external_lex_state = 3},
  [109] = {.lex_state = 16, .external_lex_state = 3},
  [110] = {.lex_state = 16, .external_lex_state = 3},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 16, .external_lex_state = 3},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 16, .external_lex_state = 3},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 16, .external_lex_state = 3},
  [138] = {.lex_state = 16, .external_lex_state = 3},
  [139] = {.lex_state = 16, .external_lex_state = 3},
  [140] = {.lex_state = 16, .external_lex_state = 3},
  [141] = {.lex_state = 16, .external_lex_state = 3},
  [142] = {.lex_state = 16, .external_lex_state = 3},
  [143] = {.lex_state = 16, .external_lex_state = 3},
  [144] = {.lex_state = 16, .external_lex_state = 3},
  [145] = {.lex_state = 16, .external_lex_state = 3},
  [146] = {.lex_state = 16, .external_lex_state = 3},
  [147] = {.lex_state = 16, .external_lex_state = 3},
  [148] = {.lex_state = 16, .external_lex_state = 3},
  [149] = {.lex_state = 16, .external_lex_state = 3},
  [150] = {.lex_state = 16, .external_lex_state = 3},
  [151] = {.lex_state = 16, .external_lex_state = 3},
  [152] = {.lex_state = 16, .external_lex_state = 3},
  [153] = {.lex_state = 16, .external_lex_state = 3},
  [154] = {.lex_state = 16, .external_lex_state = 3},
  [155] = {.lex_state = 16, .external_lex_state = 3},
  [156] = {.lex_state = 16, .external_lex_state = 3},
  [157] = {.lex_state = 16, .external_lex_state = 3},
  [158] = {.lex_state = 16, .external_lex_state = 3},
  [159] = {.lex_state = 16, .external_lex_state = 3},
  [160] = {.lex_state = 16, .external_lex_state = 3},
  [161] = {.lex_state = 16, .external_lex_state = 3},
  [162] = {.lex_state = 16, .external_lex_state = 3},
  [163] = {.lex_state = 16, .external_lex_state = 3},
  [164] = {.lex_state = 16, .external_lex_state = 3},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 16, .external_lex_state = 3},
  [168] = {.lex_state = 16, .external_lex_state = 3},
  [169] = {.lex_state = 16, .external_lex_state = 3},
  [170] = {.lex_state = 16, .external_lex_state = 3},
  [171] = {.lex_state = 16, .external_lex_state = 3},
  [172] = {.lex_state = 16, .external_lex_state = 3},
  [173] = {.lex_state = 16, .external_lex_state = 3},
  [174] = {.lex_state = 16, .external_lex_state = 3},
  [175] = {.lex_state = 16, .external_lex_state = 3},
  [176] = {.lex_state = 16, .external_lex_state = 3},
  [177] = {.lex_state = 16, .external_lex_state = 3},
  [178] = {.lex_state = 16, .external_lex_state = 3},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 16, .external_lex_state = 3},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 16, .external_lex_state = 3},
  [202] = {.lex_state = 16, .external_lex_state = 3},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 16, .external_lex_state = 3},
  [206] = {.lex_state = 21},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 14, .external_lex_state = 3},
  [210] = {.lex_state = 14, .external_lex_state = 3},
  [211] = {.lex_state = 37},
  [212] = {.lex_state = 37},
  [213] = {.lex_state = 14, .external_lex_state = 3},
  [214] = {.lex_state = 14, .external_lex_state = 3},
  [215] = {.lex_state = 14, .external_lex_state = 3},
  [216] = {.lex_state = 14, .external_lex_state = 3},
  [217] = {.lex_state = 14, .external_lex_state = 3},
  [218] = {.lex_state = 14, .external_lex_state = 3},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 14, .external_lex_state = 3},
  [221] = {.lex_state = 14, .external_lex_state = 3},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 23},
  [229] = {.lex_state = 14, .external_lex_state = 3},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 23},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 21},
  [235] = {.lex_state = 21},
  [236] = {.lex_state = 21},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 21},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 21},
  [242] = {.lex_state = 21},
  [243] = {.lex_state = 21},
  [244] = {.lex_state = 21},
  [245] = {.lex_state = 14, .external_lex_state = 3},
  [246] = {.lex_state = 21},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 19},
  [250] = {.lex_state = 26},
  [251] = {.lex_state = 19},
  [252] = {.lex_state = 26},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 19},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 19},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 19},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 19},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 19},
  [263] = {.lex_state = 19},
  [264] = {.lex_state = 19},
  [265] = {.lex_state = 19},
  [266] = {.lex_state = 143},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 143},
  [269] = {.lex_state = 52},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 19},
  [272] = {.lex_state = 19},
  [273] = {.lex_state = 143},
  [274] = {.lex_state = 27},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 52},
  [277] = {.lex_state = 143},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 143},
  [280] = {.lex_state = 52},
  [281] = {.lex_state = 53},
  [282] = {.lex_state = 53},
  [283] = {.lex_state = 53},
  [284] = {.lex_state = 53},
  [285] = {.lex_state = 27},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 19},
  [289] = {.lex_state = 53},
  [290] = {.lex_state = 27},
  [291] = {.lex_state = 53},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 53},
  [295] = {.lex_state = 27},
  [296] = {.lex_state = 27},
  [297] = {.lex_state = 27},
  [298] = {.lex_state = 27},
  [299] = {.lex_state = 14},
  [300] = {.lex_state = 19},
  [301] = {.lex_state = 19},
  [302] = {.lex_state = 143},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 52},
  [305] = {.lex_state = 19},
  [306] = {.lex_state = 27},
  [307] = {.lex_state = 52},
  [308] = {.lex_state = 27},
  [309] = {.lex_state = 143},
  [310] = {.lex_state = 14},
  [311] = {.lex_state = 52},
  [312] = {.lex_state = 19},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 52},
  [315] = {.lex_state = 19},
  [316] = {.lex_state = 27},
  [317] = {.lex_state = 52},
  [318] = {.lex_state = 27},
  [319] = {.lex_state = 143},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 14},
  [322] = {.lex_state = 52},
  [323] = {.lex_state = 143},
  [324] = {.lex_state = 143},
  [325] = {.lex_state = 14},
  [326] = {.lex_state = 52},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 3},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 143},
  [334] = {.lex_state = 3},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 143},
  [337] = {.lex_state = 27},
  [338] = {.lex_state = 3},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 3},
  [341] = {.lex_state = 27},
  [342] = {.lex_state = 27},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 3},
  [345] = {.lex_state = 143},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 3},
  [348] = {.lex_state = 143},
  [349] = {.lex_state = 143},
  [350] = {.lex_state = 143},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 143},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 52},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 143},
  [358] = {.lex_state = 3},
  [359] = {.lex_state = 2},
  [360] = {.lex_state = 143},
  [361] = {.lex_state = 143},
  [362] = {.lex_state = 143},
  [363] = {.lex_state = 143},
  [364] = {.lex_state = 143},
  [365] = {.lex_state = 143},
  [366] = {.lex_state = 143},
  [367] = {.lex_state = 53},
  [368] = {.lex_state = 27},
  [369] = {.lex_state = 28},
  [370] = {.lex_state = 53},
  [371] = {.lex_state = 53},
  [372] = {.lex_state = 143},
  [373] = {.lex_state = 143},
  [374] = {.lex_state = 143},
  [375] = {.lex_state = 143},
  [376] = {.lex_state = 143},
  [377] = {.lex_state = 143},
  [378] = {.lex_state = 48},
  [379] = {.lex_state = 27},
  [380] = {.lex_state = 38},
  [381] = {.lex_state = 143},
  [382] = {.lex_state = 143},
  [383] = {.lex_state = 143},
  [384] = {.lex_state = 143},
  [385] = {.lex_state = 143},
  [386] = {.lex_state = 143},
  [387] = {.lex_state = 143},
  [388] = {.lex_state = 143},
  [389] = {.lex_state = 143},
  [390] = {.lex_state = 143},
  [391] = {.lex_state = 143},
  [392] = {.lex_state = 50},
  [393] = {.lex_state = 143},
  [394] = {.lex_state = 143},
  [395] = {.lex_state = 143},
  [396] = {.lex_state = 143},
  [397] = {.lex_state = 143},
  [398] = {.lex_state = 14},
  [399] = {.lex_state = 143},
  [400] = {.lex_state = 50},
  [401] = {.lex_state = 143},
  [402] = {.lex_state = 14},
  [403] = {.lex_state = 143},
  [404] = {.lex_state = 14},
  [405] = {.lex_state = 14},
  [406] = {.lex_state = 14},
  [407] = {.lex_state = 50},
  [408] = {.lex_state = 23},
  [409] = {.lex_state = 143},
  [410] = {.lex_state = 14},
};

enum {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_host_DASHcontext] = ACTIONS(1),
    [anon_sym_nth_DASHchild] = ACTIONS(1),
    [anon_sym_nth_DASHlast_DASHchild] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_even] = ACTIONS(1),
    [anon_sym_odd] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(395),
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_keyframe_block] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(385),
    [sym__selector] = STATE(216),
    [sym_universal_selector] = STATE(216),
    [sym_class_selector] = STATE(216),
    [sym_pseudo_class_selector] = STATE(216),
    [sym_pseudo_element_selector] = STATE(216),
    [sym_id_selector] = STATE(216),
    [sym_attribute_selector] = STATE(216),
    [sym_child_selector] = STATE(216),
    [sym_descendant_selector] = STATE(216),
    [sym_sibling_selector] = STATE(216),
    [sym_adjacent_sibling_selector] = STATE(216),
    [sym_namespace_selector] = STATE(216),
    [sym_declaration] = STATE(2),
    [sym_string_value] = STATE(216),
    [sym_integer_value] = STATE(384),
    [sym_interpolation] = STATE(2),
    [aux_sym_stylesheet_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATmedia] = ACTIONS(11),
    [anon_sym_ATcharset] = ACTIONS(13),
    [anon_sym_ATnamespace] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [sym_from] = ACTIONS(19),
    [sym_to] = ACTIONS(19),
    [anon_sym_ATsupports] = ACTIONS(21),
    [sym_nesting_selector] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [aux_sym_integer_value_token1] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_at_keyword] = ACTIONS(51),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(53),
    [sym__pseudo_class_selector_colon] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(9), 1,
      anon_sym_ATimport,
    ACTIONS(11), 1,
      anon_sym_ATmedia,
    ACTIONS(13), 1,
      anon_sym_ATcharset,
    ACTIONS(15), 1,
      anon_sym_ATnamespace,
    ACTIONS(21), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_integer_value_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_at_keyword,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(384), 1,
      sym_integer_value,
    STATE(385), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
      sym_from,
      sym_to,
    STATE(3), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_keyframe_block,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_stylesheet_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [117] = 30,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_ATimport,
    ACTIONS(64), 1,
      anon_sym_ATmedia,
    ACTIONS(67), 1,
      anon_sym_ATcharset,
    ACTIONS(70), 1,
      anon_sym_ATnamespace,
    ACTIONS(79), 1,
      anon_sym_ATsupports,
    ACTIONS(82), 1,
      sym_nesting_selector,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_COLON_COLON,
    ACTIONS(94), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_GT,
    ACTIONS(103), 1,
      anon_sym_TILDE,
    ACTIONS(106), 1,
      anon_sym_PLUS,
    ACTIONS(109), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      aux_sym_integer_value_token1,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(124), 1,
      sym_at_keyword,
    ACTIONS(127), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(130), 1,
      sym__pseudo_class_selector_colon,
    STATE(384), 1,
      sym_integer_value,
    STATE(385), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(76), 2,
      sym_from,
      sym_to,
    STATE(3), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_keyframe_block,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_stylesheet_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [234] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(133), 1,
      anon_sym_ATimport,
    ACTIONS(135), 1,
      anon_sym_ATmedia,
    ACTIONS(137), 1,
      anon_sym_ATcharset,
    ACTIONS(139), 1,
      anon_sym_ATnamespace,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      anon_sym_ATsupports,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_at_keyword,
    ACTIONS(153), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(382), 1,
      sym_selectors,
    STATE(396), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [344] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(133), 1,
      anon_sym_ATimport,
    ACTIONS(135), 1,
      anon_sym_ATmedia,
    ACTIONS(137), 1,
      anon_sym_ATcharset,
    ACTIONS(139), 1,
      anon_sym_ATnamespace,
    ACTIONS(145), 1,
      anon_sym_ATsupports,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_at_keyword,
    ACTIONS(153), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym_selectors,
    STATE(403), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [454] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(133), 1,
      anon_sym_ATimport,
    ACTIONS(135), 1,
      anon_sym_ATmedia,
    ACTIONS(137), 1,
      anon_sym_ATcharset,
    ACTIONS(139), 1,
      anon_sym_ATnamespace,
    ACTIONS(145), 1,
      anon_sym_ATsupports,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_at_keyword,
    ACTIONS(153), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym_selectors,
    STATE(394), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [564] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(133), 1,
      anon_sym_ATimport,
    ACTIONS(135), 1,
      anon_sym_ATmedia,
    ACTIONS(137), 1,
      anon_sym_ATcharset,
    ACTIONS(139), 1,
      anon_sym_ATnamespace,
    ACTIONS(145), 1,
      anon_sym_ATsupports,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_at_keyword,
    ACTIONS(153), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym_selectors,
    STATE(409), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [674] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(133), 1,
      anon_sym_ATimport,
    ACTIONS(135), 1,
      anon_sym_ATmedia,
    ACTIONS(137), 1,
      anon_sym_ATcharset,
    ACTIONS(139), 1,
      anon_sym_ATnamespace,
    ACTIONS(145), 1,
      anon_sym_ATsupports,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_at_keyword,
    ACTIONS(153), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym_selectors,
    STATE(399), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [784] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(133), 1,
      anon_sym_ATimport,
    ACTIONS(135), 1,
      anon_sym_ATmedia,
    ACTIONS(137), 1,
      anon_sym_ATcharset,
    ACTIONS(139), 1,
      anon_sym_ATnamespace,
    ACTIONS(145), 1,
      anon_sym_ATsupports,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_at_keyword,
    ACTIONS(153), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym_selectors,
    STATE(397), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [894] = 27,
    ACTIONS(165), 1,
      anon_sym_ATimport,
    ACTIONS(168), 1,
      anon_sym_ATmedia,
    ACTIONS(171), 1,
      anon_sym_ATcharset,
    ACTIONS(174), 1,
      anon_sym_ATnamespace,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      anon_sym_ATsupports,
    ACTIONS(185), 1,
      sym_nesting_selector,
    ACTIONS(188), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_GT,
    ACTIONS(206), 1,
      anon_sym_TILDE,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym_at_keyword,
    ACTIONS(227), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(230), 1,
      sym__pseudo_class_selector_colon,
    STATE(382), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(216), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [1001] = 28,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(233), 1,
      sym_nesting_selector,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(67), 1,
      sym_string_value,
    STATE(69), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(215), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1105] = 28,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(261), 1,
      sym_nesting_selector,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_string_value,
    STATE(71), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(218), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1209] = 27,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      sym_nesting_selector,
    STATE(67), 1,
      sym_string_value,
    STATE(75), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(220), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1310] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      anon_sym_LPAREN2,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    STATE(106), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(270), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1389] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_important,
    ACTIONS(291), 1,
      anon_sym_LPAREN2,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(368), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(303), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1456] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_LPAREN2,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(309), 1,
      sym_important,
    ACTIONS(311), 1,
      sym_plain_value,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(368), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(305), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1523] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      sym_important,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_plain_value,
    STATE(65), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(321), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(193), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1595] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_STAR,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_plain_value,
    ACTIONS(329), 1,
      sym_important,
    STATE(81), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(321), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(193), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1664] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_STAR,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_plain_value,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      sym_important,
    STATE(76), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(321), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(193), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1733] = 17,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(335), 1,
      sym_nesting_selector,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(217), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [1798] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(178), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [1860] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(343), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(221), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [1922] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(347), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(345), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [1958] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(351), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(349), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [1994] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(355), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(353), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2030] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(359), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(357), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2066] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(363), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(361), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2102] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(365), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(156), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2164] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(369), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(367), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2200] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(373), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(371), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2236] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(377), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(375), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2272] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(381), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(379), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2308] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(383), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(155), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2370] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(385), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(154), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2432] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(389), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(387), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2468] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(391), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(153), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2530] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_arguments,
    ACTIONS(397), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(395), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(401), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(393), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2576] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(405), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(403), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2612] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(409), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(407), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2648] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(411), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(174), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2710] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(171), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2772] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(417), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(415), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2808] = 17,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      sym_nesting_selector,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(198), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(245), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [2872] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(425), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(423), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2908] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(429), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(427), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [2944] = 17,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      sym_nesting_selector,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(201), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(245), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [3008] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(435), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(433), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3044] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(437), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(229), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3106] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(441), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(439), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3142] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(445), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(443), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3178] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(449), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(447), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3214] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(453), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(451), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3250] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(457), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(455), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3286] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(461), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(459), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3322] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(465), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(463), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3358] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(469), 12,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(467), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_integer_value_token1,
      anon_sym_DOLLAR_LBRACE,
  [3394] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(471), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(137), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3456] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(473), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(210), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3518] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(475), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(176), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3580] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(360), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3645] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(333), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3710] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(349), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3775] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(487), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(485), 16,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3811] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(489), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3871] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_plain_value,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      sym_important,
    STATE(70), 1,
      aux_sym_declaration_repeat1,
    STATE(193), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3935] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      sym_important,
    ACTIONS(505), 1,
      anon_sym_LPAREN2,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      aux_sym_integer_value_token1,
    ACTIONS(517), 1,
      aux_sym_float_value_token1,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(523), 1,
      sym_identifier,
    ACTIONS(526), 1,
      sym_plain_value,
    ACTIONS(529), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(497), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3995] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(534), 6,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(538), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(532), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4035] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(542), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(540), 16,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4071] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(365), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4135] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      sym_important,
    ACTIONS(559), 1,
      anon_sym_LPAREN2,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    ACTIONS(568), 1,
      aux_sym_integer_value_token1,
    ACTIONS(571), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(580), 1,
      sym_plain_value,
    ACTIONS(583), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(70), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(551), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(193), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4197] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(376), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4261] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(355), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(353), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4294] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(435), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(433), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4327] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(465), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(463), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4360] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(588), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4419] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_plain_value,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(592), 1,
      sym_important,
    STATE(70), 1,
      aux_sym_declaration_repeat1,
    STATE(193), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4480] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(359), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(357), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4513] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(389), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(387), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4546] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(355), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(353), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4579] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(381), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(379), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4612] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_plain_value,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(594), 1,
      sym_important,
    STATE(70), 1,
      aux_sym_declaration_repeat1,
    STATE(193), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4673] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(598), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4706] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(461), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(459), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4739] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(469), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(467), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4772] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(449), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(447), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4805] = 5,
    STATE(98), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(604), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(600), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4842] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(445), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(443), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4875] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(351), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(349), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4908] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(457), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(455), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4941] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(441), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(439), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4974] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(429), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(427), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5007] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(417), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(415), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5040] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(373), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(371), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5073] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(347), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(345), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5106] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(409), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(407), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5139] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(405), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(403), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5172] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(363), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(361), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5205] = 5,
    STATE(98), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(610), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(606), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5242] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(369), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(367), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5275] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(425), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(423), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5308] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(377), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(375), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5341] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5399] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5457] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5515] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5573] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5631] = 5,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(623), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5666] = 5,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(629), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5701] = 5,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(635), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5736] = 5,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(639), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5771] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5826] = 5,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(647), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(645), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5861] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_important,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      sym_plain_value,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5916] = 5,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(649), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5951] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_arguments,
    ACTIONS(655), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(653), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(395), 7,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(401), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [5992] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_POUND,
    ACTIONS(659), 1,
      sym_important,
    ACTIONS(661), 1,
      anon_sym_LPAREN2,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    ACTIONS(667), 1,
      aux_sym_integer_value_token1,
    ACTIONS(669), 1,
      aux_sym_float_value_token1,
    ACTIONS(671), 1,
      anon_sym_LBRACK2,
    ACTIONS(673), 1,
      sym_identifier,
    ACTIONS(675), 1,
      sym_plain_value,
    ACTIONS(677), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(243), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6044] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      anon_sym_LPAREN2,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    ACTIONS(667), 1,
      aux_sym_integer_value_token1,
    ACTIONS(669), 1,
      aux_sym_float_value_token1,
    ACTIONS(671), 1,
      anon_sym_LBRACK2,
    ACTIONS(673), 1,
      sym_identifier,
    ACTIONS(677), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(679), 1,
      sym_important,
    ACTIONS(681), 1,
      sym_plain_value,
    STATE(207), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6096] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(683), 1,
      sym_important,
    ACTIONS(685), 1,
      sym_plain_value,
    STATE(18), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6148] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(687), 1,
      sym_important,
    ACTIONS(689), 1,
      sym_plain_value,
    STATE(192), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6200] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(691), 1,
      sym_important,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(697), 1,
      sym_plain_value,
    STATE(300), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6252] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(699), 1,
      sym_important,
    ACTIONS(701), 1,
      sym_plain_value,
    STATE(271), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6304] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(309), 1,
      sym_important,
    ACTIONS(311), 1,
      sym_plain_value,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    STATE(305), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6356] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_arguments,
    ACTIONS(401), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(395), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [6392] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(703), 1,
      sym_important,
    ACTIONS(705), 1,
      sym_plain_value,
    STATE(194), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6444] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(707), 1,
      sym_important,
    ACTIONS(709), 1,
      sym_plain_value,
    STATE(301), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6496] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      anon_sym_LPAREN2,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    ACTIONS(667), 1,
      aux_sym_integer_value_token1,
    ACTIONS(669), 1,
      aux_sym_float_value_token1,
    ACTIONS(671), 1,
      anon_sym_LBRACK2,
    ACTIONS(673), 1,
      sym_identifier,
    ACTIONS(677), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(711), 1,
      sym_important,
    ACTIONS(713), 1,
      sym_plain_value,
    STATE(206), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6548] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(715), 1,
      sym_important,
    ACTIONS(717), 1,
      sym_plain_value,
    STATE(313), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6600] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(719), 1,
      sym_important,
    ACTIONS(721), 1,
      sym_plain_value,
    STATE(17), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6652] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      aux_sym_integer_value_token1,
    ACTIONS(251), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(723), 1,
      sym_important,
    ACTIONS(725), 1,
      sym_plain_value,
    STATE(19), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6704] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(727), 1,
      sym_important,
    ACTIONS(729), 1,
      sym_plain_value,
    STATE(264), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6756] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(731), 1,
      sym_important,
    ACTIONS(733), 1,
      sym_plain_value,
    STATE(267), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6808] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(735), 1,
      sym_important,
    ACTIONS(737), 1,
      sym_plain_value,
    STATE(288), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6860] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(739), 1,
      sym_important,
    ACTIONS(741), 1,
      sym_plain_value,
    STATE(312), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6912] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(743), 1,
      sym_important,
    ACTIONS(745), 1,
      sym_plain_value,
    STATE(315), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6964] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    STATE(303), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [7016] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_integer_value_token1,
    ACTIONS(299), 1,
      aux_sym_float_value_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACK2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(747), 1,
      sym_important,
    ACTIONS(749), 1,
      sym_plain_value,
    STATE(272), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [7068] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(755), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(751), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7099] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(540), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7128] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(485), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7157] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(759), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(757), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7186] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(763), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(761), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7215] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(765), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7244] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(769), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7273] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(773), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7302] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(779), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(777), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7331] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(783), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(781), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7360] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(787), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(785), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7389] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(791), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(789), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7418] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(793), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7447] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(799), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(797), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7476] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(803), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(801), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7505] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(805), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7534] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(811), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(809), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7565] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(815), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(813), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7596] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(819), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(817), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7627] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(823), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(821), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7658] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(827), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(825), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7687] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(831), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(829), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7716] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(835), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(833), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7745] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(839), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(837), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7774] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(843), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(841), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7803] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(635), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7832] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(847), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(845), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7861] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(851), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(849), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7890] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_unit,
    ACTIONS(855), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(853), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7923] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_unit,
    ACTIONS(861), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(859), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7956] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(865), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7985] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(871), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(869), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8014] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(393), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8043] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(873), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8072] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(879), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(877), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8103] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(883), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(881), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8132] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(887), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(885), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8161] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(889), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8192] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(893), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8221] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(899), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(897), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8252] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(623), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8281] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(903), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(901), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [8312] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(907), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(905), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8342] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(909), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8372] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(915), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(913), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8402] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(919), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(917), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8432] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(923), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(921), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8462] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(487), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(485), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8492] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(927), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(925), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8522] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(929), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8552] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(542), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(540), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8582] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(935), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(933), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8612] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(939), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(937), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8642] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(943), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(941), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8672] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(947), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(945), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8702] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(951), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(949), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8732] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_STAR,
    ACTIONS(321), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(955), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(953), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8765] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_STAR,
    ACTIONS(321), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(957), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(551), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8798] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_STAR,
    ACTIONS(321), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(961), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(959), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8831] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_SEMI,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(534), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8864] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(534), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8897] = 5,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(967), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(532), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8927] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_SEMI,
    ACTIONS(538), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(534), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8957] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(538), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(534), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8987] = 5,
    ACTIONS(975), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(973), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(532), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9017] = 5,
    ACTIONS(975), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(973), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(393), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9047] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(538), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(534), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [9077] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_SEMI,
    ACTIONS(538), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(534), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [9107] = 5,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(967), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(393), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9137] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(977), 1,
      anon_sym_SEMI,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(979), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(983), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(308), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9176] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(979), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(983), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(306), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9215] = 9,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(989), 1,
      anon_sym_SEMI,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(274), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9250] = 3,
    ACTIONS(993), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(393), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [9272] = 12,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(995), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9312] = 9,
    ACTIONS(1017), 1,
      anon_sym_host,
    ACTIONS(1021), 1,
      sym_escape_sequence,
    ACTIONS(1023), 1,
      sym_identifier,
    STATE(86), 1,
      aux_sym_class_name_repeat1,
    STATE(109), 1,
      sym_class_name,
    STATE(162), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1019), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1015), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9346] = 9,
    ACTIONS(1021), 1,
      sym_escape_sequence,
    ACTIONS(1023), 1,
      sym_identifier,
    ACTIONS(1027), 1,
      anon_sym_host,
    STATE(86), 1,
      aux_sym_class_name_repeat1,
    STATE(107), 1,
      sym_class_name,
    STATE(177), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1019), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1025), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9380] = 3,
    ACTIONS(1029), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(393), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [9402] = 3,
    ACTIONS(1031), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(393), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [9424] = 14,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    STATE(365), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9468] = 14,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    STATE(374), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9512] = 14,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9556] = 14,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    STATE(376), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9600] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(395), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(401), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9627] = 12,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(588), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9666] = 12,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9704] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(917), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(919), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9726] = 6,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(341), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9752] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_unit,
    ACTIONS(853), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(855), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9776] = 6,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(290), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9802] = 6,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(1045), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(368), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9828] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_unit,
    ACTIONS(859), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(861), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9852] = 6,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(297), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9878] = 12,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9916] = 6,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(342), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9942] = 6,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(287), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9968] = 6,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(285), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9994] = 6,
    ACTIONS(277), 1,
      anon_sym_selector,
    ACTIONS(981), 1,
      anon_sym_LPAREN2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(318), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10020] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(913), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(915), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10041] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(937), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(939), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10062] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(485), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(487), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10083] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(905), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(907), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10104] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(909), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(911), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10125] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(921), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(923), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10146] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(925), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(927), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10167] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(929), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(931), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10188] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(933), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(935), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10209] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(949), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(951), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10230] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(945), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(947), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10251] = 11,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(997), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1003), 1,
      anon_sym_GT,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_PLUS,
    ACTIONS(1009), 1,
      anon_sym_PIPE,
    ACTIONS(1011), 1,
      sym__descendant_operator,
    ACTIONS(1013), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10286] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(941), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(943), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10307] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(540), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(542), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10328] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    STATE(262), 1,
      sym_arguments,
    ACTIONS(395), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10353] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1053), 1,
      anon_sym_COLON,
    STATE(262), 1,
      sym_arguments,
    ACTIONS(395), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(653), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10382] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_SLASH,
    ACTIONS(1055), 1,
      sym_unit,
    ACTIONS(859), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10404] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_SLASH,
    ACTIONS(917), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [10424] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_SLASH,
    ACTIONS(1057), 1,
      sym_unit,
    ACTIONS(853), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10446] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_SLASH,
    ACTIONS(945), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10465] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_SLASH,
    ACTIONS(905), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10484] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_SLASH,
    ACTIONS(909), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10503] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_SLASH,
    ACTIONS(941), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10522] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_SLASH,
    ACTIONS(921), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10541] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SLASH,
    ACTIONS(485), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10560] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_SLASH,
    ACTIONS(925), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10579] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SLASH,
    ACTIONS(540), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10598] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_SLASH,
    ACTIONS(937), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10617] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_SLASH,
    ACTIONS(913), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10636] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SLASH,
    ACTIONS(929), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10655] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_SLASH,
    ACTIONS(949), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10674] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_SLASH,
    ACTIONS(933), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10693] = 6,
    ACTIONS(47), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1061), 2,
      sym_from,
      sym_to,
    STATE(273), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10715] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    STATE(361), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10739] = 6,
    ACTIONS(47), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1071), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1061), 2,
      sym_from,
      sym_to,
    STATE(277), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10761] = 6,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
    ACTIONS(1078), 1,
      sym__js_statement,
    STATE(269), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1076), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [10783] = 7,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_block,
    STATE(302), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [10807] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1087), 1,
      anon_sym_RBRACK,
    STATE(373), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10831] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
    STATE(364), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10855] = 6,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    ACTIONS(1096), 1,
      aux_sym_integer_value_token1,
    STATE(377), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1093), 2,
      sym_from,
      sym_to,
    STATE(273), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10877] = 7,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_block,
    STATE(309), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [10901] = 7,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    ACTIONS(1101), 1,
      sym_identifier,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(401), 2,
      sym_string_value,
      sym_call_expression,
  [10925] = 6,
    ACTIONS(1103), 1,
      anon_sym_LBRACE,
    ACTIONS(1107), 1,
      sym__js_statement,
    STATE(269), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [10947] = 6,
    ACTIONS(47), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1109), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1061), 2,
      sym_from,
      sym_to,
    STATE(273), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10969] = 7,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    ACTIONS(1101), 1,
      sym_identifier,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(391), 2,
      sym_string_value,
      sym_call_expression,
  [10993] = 6,
    ACTIONS(47), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1061), 2,
      sym_from,
      sym_to,
    STATE(266), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11015] = 6,
    ACTIONS(1103), 1,
      anon_sym_LBRACE,
    ACTIONS(1107), 1,
      sym__js_statement,
    STATE(269), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1113), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [11037] = 5,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1117), 1,
      anon_sym_RBRACE,
    ACTIONS(1119), 1,
      sym__js_statement,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(284), 3,
      sym__js_expression,
      sym__js_block,
      aux_sym__js_block_repeat1,
  [11056] = 5,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
    ACTIONS(1123), 1,
      sym__js_statement,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(281), 3,
      sym__js_expression,
      sym__js_block,
      aux_sym__js_block_repeat1,
  [11075] = 5,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    ACTIONS(1127), 1,
      sym__js_statement,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(289), 3,
      sym__js_expression,
      sym__js_block,
      aux_sym__js_block_repeat1,
  [11094] = 5,
    ACTIONS(1129), 1,
      anon_sym_LBRACE,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    ACTIONS(1134), 1,
      sym__js_statement,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(284), 3,
      sym__js_expression,
      sym__js_block,
      aux_sym__js_block_repeat1,
  [11113] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1137), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11126] = 6,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1139), 1,
      anon_sym_RBRACE,
    ACTIONS(1141), 1,
      sym__js_statement,
    STATE(291), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(367), 2,
      sym__js_expression,
      sym__js_block,
  [11147] = 6,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_block,
    STATE(345), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [11168] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1143), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11187] = 5,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1119), 1,
      sym__js_statement,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(284), 3,
      sym__js_expression,
      sym__js_block,
      aux_sym__js_block_repeat1,
  [11206] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1147), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11219] = 6,
    ACTIONS(1076), 1,
      anon_sym_RBRACE,
    ACTIONS(1149), 1,
      anon_sym_LBRACE,
    ACTIONS(1152), 1,
      sym__js_statement,
    STATE(291), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(367), 2,
      sym__js_expression,
      sym__js_block,
  [11240] = 6,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      sym__js_statement,
    ACTIONS(1155), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(367), 2,
      sym__js_expression,
      sym__js_block,
  [11261] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1157), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11274] = 6,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      sym__js_statement,
    ACTIONS(1159), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(367), 2,
      sym__js_expression,
      sym__js_block,
  [11295] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(653), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11308] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1161), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11321] = 6,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_block,
    STATE(353), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [11342] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1163), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11355] = 5,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    ACTIONS(1165), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(390), 2,
      sym_string_value,
      sym_call_expression,
  [11373] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11391] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11409] = 6,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_block,
    STATE(324), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11429] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11447] = 5,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      sym__js_statement,
    STATE(286), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(367), 2,
      sym__js_expression,
      sym__js_block,
  [11465] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1175), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11483] = 5,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_SEMI,
    STATE(366), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [11501] = 5,
    ACTIONS(1103), 1,
      anon_sym_LBRACE,
    ACTIONS(1107), 1,
      sym__js_statement,
    STATE(276), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [11519] = 5,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_SEMI,
    STATE(363), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [11537] = 6,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_block,
    STATE(324), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11557] = 5,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    ACTIONS(1183), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(393), 2,
      sym_string_value,
      sym_call_expression,
  [11575] = 5,
    ACTIONS(1103), 1,
      anon_sym_LBRACE,
    ACTIONS(1107), 1,
      sym__js_statement,
    STATE(280), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [11593] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11611] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1187), 1,
      anon_sym_SEMI,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11629] = 5,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      sym__js_statement,
    STATE(292), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(367), 2,
      sym__js_expression,
      sym__js_block,
  [11647] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_SLASH,
    ACTIONS(1189), 1,
      anon_sym_RBRACK,
    ACTIONS(1065), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11665] = 4,
    ACTIONS(1193), 1,
      aux_sym_integer_value_token1,
    STATE(379), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1191), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [11681] = 5,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      sym__js_statement,
    STATE(294), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(367), 2,
      sym__js_expression,
      sym__js_block,
  [11699] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1195), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11713] = 4,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [11728] = 4,
    ACTIONS(1200), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1202), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11743] = 4,
    STATE(86), 1,
      aux_sym_class_name_repeat1,
    STATE(148), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1021), 2,
      sym_escape_sequence,
      sym_identifier,
  [11758] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1204), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [11769] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(387), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11780] = 4,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1195), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11795] = 4,
    STATE(86), 1,
      aux_sym_class_name_repeat1,
    STATE(168), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1021), 2,
      sym_escape_sequence,
      sym_identifier,
  [11810] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1209), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [11821] = 4,
    ACTIONS(1211), 1,
      anon_sym_SQUOTE,
    STATE(329), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1213), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11836] = 4,
    ACTIONS(1215), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1217), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11851] = 4,
    ACTIONS(1215), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1219), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11866] = 4,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE,
    STATE(328), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1221), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11881] = 4,
    ACTIONS(1223), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1225), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11896] = 4,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1227), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11911] = 4,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11926] = 4,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1217), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11941] = 4,
    ACTIONS(1231), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1219), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11956] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(427), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11967] = 3,
    ACTIONS(1053), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(653), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11980] = 4,
    ACTIONS(1233), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1235), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11995] = 4,
    ACTIONS(1233), 1,
      anon_sym_SQUOTE,
    STATE(335), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1237), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12010] = 4,
    ACTIONS(1239), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1217), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12025] = 4,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [12040] = 4,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [12055] = 4,
    ACTIONS(1241), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1219), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12070] = 4,
    ACTIONS(1241), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1217), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12085] = 5,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym_block,
    STATE(324), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12102] = 4,
    ACTIONS(1239), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1219), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12117] = 4,
    ACTIONS(1200), 1,
      anon_sym_DQUOTE,
    STATE(340), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1243), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12132] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12143] = 4,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12158] = 4,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1247), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12173] = 4,
    ACTIONS(1250), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1252), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12188] = 4,
    ACTIONS(1255), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1257), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12203] = 5,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      sym_block,
    STATE(324), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12220] = 4,
    ACTIONS(1260), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1217), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12235] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1262), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [12246] = 4,
    ACTIONS(1260), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1219), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12261] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12272] = 4,
    ACTIONS(1264), 1,
      anon_sym_DQUOTE,
    STATE(354), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1266), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12287] = 4,
    ACTIONS(1264), 1,
      anon_sym_SQUOTE,
    STATE(356), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1268), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12302] = 4,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12317] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12331] = 4,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12345] = 4,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_SEMI,
    STATE(324), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12359] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12373] = 4,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12387] = 4,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      anon_sym_SEMI,
    STATE(324), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12401] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1204), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [12411] = 3,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_and,
      anon_sym_or,
  [12423] = 4,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    ACTIONS(861), 1,
      anon_sym_of,
    ACTIONS(1287), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12437] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1262), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [12447] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1209), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [12457] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12471] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12485] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_LBRACE,
    STATE(319), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12499] = 4,
    ACTIONS(1143), 1,
      anon_sym_RBRACK,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12513] = 4,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12527] = 3,
    ACTIONS(1300), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12538] = 3,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    ACTIONS(1302), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12549] = 3,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(1306), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12560] = 3,
    ACTIONS(1308), 1,
      aux_sym_color_value_token1,
    ACTIONS(1310), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12571] = 3,
    ACTIONS(1312), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12582] = 3,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12593] = 3,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12604] = 3,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12615] = 3,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12626] = 3,
    ACTIONS(1314), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12637] = 3,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12648] = 3,
    ACTIONS(1316), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12659] = 3,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12670] = 2,
    ACTIONS(1318), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12678] = 2,
    ACTIONS(1320), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12686] = 2,
    ACTIONS(1322), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12694] = 2,
    ACTIONS(1324), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12702] = 2,
    ACTIONS(1326), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12710] = 2,
    ACTIONS(1328), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12718] = 2,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12726] = 2,
    ACTIONS(1330), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12734] = 2,
    ACTIONS(1332), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12742] = 2,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12750] = 2,
    ACTIONS(1334), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12758] = 2,
    ACTIONS(1336), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12766] = 2,
    ACTIONS(1338), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12774] = 2,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12782] = 2,
    ACTIONS(1340), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12790] = 2,
    ACTIONS(1342), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12798] = 2,
    ACTIONS(1344), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12806] = 2,
    ACTIONS(1346), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12814] = 2,
    ACTIONS(1348), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12822] = 2,
    ACTIONS(1350), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12830] = 2,
    ACTIONS(1352), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 117,
  [SMALL_STATE(4)] = 234,
  [SMALL_STATE(5)] = 344,
  [SMALL_STATE(6)] = 454,
  [SMALL_STATE(7)] = 564,
  [SMALL_STATE(8)] = 674,
  [SMALL_STATE(9)] = 784,
  [SMALL_STATE(10)] = 894,
  [SMALL_STATE(11)] = 1001,
  [SMALL_STATE(12)] = 1105,
  [SMALL_STATE(13)] = 1209,
  [SMALL_STATE(14)] = 1310,
  [SMALL_STATE(15)] = 1389,
  [SMALL_STATE(16)] = 1456,
  [SMALL_STATE(17)] = 1523,
  [SMALL_STATE(18)] = 1595,
  [SMALL_STATE(19)] = 1664,
  [SMALL_STATE(20)] = 1733,
  [SMALL_STATE(21)] = 1798,
  [SMALL_STATE(22)] = 1860,
  [SMALL_STATE(23)] = 1922,
  [SMALL_STATE(24)] = 1958,
  [SMALL_STATE(25)] = 1994,
  [SMALL_STATE(26)] = 2030,
  [SMALL_STATE(27)] = 2066,
  [SMALL_STATE(28)] = 2102,
  [SMALL_STATE(29)] = 2164,
  [SMALL_STATE(30)] = 2200,
  [SMALL_STATE(31)] = 2236,
  [SMALL_STATE(32)] = 2272,
  [SMALL_STATE(33)] = 2308,
  [SMALL_STATE(34)] = 2370,
  [SMALL_STATE(35)] = 2432,
  [SMALL_STATE(36)] = 2468,
  [SMALL_STATE(37)] = 2530,
  [SMALL_STATE(38)] = 2576,
  [SMALL_STATE(39)] = 2612,
  [SMALL_STATE(40)] = 2648,
  [SMALL_STATE(41)] = 2710,
  [SMALL_STATE(42)] = 2772,
  [SMALL_STATE(43)] = 2808,
  [SMALL_STATE(44)] = 2872,
  [SMALL_STATE(45)] = 2908,
  [SMALL_STATE(46)] = 2944,
  [SMALL_STATE(47)] = 3008,
  [SMALL_STATE(48)] = 3044,
  [SMALL_STATE(49)] = 3106,
  [SMALL_STATE(50)] = 3142,
  [SMALL_STATE(51)] = 3178,
  [SMALL_STATE(52)] = 3214,
  [SMALL_STATE(53)] = 3250,
  [SMALL_STATE(54)] = 3286,
  [SMALL_STATE(55)] = 3322,
  [SMALL_STATE(56)] = 3358,
  [SMALL_STATE(57)] = 3394,
  [SMALL_STATE(58)] = 3456,
  [SMALL_STATE(59)] = 3518,
  [SMALL_STATE(60)] = 3580,
  [SMALL_STATE(61)] = 3645,
  [SMALL_STATE(62)] = 3710,
  [SMALL_STATE(63)] = 3775,
  [SMALL_STATE(64)] = 3811,
  [SMALL_STATE(65)] = 3871,
  [SMALL_STATE(66)] = 3935,
  [SMALL_STATE(67)] = 3995,
  [SMALL_STATE(68)] = 4035,
  [SMALL_STATE(69)] = 4071,
  [SMALL_STATE(70)] = 4135,
  [SMALL_STATE(71)] = 4197,
  [SMALL_STATE(72)] = 4261,
  [SMALL_STATE(73)] = 4294,
  [SMALL_STATE(74)] = 4327,
  [SMALL_STATE(75)] = 4360,
  [SMALL_STATE(76)] = 4419,
  [SMALL_STATE(77)] = 4480,
  [SMALL_STATE(78)] = 4513,
  [SMALL_STATE(79)] = 4546,
  [SMALL_STATE(80)] = 4579,
  [SMALL_STATE(81)] = 4612,
  [SMALL_STATE(82)] = 4673,
  [SMALL_STATE(83)] = 4706,
  [SMALL_STATE(84)] = 4739,
  [SMALL_STATE(85)] = 4772,
  [SMALL_STATE(86)] = 4805,
  [SMALL_STATE(87)] = 4842,
  [SMALL_STATE(88)] = 4875,
  [SMALL_STATE(89)] = 4908,
  [SMALL_STATE(90)] = 4941,
  [SMALL_STATE(91)] = 4974,
  [SMALL_STATE(92)] = 5007,
  [SMALL_STATE(93)] = 5040,
  [SMALL_STATE(94)] = 5073,
  [SMALL_STATE(95)] = 5106,
  [SMALL_STATE(96)] = 5139,
  [SMALL_STATE(97)] = 5172,
  [SMALL_STATE(98)] = 5205,
  [SMALL_STATE(99)] = 5242,
  [SMALL_STATE(100)] = 5275,
  [SMALL_STATE(101)] = 5308,
  [SMALL_STATE(102)] = 5341,
  [SMALL_STATE(103)] = 5399,
  [SMALL_STATE(104)] = 5457,
  [SMALL_STATE(105)] = 5515,
  [SMALL_STATE(106)] = 5573,
  [SMALL_STATE(107)] = 5631,
  [SMALL_STATE(108)] = 5666,
  [SMALL_STATE(109)] = 5701,
  [SMALL_STATE(110)] = 5736,
  [SMALL_STATE(111)] = 5771,
  [SMALL_STATE(112)] = 5826,
  [SMALL_STATE(113)] = 5861,
  [SMALL_STATE(114)] = 5916,
  [SMALL_STATE(115)] = 5951,
  [SMALL_STATE(116)] = 5992,
  [SMALL_STATE(117)] = 6044,
  [SMALL_STATE(118)] = 6096,
  [SMALL_STATE(119)] = 6148,
  [SMALL_STATE(120)] = 6200,
  [SMALL_STATE(121)] = 6252,
  [SMALL_STATE(122)] = 6304,
  [SMALL_STATE(123)] = 6356,
  [SMALL_STATE(124)] = 6392,
  [SMALL_STATE(125)] = 6444,
  [SMALL_STATE(126)] = 6496,
  [SMALL_STATE(127)] = 6548,
  [SMALL_STATE(128)] = 6600,
  [SMALL_STATE(129)] = 6652,
  [SMALL_STATE(130)] = 6704,
  [SMALL_STATE(131)] = 6756,
  [SMALL_STATE(132)] = 6808,
  [SMALL_STATE(133)] = 6860,
  [SMALL_STATE(134)] = 6912,
  [SMALL_STATE(135)] = 6964,
  [SMALL_STATE(136)] = 7016,
  [SMALL_STATE(137)] = 7068,
  [SMALL_STATE(138)] = 7099,
  [SMALL_STATE(139)] = 7128,
  [SMALL_STATE(140)] = 7157,
  [SMALL_STATE(141)] = 7186,
  [SMALL_STATE(142)] = 7215,
  [SMALL_STATE(143)] = 7244,
  [SMALL_STATE(144)] = 7273,
  [SMALL_STATE(145)] = 7302,
  [SMALL_STATE(146)] = 7331,
  [SMALL_STATE(147)] = 7360,
  [SMALL_STATE(148)] = 7389,
  [SMALL_STATE(149)] = 7418,
  [SMALL_STATE(150)] = 7447,
  [SMALL_STATE(151)] = 7476,
  [SMALL_STATE(152)] = 7505,
  [SMALL_STATE(153)] = 7534,
  [SMALL_STATE(154)] = 7565,
  [SMALL_STATE(155)] = 7596,
  [SMALL_STATE(156)] = 7627,
  [SMALL_STATE(157)] = 7658,
  [SMALL_STATE(158)] = 7687,
  [SMALL_STATE(159)] = 7716,
  [SMALL_STATE(160)] = 7745,
  [SMALL_STATE(161)] = 7774,
  [SMALL_STATE(162)] = 7803,
  [SMALL_STATE(163)] = 7832,
  [SMALL_STATE(164)] = 7861,
  [SMALL_STATE(165)] = 7890,
  [SMALL_STATE(166)] = 7923,
  [SMALL_STATE(167)] = 7956,
  [SMALL_STATE(168)] = 7985,
  [SMALL_STATE(169)] = 8014,
  [SMALL_STATE(170)] = 8043,
  [SMALL_STATE(171)] = 8072,
  [SMALL_STATE(172)] = 8103,
  [SMALL_STATE(173)] = 8132,
  [SMALL_STATE(174)] = 8161,
  [SMALL_STATE(175)] = 8192,
  [SMALL_STATE(176)] = 8221,
  [SMALL_STATE(177)] = 8252,
  [SMALL_STATE(178)] = 8281,
  [SMALL_STATE(179)] = 8312,
  [SMALL_STATE(180)] = 8342,
  [SMALL_STATE(181)] = 8372,
  [SMALL_STATE(182)] = 8402,
  [SMALL_STATE(183)] = 8432,
  [SMALL_STATE(184)] = 8462,
  [SMALL_STATE(185)] = 8492,
  [SMALL_STATE(186)] = 8522,
  [SMALL_STATE(187)] = 8552,
  [SMALL_STATE(188)] = 8582,
  [SMALL_STATE(189)] = 8612,
  [SMALL_STATE(190)] = 8642,
  [SMALL_STATE(191)] = 8672,
  [SMALL_STATE(192)] = 8702,
  [SMALL_STATE(193)] = 8732,
  [SMALL_STATE(194)] = 8765,
  [SMALL_STATE(195)] = 8798,
  [SMALL_STATE(196)] = 8831,
  [SMALL_STATE(197)] = 8864,
  [SMALL_STATE(198)] = 8897,
  [SMALL_STATE(199)] = 8927,
  [SMALL_STATE(200)] = 8957,
  [SMALL_STATE(201)] = 8987,
  [SMALL_STATE(202)] = 9017,
  [SMALL_STATE(203)] = 9047,
  [SMALL_STATE(204)] = 9077,
  [SMALL_STATE(205)] = 9107,
  [SMALL_STATE(206)] = 9137,
  [SMALL_STATE(207)] = 9176,
  [SMALL_STATE(208)] = 9215,
  [SMALL_STATE(209)] = 9250,
  [SMALL_STATE(210)] = 9272,
  [SMALL_STATE(211)] = 9312,
  [SMALL_STATE(212)] = 9346,
  [SMALL_STATE(213)] = 9380,
  [SMALL_STATE(214)] = 9402,
  [SMALL_STATE(215)] = 9424,
  [SMALL_STATE(216)] = 9468,
  [SMALL_STATE(217)] = 9512,
  [SMALL_STATE(218)] = 9556,
  [SMALL_STATE(219)] = 9600,
  [SMALL_STATE(220)] = 9627,
  [SMALL_STATE(221)] = 9666,
  [SMALL_STATE(222)] = 9704,
  [SMALL_STATE(223)] = 9726,
  [SMALL_STATE(224)] = 9752,
  [SMALL_STATE(225)] = 9776,
  [SMALL_STATE(226)] = 9802,
  [SMALL_STATE(227)] = 9828,
  [SMALL_STATE(228)] = 9852,
  [SMALL_STATE(229)] = 9878,
  [SMALL_STATE(230)] = 9916,
  [SMALL_STATE(231)] = 9942,
  [SMALL_STATE(232)] = 9968,
  [SMALL_STATE(233)] = 9994,
  [SMALL_STATE(234)] = 10020,
  [SMALL_STATE(235)] = 10041,
  [SMALL_STATE(236)] = 10062,
  [SMALL_STATE(237)] = 10083,
  [SMALL_STATE(238)] = 10104,
  [SMALL_STATE(239)] = 10125,
  [SMALL_STATE(240)] = 10146,
  [SMALL_STATE(241)] = 10167,
  [SMALL_STATE(242)] = 10188,
  [SMALL_STATE(243)] = 10209,
  [SMALL_STATE(244)] = 10230,
  [SMALL_STATE(245)] = 10251,
  [SMALL_STATE(246)] = 10286,
  [SMALL_STATE(247)] = 10307,
  [SMALL_STATE(248)] = 10328,
  [SMALL_STATE(249)] = 10353,
  [SMALL_STATE(250)] = 10382,
  [SMALL_STATE(251)] = 10404,
  [SMALL_STATE(252)] = 10424,
  [SMALL_STATE(253)] = 10446,
  [SMALL_STATE(254)] = 10465,
  [SMALL_STATE(255)] = 10484,
  [SMALL_STATE(256)] = 10503,
  [SMALL_STATE(257)] = 10522,
  [SMALL_STATE(258)] = 10541,
  [SMALL_STATE(259)] = 10560,
  [SMALL_STATE(260)] = 10579,
  [SMALL_STATE(261)] = 10598,
  [SMALL_STATE(262)] = 10617,
  [SMALL_STATE(263)] = 10636,
  [SMALL_STATE(264)] = 10655,
  [SMALL_STATE(265)] = 10674,
  [SMALL_STATE(266)] = 10693,
  [SMALL_STATE(267)] = 10715,
  [SMALL_STATE(268)] = 10739,
  [SMALL_STATE(269)] = 10761,
  [SMALL_STATE(270)] = 10783,
  [SMALL_STATE(271)] = 10807,
  [SMALL_STATE(272)] = 10831,
  [SMALL_STATE(273)] = 10855,
  [SMALL_STATE(274)] = 10877,
  [SMALL_STATE(275)] = 10901,
  [SMALL_STATE(276)] = 10925,
  [SMALL_STATE(277)] = 10947,
  [SMALL_STATE(278)] = 10969,
  [SMALL_STATE(279)] = 10993,
  [SMALL_STATE(280)] = 11015,
  [SMALL_STATE(281)] = 11037,
  [SMALL_STATE(282)] = 11056,
  [SMALL_STATE(283)] = 11075,
  [SMALL_STATE(284)] = 11094,
  [SMALL_STATE(285)] = 11113,
  [SMALL_STATE(286)] = 11126,
  [SMALL_STATE(287)] = 11147,
  [SMALL_STATE(288)] = 11168,
  [SMALL_STATE(289)] = 11187,
  [SMALL_STATE(290)] = 11206,
  [SMALL_STATE(291)] = 11219,
  [SMALL_STATE(292)] = 11240,
  [SMALL_STATE(293)] = 11261,
  [SMALL_STATE(294)] = 11274,
  [SMALL_STATE(295)] = 11295,
  [SMALL_STATE(296)] = 11308,
  [SMALL_STATE(297)] = 11321,
  [SMALL_STATE(298)] = 11342,
  [SMALL_STATE(299)] = 11355,
  [SMALL_STATE(300)] = 11373,
  [SMALL_STATE(301)] = 11391,
  [SMALL_STATE(302)] = 11409,
  [SMALL_STATE(303)] = 11429,
  [SMALL_STATE(304)] = 11447,
  [SMALL_STATE(305)] = 11465,
  [SMALL_STATE(306)] = 11483,
  [SMALL_STATE(307)] = 11501,
  [SMALL_STATE(308)] = 11519,
  [SMALL_STATE(309)] = 11537,
  [SMALL_STATE(310)] = 11557,
  [SMALL_STATE(311)] = 11575,
  [SMALL_STATE(312)] = 11593,
  [SMALL_STATE(313)] = 11611,
  [SMALL_STATE(314)] = 11629,
  [SMALL_STATE(315)] = 11647,
  [SMALL_STATE(316)] = 11665,
  [SMALL_STATE(317)] = 11681,
  [SMALL_STATE(318)] = 11699,
  [SMALL_STATE(319)] = 11713,
  [SMALL_STATE(320)] = 11728,
  [SMALL_STATE(321)] = 11743,
  [SMALL_STATE(322)] = 11758,
  [SMALL_STATE(323)] = 11769,
  [SMALL_STATE(324)] = 11780,
  [SMALL_STATE(325)] = 11795,
  [SMALL_STATE(326)] = 11810,
  [SMALL_STATE(327)] = 11821,
  [SMALL_STATE(328)] = 11836,
  [SMALL_STATE(329)] = 11851,
  [SMALL_STATE(330)] = 11866,
  [SMALL_STATE(331)] = 11881,
  [SMALL_STATE(332)] = 11896,
  [SMALL_STATE(333)] = 11911,
  [SMALL_STATE(334)] = 11926,
  [SMALL_STATE(335)] = 11941,
  [SMALL_STATE(336)] = 11956,
  [SMALL_STATE(337)] = 11967,
  [SMALL_STATE(338)] = 11980,
  [SMALL_STATE(339)] = 11995,
  [SMALL_STATE(340)] = 12010,
  [SMALL_STATE(341)] = 12025,
  [SMALL_STATE(342)] = 12040,
  [SMALL_STATE(343)] = 12055,
  [SMALL_STATE(344)] = 12070,
  [SMALL_STATE(345)] = 12085,
  [SMALL_STATE(346)] = 12102,
  [SMALL_STATE(347)] = 12117,
  [SMALL_STATE(348)] = 12132,
  [SMALL_STATE(349)] = 12143,
  [SMALL_STATE(350)] = 12158,
  [SMALL_STATE(351)] = 12173,
  [SMALL_STATE(352)] = 12188,
  [SMALL_STATE(353)] = 12203,
  [SMALL_STATE(354)] = 12220,
  [SMALL_STATE(355)] = 12235,
  [SMALL_STATE(356)] = 12246,
  [SMALL_STATE(357)] = 12261,
  [SMALL_STATE(358)] = 12272,
  [SMALL_STATE(359)] = 12287,
  [SMALL_STATE(360)] = 12302,
  [SMALL_STATE(361)] = 12317,
  [SMALL_STATE(362)] = 12331,
  [SMALL_STATE(363)] = 12345,
  [SMALL_STATE(364)] = 12359,
  [SMALL_STATE(365)] = 12373,
  [SMALL_STATE(366)] = 12387,
  [SMALL_STATE(367)] = 12401,
  [SMALL_STATE(368)] = 12411,
  [SMALL_STATE(369)] = 12423,
  [SMALL_STATE(370)] = 12437,
  [SMALL_STATE(371)] = 12447,
  [SMALL_STATE(372)] = 12457,
  [SMALL_STATE(373)] = 12471,
  [SMALL_STATE(374)] = 12485,
  [SMALL_STATE(375)] = 12499,
  [SMALL_STATE(376)] = 12513,
  [SMALL_STATE(377)] = 12527,
  [SMALL_STATE(378)] = 12538,
  [SMALL_STATE(379)] = 12549,
  [SMALL_STATE(380)] = 12560,
  [SMALL_STATE(381)] = 12571,
  [SMALL_STATE(382)] = 12582,
  [SMALL_STATE(383)] = 12593,
  [SMALL_STATE(384)] = 12604,
  [SMALL_STATE(385)] = 12615,
  [SMALL_STATE(386)] = 12626,
  [SMALL_STATE(387)] = 12637,
  [SMALL_STATE(388)] = 12648,
  [SMALL_STATE(389)] = 12659,
  [SMALL_STATE(390)] = 12670,
  [SMALL_STATE(391)] = 12678,
  [SMALL_STATE(392)] = 12686,
  [SMALL_STATE(393)] = 12694,
  [SMALL_STATE(394)] = 12702,
  [SMALL_STATE(395)] = 12710,
  [SMALL_STATE(396)] = 12718,
  [SMALL_STATE(397)] = 12726,
  [SMALL_STATE(398)] = 12734,
  [SMALL_STATE(399)] = 12742,
  [SMALL_STATE(400)] = 12750,
  [SMALL_STATE(401)] = 12758,
  [SMALL_STATE(402)] = 12766,
  [SMALL_STATE(403)] = 12774,
  [SMALL_STATE(404)] = 12782,
  [SMALL_STATE(405)] = 12790,
  [SMALL_STATE(406)] = 12798,
  [SMALL_STATE(407)] = 12806,
  [SMALL_STATE(408)] = 12814,
  [SMALL_STATE(409)] = 12822,
  [SMALL_STATE(410)] = 12830,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(117),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(231),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(127),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(299),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(410),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(384),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(223),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(216),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(145),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(325),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(406),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(405),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(43),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(41),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(40),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(59),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(21),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(327),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(330),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(378),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(209),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(208),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(307),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(212),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(228),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(310),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(398),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(230),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(216),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(145),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(325),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(406),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(405),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(41),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(327),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(330),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(214),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(311),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(212),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 15),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 15),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(407),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(195),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(135),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(320),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(347),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(166),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(165),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(131),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(123),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(195),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(317),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(124),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(407),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(193),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(135),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(320),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(347),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(166),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(165),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(193),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(317),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2), SHIFT_REPEAT(98),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 2),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 15),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(283),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2),
  [1078] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(322),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(377),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(378),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(282),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2),
  [1134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(284),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(282),
  [1152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(367),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 17),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(58),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 1),
  [1206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(233),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 3),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2),
  [1252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2), SHIFT_REPEAT(351),
  [1255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2),
  [1257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2), SHIFT_REPEAT(352),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 2),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(132),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1328] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_styled_external_scanner_create(void);
void tree_sitter_styled_external_scanner_destroy(void *);
bool tree_sitter_styled_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_styled_external_scanner_serialize(void *, char *);
void tree_sitter_styled_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_styled(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_styled_external_scanner_create,
      tree_sitter_styled_external_scanner_destroy,
      tree_sitter_styled_external_scanner_scan,
      tree_sitter_styled_external_scanner_serialize,
      tree_sitter_styled_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
