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
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 9
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

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
  aux_sym__integer_percentage_token1 = 69,
  anon_sym_PERCENT = 70,
  aux_sym__float_percentage_token1 = 71,
  anon_sym_DOLLAR_LBRACE = 72,
  anon_sym_RBRACE_SEMI = 73,
  sym__descendant_operator = 74,
  sym__pseudo_class_selector_colon = 75,
  sym___error_recovery = 76,
  sym__js_expression = 77,
  sym_stylesheet = 78,
  sym_import_statement = 79,
  sym_media_statement = 80,
  sym_charset_statement = 81,
  sym_namespace_statement = 82,
  sym_keyframes_statement = 83,
  sym_keyframe_block_list = 84,
  sym_keyframe_block = 85,
  sym_supports_statement = 86,
  sym_postcss_statement = 87,
  sym_at_rule = 88,
  sym_rule_set = 89,
  sym_selectors = 90,
  sym_block = 91,
  sym__selector = 92,
  sym_universal_selector = 93,
  sym_class_selector = 94,
  sym_pseudo_class_selector = 95,
  sym__nth_child_pseudo_class_selector = 96,
  sym_pseudo_element_selector = 97,
  sym_id_selector = 98,
  sym_attribute_selector = 99,
  sym_child_selector = 100,
  sym_descendant_selector = 101,
  sym_sibling_selector = 102,
  sym_adjacent_sibling_selector = 103,
  sym_namespace_selector = 104,
  sym_pseudo_class_arguments = 105,
  sym_pseudo_class_with_selector_arguments = 106,
  sym_pseudo_class_nth_child_arguments = 107,
  sym_pseudo_element_arguments = 108,
  sym_declaration = 109,
  sym_last_declaration = 110,
  sym__query = 111,
  sym_feature_query = 112,
  sym_parenthesized_query = 113,
  sym_binary_query = 114,
  sym_unary_query = 115,
  sym_selector_query = 116,
  sym__value = 117,
  sym_parenthesized_value = 118,
  sym_color_value = 119,
  sym_string_value = 120,
  sym_integer_value = 121,
  sym_float_value = 122,
  sym_grid_value = 123,
  sym_call_expression = 124,
  sym_binary_expression = 125,
  sym_arguments = 126,
  sym_class_name = 127,
  sym__keyframe_selector = 128,
  sym__integer_percentage = 129,
  sym__float_percentage = 130,
  sym_interpolation = 131,
  sym__inline_interpolation = 132,
  sym_js_expression = 133,
  aux_sym_stylesheet_repeat1 = 134,
  aux_sym_import_statement_repeat1 = 135,
  aux_sym_keyframe_block_list_repeat1 = 136,
  aux_sym_keyframe_block_repeat1 = 137,
  aux_sym_postcss_statement_repeat1 = 138,
  aux_sym_selectors_repeat1 = 139,
  aux_sym_block_repeat1 = 140,
  aux_sym_pseudo_class_arguments_repeat1 = 141,
  aux_sym_declaration_repeat1 = 142,
  aux_sym_string_value_repeat1 = 143,
  aux_sym_string_value_repeat2 = 144,
  aux_sym_grid_value_repeat1 = 145,
  aux_sym_arguments_repeat1 = 146,
  aux_sym_class_name_repeat1 = 147,
  alias_sym_attribute_name = 148,
  alias_sym_feature_name = 149,
  alias_sym_function_name = 150,
  alias_sym_id_name = 151,
  alias_sym_keyframes_name = 152,
  alias_sym_keyword_query = 153,
  alias_sym_namespace_name = 154,
  alias_sym_property_name = 155,
  alias_sym_tag_name = 156,
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
  [aux_sym__integer_percentage_token1] = "_integer_percentage_token1",
  [anon_sym_PERCENT] = "unit",
  [aux_sym__float_percentage_token1] = "_float_percentage_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE_SEMI] = "};",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym__js_expression] = "_js_expression",
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
  [sym__keyframe_selector] = "_keyframe_selector",
  [sym__integer_percentage] = "integer_value",
  [sym__float_percentage] = "float_value",
  [sym_interpolation] = "interpolation",
  [sym__inline_interpolation] = "interpolation",
  [sym_js_expression] = "js_expression",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_keyframe_block_repeat1] = "keyframe_block_repeat1",
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
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
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
  [aux_sym__integer_percentage_token1] = aux_sym__integer_percentage_token1,
  [anon_sym_PERCENT] = sym_unit,
  [aux_sym__float_percentage_token1] = aux_sym__float_percentage_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym__js_expression] = sym__js_expression,
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
  [sym__keyframe_selector] = sym__keyframe_selector,
  [sym__integer_percentage] = sym_integer_value,
  [sym__float_percentage] = sym_float_value,
  [sym_interpolation] = sym_interpolation,
  [sym__inline_interpolation] = sym_interpolation,
  [sym_js_expression] = sym_js_expression,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_keyframe_block_repeat1] = aux_sym_keyframe_block_repeat1,
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
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
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
  [aux_sym__integer_percentage_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__float_percentage_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_SEMI] = {
    .visible = true,
    .named = false,
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
  [sym__js_expression] = {
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
  [sym__keyframe_selector] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_percentage] = {
    .visible = true,
    .named = true,
  },
  [sym__float_percentage] = {
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
  [sym_js_expression] = {
    .visible = true,
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
  [aux_sym_keyframe_block_repeat1] = {
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
    [2] = sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = alias_sym_attribute_name,
  },
  [16] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    alias_sym_attribute_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 4,
  [8] = 5,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 19,
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
  [50] = 33,
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
  [61] = 61,
  [62] = 45,
  [63] = 63,
  [64] = 46,
  [65] = 53,
  [66] = 58,
  [67] = 52,
  [68] = 37,
  [69] = 55,
  [70] = 54,
  [71] = 56,
  [72] = 63,
  [73] = 51,
  [74] = 43,
  [75] = 39,
  [76] = 63,
  [77] = 41,
  [78] = 40,
  [79] = 35,
  [80] = 80,
  [81] = 59,
  [82] = 38,
  [83] = 57,
  [84] = 48,
  [85] = 47,
  [86] = 34,
  [87] = 44,
  [88] = 36,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 100,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 104,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 121,
  [125] = 122,
  [126] = 126,
  [127] = 127,
  [128] = 118,
  [129] = 122,
  [130] = 130,
  [131] = 131,
  [132] = 121,
  [133] = 133,
  [134] = 117,
  [135] = 127,
  [136] = 118,
  [137] = 126,
  [138] = 138,
  [139] = 90,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 91,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 91,
  [189] = 90,
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
  [202] = 199,
  [203] = 200,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 207,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 211,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 123,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 225,
  [227] = 227,
  [228] = 228,
  [229] = 168,
  [230] = 224,
  [231] = 231,
  [232] = 138,
  [233] = 233,
  [234] = 234,
  [235] = 185,
  [236] = 186,
  [237] = 237,
  [238] = 237,
  [239] = 190,
  [240] = 240,
  [241] = 241,
  [242] = 181,
  [243] = 243,
  [244] = 91,
  [245] = 245,
  [246] = 184,
  [247] = 182,
  [248] = 180,
  [249] = 187,
  [250] = 193,
  [251] = 192,
  [252] = 245,
  [253] = 191,
  [254] = 183,
  [255] = 90,
  [256] = 123,
  [257] = 168,
  [258] = 138,
  [259] = 183,
  [260] = 187,
  [261] = 186,
  [262] = 180,
  [263] = 185,
  [264] = 182,
  [265] = 184,
  [266] = 190,
  [267] = 192,
  [268] = 91,
  [269] = 90,
  [270] = 191,
  [271] = 193,
  [272] = 181,
  [273] = 273,
  [274] = 274,
  [275] = 274,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 273,
  [280] = 274,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 287,
  [290] = 290,
  [291] = 38,
  [292] = 49,
  [293] = 293,
  [294] = 294,
  [295] = 42,
  [296] = 294,
  [297] = 297,
  [298] = 35,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 293,
  [304] = 299,
  [305] = 302,
  [306] = 306,
  [307] = 300,
  [308] = 37,
  [309] = 300,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 311,
  [314] = 314,
  [315] = 315,
  [316] = 312,
  [317] = 317,
  [318] = 310,
  [319] = 311,
  [320] = 314,
  [321] = 314,
  [322] = 311,
  [323] = 323,
  [324] = 315,
  [325] = 325,
  [326] = 326,
  [327] = 312,
  [328] = 315,
  [329] = 315,
  [330] = 330,
  [331] = 312,
  [332] = 314,
  [333] = 311,
  [334] = 314,
  [335] = 330,
  [336] = 310,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 325,
  [343] = 312,
  [344] = 315,
  [345] = 340,
  [346] = 346,
  [347] = 347,
  [348] = 323,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 350,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 138,
  [361] = 349,
  [362] = 349,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 365,
  [370] = 365,
  [371] = 371,
  [372] = 372,
  [373] = 364,
  [374] = 366,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 376,
  [382] = 382,
  [383] = 372,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 388,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 385,
  [400] = 391,
  [401] = 391,
  [402] = 385,
  [403] = 393,
  [404] = 395,
  [405] = 380,
  [406] = 396,
  [407] = 388,
  [408] = 384,
  [409] = 409,
  [410] = 384,
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
      if (eof) ADVANCE(137);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == '%') ADVANCE(435);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '~') ADVANCE(191);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(120);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(134)
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '~') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(326);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '~') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '~') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '~') ADVANCE(190);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '~') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '~') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(430);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(427);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(431);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == 'w') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(179);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '{') ADVANCE(438);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(184);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == 'k') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(201);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 112:
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(438);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      END_STATE();
    case 115:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(307);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 116:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(263);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 131:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      if (lookahead == '.') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 132:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(44);
      END_STATE();
    case 133:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(432);
      END_STATE();
    case 134:
      if (eof) ADVANCE(137);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '~') ADVANCE(191);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(134)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 135:
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '%') ADVANCE(435);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '~') ADVANCE(190);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(140);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '~') ADVANCE(190);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ';') ADVANCE(439);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_from);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_from);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_to);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_to);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(179);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(254);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 't') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 't') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == 'y') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == '/') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if (lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '/') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(307);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(427);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == '/') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(328);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(405);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(390);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(393);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(403);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(404);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(407);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(418);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'y') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 'y') ADVANCE(396);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(430);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(433);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(133);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(429);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__integer_percentage_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__float_percentage_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__float_percentage_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 135, .external_lex_state = 2},
  [2] = {.lex_state = 135, .external_lex_state = 2},
  [3] = {.lex_state = 135, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 13, .external_lex_state = 2},
  [10] = {.lex_state = 13, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 13, .external_lex_state = 2},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 13, .external_lex_state = 2},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13, .external_lex_state = 2},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 135, .external_lex_state = 2},
  [35] = {.lex_state = 135, .external_lex_state = 2},
  [36] = {.lex_state = 135, .external_lex_state = 2},
  [37] = {.lex_state = 135, .external_lex_state = 2},
  [38] = {.lex_state = 135, .external_lex_state = 2},
  [39] = {.lex_state = 135, .external_lex_state = 2},
  [40] = {.lex_state = 135, .external_lex_state = 2},
  [41] = {.lex_state = 135, .external_lex_state = 2},
  [42] = {.lex_state = 135, .external_lex_state = 2},
  [43] = {.lex_state = 135, .external_lex_state = 2},
  [44] = {.lex_state = 135, .external_lex_state = 2},
  [45] = {.lex_state = 135, .external_lex_state = 2},
  [46] = {.lex_state = 135, .external_lex_state = 2},
  [47] = {.lex_state = 135, .external_lex_state = 2},
  [48] = {.lex_state = 135, .external_lex_state = 2},
  [49] = {.lex_state = 135, .external_lex_state = 2},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 135, .external_lex_state = 2},
  [52] = {.lex_state = 135, .external_lex_state = 2},
  [53] = {.lex_state = 135, .external_lex_state = 2},
  [54] = {.lex_state = 135, .external_lex_state = 2},
  [55] = {.lex_state = 135, .external_lex_state = 2},
  [56] = {.lex_state = 135, .external_lex_state = 2},
  [57] = {.lex_state = 135, .external_lex_state = 2},
  [58] = {.lex_state = 135, .external_lex_state = 2},
  [59] = {.lex_state = 135, .external_lex_state = 2},
  [60] = {.lex_state = 5, .external_lex_state = 3},
  [61] = {.lex_state = 13, .external_lex_state = 2},
  [62] = {.lex_state = 13, .external_lex_state = 2},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 13, .external_lex_state = 2},
  [65] = {.lex_state = 13, .external_lex_state = 2},
  [66] = {.lex_state = 13, .external_lex_state = 2},
  [67] = {.lex_state = 13, .external_lex_state = 2},
  [68] = {.lex_state = 13, .external_lex_state = 2},
  [69] = {.lex_state = 13, .external_lex_state = 2},
  [70] = {.lex_state = 13, .external_lex_state = 2},
  [71] = {.lex_state = 13, .external_lex_state = 2},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 13, .external_lex_state = 2},
  [74] = {.lex_state = 13, .external_lex_state = 2},
  [75] = {.lex_state = 13, .external_lex_state = 2},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 13, .external_lex_state = 2},
  [78] = {.lex_state = 13, .external_lex_state = 2},
  [79] = {.lex_state = 13, .external_lex_state = 2},
  [80] = {.lex_state = 13, .external_lex_state = 2},
  [81] = {.lex_state = 13, .external_lex_state = 2},
  [82] = {.lex_state = 13, .external_lex_state = 2},
  [83] = {.lex_state = 13, .external_lex_state = 2},
  [84] = {.lex_state = 13, .external_lex_state = 2},
  [85] = {.lex_state = 13, .external_lex_state = 2},
  [86] = {.lex_state = 13, .external_lex_state = 2},
  [87] = {.lex_state = 13, .external_lex_state = 2},
  [88] = {.lex_state = 13, .external_lex_state = 2},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 8, .external_lex_state = 3},
  [91] = {.lex_state = 8, .external_lex_state = 3},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 8, .external_lex_state = 3},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 14, .external_lex_state = 3},
  [99] = {.lex_state = 14, .external_lex_state = 3},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 14, .external_lex_state = 3},
  [110] = {.lex_state = 14, .external_lex_state = 3},
  [111] = {.lex_state = 14, .external_lex_state = 3},
  [112] = {.lex_state = 14, .external_lex_state = 3},
  [113] = {.lex_state = 14, .external_lex_state = 3},
  [114] = {.lex_state = 14, .external_lex_state = 3},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 14, .external_lex_state = 3},
  [140] = {.lex_state = 14, .external_lex_state = 3},
  [141] = {.lex_state = 14, .external_lex_state = 3},
  [142] = {.lex_state = 14, .external_lex_state = 3},
  [143] = {.lex_state = 14, .external_lex_state = 3},
  [144] = {.lex_state = 14, .external_lex_state = 3},
  [145] = {.lex_state = 14, .external_lex_state = 3},
  [146] = {.lex_state = 14, .external_lex_state = 3},
  [147] = {.lex_state = 14, .external_lex_state = 3},
  [148] = {.lex_state = 14, .external_lex_state = 3},
  [149] = {.lex_state = 14, .external_lex_state = 3},
  [150] = {.lex_state = 14, .external_lex_state = 3},
  [151] = {.lex_state = 14, .external_lex_state = 3},
  [152] = {.lex_state = 14, .external_lex_state = 3},
  [153] = {.lex_state = 14, .external_lex_state = 3},
  [154] = {.lex_state = 14, .external_lex_state = 3},
  [155] = {.lex_state = 14, .external_lex_state = 3},
  [156] = {.lex_state = 14, .external_lex_state = 3},
  [157] = {.lex_state = 14, .external_lex_state = 3},
  [158] = {.lex_state = 14, .external_lex_state = 3},
  [159] = {.lex_state = 14, .external_lex_state = 3},
  [160] = {.lex_state = 14, .external_lex_state = 3},
  [161] = {.lex_state = 14, .external_lex_state = 3},
  [162] = {.lex_state = 14, .external_lex_state = 3},
  [163] = {.lex_state = 14, .external_lex_state = 3},
  [164] = {.lex_state = 14, .external_lex_state = 3},
  [165] = {.lex_state = 14, .external_lex_state = 3},
  [166] = {.lex_state = 14, .external_lex_state = 3},
  [167] = {.lex_state = 14, .external_lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 14, .external_lex_state = 3},
  [170] = {.lex_state = 14, .external_lex_state = 3},
  [171] = {.lex_state = 14, .external_lex_state = 3},
  [172] = {.lex_state = 14, .external_lex_state = 3},
  [173] = {.lex_state = 14, .external_lex_state = 3},
  [174] = {.lex_state = 14, .external_lex_state = 3},
  [175] = {.lex_state = 14, .external_lex_state = 3},
  [176] = {.lex_state = 14, .external_lex_state = 3},
  [177] = {.lex_state = 14, .external_lex_state = 3},
  [178] = {.lex_state = 14, .external_lex_state = 3},
  [179] = {.lex_state = 14, .external_lex_state = 3},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 14, .external_lex_state = 3},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 14, .external_lex_state = 3},
  [205] = {.lex_state = 14, .external_lex_state = 3},
  [206] = {.lex_state = 14, .external_lex_state = 3},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 13, .external_lex_state = 3},
  [211] = {.lex_state = 13, .external_lex_state = 3},
  [212] = {.lex_state = 13, .external_lex_state = 3},
  [213] = {.lex_state = 13, .external_lex_state = 3},
  [214] = {.lex_state = 13, .external_lex_state = 3},
  [215] = {.lex_state = 32},
  [216] = {.lex_state = 13, .external_lex_state = 3},
  [217] = {.lex_state = 13, .external_lex_state = 3},
  [218] = {.lex_state = 13, .external_lex_state = 3},
  [219] = {.lex_state = 13, .external_lex_state = 3},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 13, .external_lex_state = 3},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 13, .external_lex_state = 3},
  [229] = {.lex_state = 16},
  [230] = {.lex_state = 20},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 16},
  [233] = {.lex_state = 13, .external_lex_state = 3},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 19},
  [237] = {.lex_state = 135},
  [238] = {.lex_state = 135},
  [239] = {.lex_state = 19},
  [240] = {.lex_state = 13, .external_lex_state = 3},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 135},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 135},
  [246] = {.lex_state = 19},
  [247] = {.lex_state = 19},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 19},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 19},
  [252] = {.lex_state = 135},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 19},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 23},
  [258] = {.lex_state = 23},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 17},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 17},
  [266] = {.lex_state = 17},
  [267] = {.lex_state = 17},
  [268] = {.lex_state = 17},
  [269] = {.lex_state = 17},
  [270] = {.lex_state = 17},
  [271] = {.lex_state = 17},
  [272] = {.lex_state = 17},
  [273] = {.lex_state = 24},
  [274] = {.lex_state = 17},
  [275] = {.lex_state = 17},
  [276] = {.lex_state = 135},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 24},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 24},
  [282] = {.lex_state = 24},
  [283] = {.lex_state = 24},
  [284] = {.lex_state = 24},
  [285] = {.lex_state = 24},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 24},
  [288] = {.lex_state = 24},
  [289] = {.lex_state = 24},
  [290] = {.lex_state = 24},
  [291] = {.lex_state = 135},
  [292] = {.lex_state = 135},
  [293] = {.lex_state = 135},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 135},
  [296] = {.lex_state = 14},
  [297] = {.lex_state = 17},
  [298] = {.lex_state = 135},
  [299] = {.lex_state = 17},
  [300] = {.lex_state = 17},
  [301] = {.lex_state = 24},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 135},
  [304] = {.lex_state = 17},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 17},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 135},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 135},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 135},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 135},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 24},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 135},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 2},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 135},
  [336] = {.lex_state = 135},
  [337] = {.lex_state = 24},
  [338] = {.lex_state = 135},
  [339] = {.lex_state = 135},
  [340] = {.lex_state = 135},
  [341] = {.lex_state = 135},
  [342] = {.lex_state = 24},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 135},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 135},
  [349] = {.lex_state = 135},
  [350] = {.lex_state = 135},
  [351] = {.lex_state = 135},
  [352] = {.lex_state = 135},
  [353] = {.lex_state = 135},
  [354] = {.lex_state = 24},
  [355] = {.lex_state = 135},
  [356] = {.lex_state = 135},
  [357] = {.lex_state = 135},
  [358] = {.lex_state = 135},
  [359] = {.lex_state = 135},
  [360] = {.lex_state = 25},
  [361] = {.lex_state = 135},
  [362] = {.lex_state = 135},
  [363] = {.lex_state = 135},
  [364] = {.lex_state = 135, .external_lex_state = 4},
  [365] = {.lex_state = 135, .external_lex_state = 4},
  [366] = {.lex_state = 135},
  [367] = {.lex_state = 135},
  [368] = {.lex_state = 135},
  [369] = {.lex_state = 135, .external_lex_state = 4},
  [370] = {.lex_state = 135, .external_lex_state = 4},
  [371] = {.lex_state = 135},
  [372] = {.lex_state = 135},
  [373] = {.lex_state = 135, .external_lex_state = 4},
  [374] = {.lex_state = 135},
  [375] = {.lex_state = 33},
  [376] = {.lex_state = 14},
  [377] = {.lex_state = 24},
  [378] = {.lex_state = 135},
  [379] = {.lex_state = 135},
  [380] = {.lex_state = 14},
  [381] = {.lex_state = 14},
  [382] = {.lex_state = 135},
  [383] = {.lex_state = 135},
  [384] = {.lex_state = 135},
  [385] = {.lex_state = 135},
  [386] = {.lex_state = 14},
  [387] = {.lex_state = 14},
  [388] = {.lex_state = 135},
  [389] = {.lex_state = 135},
  [390] = {.lex_state = 135},
  [391] = {.lex_state = 43},
  [392] = {.lex_state = 135},
  [393] = {.lex_state = 135},
  [394] = {.lex_state = 14},
  [395] = {.lex_state = 135},
  [396] = {.lex_state = 14},
  [397] = {.lex_state = 14},
  [398] = {.lex_state = 13},
  [399] = {.lex_state = 135},
  [400] = {.lex_state = 43},
  [401] = {.lex_state = 43},
  [402] = {.lex_state = 135},
  [403] = {.lex_state = 135},
  [404] = {.lex_state = 135},
  [405] = {.lex_state = 135},
  [406] = {.lex_state = 14},
  [407] = {.lex_state = 135},
  [408] = {.lex_state = 135},
  [409] = {.lex_state = 135},
  [410] = {.lex_state = 135},
};

enum {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
  ts_external_token__js_expression = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
  [ts_external_token__js_expression] = sym__js_expression,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
    [ts_external_token__js_expression] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [4] = {
    [ts_external_token__js_expression] = true,
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
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
    [sym__js_expression] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(392),
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_keyframe_block] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(383),
    [sym__selector] = STATE(213),
    [sym_universal_selector] = STATE(213),
    [sym_class_selector] = STATE(213),
    [sym_pseudo_class_selector] = STATE(213),
    [sym_pseudo_element_selector] = STATE(213),
    [sym_id_selector] = STATE(213),
    [sym_attribute_selector] = STATE(213),
    [sym_child_selector] = STATE(213),
    [sym_descendant_selector] = STATE(213),
    [sym_sibling_selector] = STATE(213),
    [sym_adjacent_sibling_selector] = STATE(213),
    [sym_namespace_selector] = STATE(213),
    [sym_declaration] = STATE(2),
    [sym_string_value] = STATE(213),
    [sym__keyframe_selector] = STATE(330),
    [sym__integer_percentage] = STATE(330),
    [sym__float_percentage] = STATE(330),
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
    [sym_identifier] = ACTIONS(47),
    [sym_at_keyword] = ACTIONS(49),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [aux_sym__integer_percentage_token1] = ACTIONS(51),
    [aux_sym__float_percentage_token1] = ACTIONS(53),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(55),
    [sym__pseudo_class_selector_colon] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
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
      sym_identifier,
    ACTIONS(49), 1,
      sym_at_keyword,
    ACTIONS(51), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(53), 1,
      aux_sym__float_percentage_token1,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(383), 1,
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
    STATE(330), 3,
      sym__keyframe_selector,
      sym__integer_percentage,
      sym__float_percentage,
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
    STATE(213), 13,
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
  [122] = 31,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_ATimport,
    ACTIONS(66), 1,
      anon_sym_ATmedia,
    ACTIONS(69), 1,
      anon_sym_ATcharset,
    ACTIONS(72), 1,
      anon_sym_ATnamespace,
    ACTIONS(81), 1,
      anon_sym_ATsupports,
    ACTIONS(84), 1,
      sym_nesting_selector,
    ACTIONS(87), 1,
      anon_sym_STAR,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(96), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(105), 1,
      anon_sym_TILDE,
    ACTIONS(108), 1,
      anon_sym_PLUS,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_at_keyword,
    ACTIONS(126), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(129), 1,
      aux_sym__float_percentage_token1,
    ACTIONS(132), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(135), 1,
      sym__pseudo_class_selector_colon,
    STATE(383), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(78), 2,
      sym_from,
      sym_to,
    STATE(330), 3,
      sym__keyframe_selector,
      sym__integer_percentage,
      sym__float_percentage,
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
    STATE(213), 13,
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
  [244] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(138), 1,
      anon_sym_ATimport,
    ACTIONS(140), 1,
      anon_sym_ATmedia,
    ACTIONS(142), 1,
      anon_sym_ATcharset,
    ACTIONS(144), 1,
      anon_sym_ATnamespace,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      anon_sym_ATsupports,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(158), 1,
      sym_at_keyword,
    ACTIONS(160), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(372), 1,
      sym_selectors,
    STATE(384), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(150), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
    STATE(213), 13,
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
  [356] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(138), 1,
      anon_sym_ATimport,
    ACTIONS(140), 1,
      anon_sym_ATmedia,
    ACTIONS(142), 1,
      anon_sym_ATcharset,
    ACTIONS(144), 1,
      anon_sym_ATnamespace,
    ACTIONS(152), 1,
      anon_sym_ATsupports,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(158), 1,
      sym_at_keyword,
    ACTIONS(160), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      sym_selectors,
    STATE(407), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(150), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(4), 12,
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
    STATE(213), 13,
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
  [468] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(138), 1,
      anon_sym_ATimport,
    ACTIONS(140), 1,
      anon_sym_ATmedia,
    ACTIONS(142), 1,
      anon_sym_ATcharset,
    ACTIONS(144), 1,
      anon_sym_ATnamespace,
    ACTIONS(152), 1,
      anon_sym_ATsupports,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(158), 1,
      sym_at_keyword,
    ACTIONS(160), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      sym_selectors,
    STATE(410), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(150), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
    STATE(213), 13,
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
  [580] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(138), 1,
      anon_sym_ATimport,
    ACTIONS(140), 1,
      anon_sym_ATmedia,
    ACTIONS(142), 1,
      anon_sym_ATcharset,
    ACTIONS(144), 1,
      anon_sym_ATnamespace,
    ACTIONS(152), 1,
      anon_sym_ATsupports,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(158), 1,
      sym_at_keyword,
    ACTIONS(160), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      sym_selectors,
    STATE(408), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(150), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
    STATE(213), 13,
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
  [692] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(138), 1,
      anon_sym_ATimport,
    ACTIONS(140), 1,
      anon_sym_ATmedia,
    ACTIONS(142), 1,
      anon_sym_ATcharset,
    ACTIONS(144), 1,
      anon_sym_ATnamespace,
    ACTIONS(152), 1,
      anon_sym_ATsupports,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(158), 1,
      sym_at_keyword,
    ACTIONS(160), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      sym_selectors,
    STATE(390), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(150), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
    STATE(213), 13,
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
  [804] = 28,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(138), 1,
      anon_sym_ATimport,
    ACTIONS(140), 1,
      anon_sym_ATmedia,
    ACTIONS(142), 1,
      anon_sym_ATcharset,
    ACTIONS(144), 1,
      anon_sym_ATnamespace,
    ACTIONS(152), 1,
      anon_sym_ATsupports,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(158), 1,
      sym_at_keyword,
    ACTIONS(160), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      sym_selectors,
    STATE(388), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(150), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
    STATE(213), 13,
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
  [916] = 27,
    ACTIONS(172), 1,
      anon_sym_ATimport,
    ACTIONS(175), 1,
      anon_sym_ATmedia,
    ACTIONS(178), 1,
      anon_sym_ATcharset,
    ACTIONS(181), 1,
      anon_sym_ATnamespace,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_ATsupports,
    ACTIONS(195), 1,
      sym_nesting_selector,
    ACTIONS(198), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(204), 1,
      anon_sym_COLON_COLON,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_TILDE,
    ACTIONS(219), 1,
      anon_sym_PLUS,
    ACTIONS(222), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_at_keyword,
    ACTIONS(234), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(237), 1,
      sym__pseudo_class_selector_colon,
    STATE(372), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(189), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
    STATE(213), 13,
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
  [1025] = 29,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(242), 1,
      sym_nesting_selector,
    ACTIONS(244), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(260), 1,
      anon_sym_LBRACK2,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(93), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(95), 1,
      sym_string_value,
    ACTIONS(240), 2,
      sym_from,
      sym_to,
    STATE(196), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(219), 12,
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
  [1133] = 29,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(244), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(260), 1,
      anon_sym_LBRACK2,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(268), 1,
      sym_nesting_selector,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(95), 1,
      sym_string_value,
    ACTIONS(240), 2,
      sym_from,
      sym_to,
    STATE(196), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(217), 12,
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
  [1241] = 28,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(244), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(260), 1,
      anon_sym_LBRACK2,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(272), 1,
      sym_nesting_selector,
    STATE(95), 1,
      sym_string_value,
    STATE(101), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(240), 2,
      sym_from,
      sym_to,
    STATE(196), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(222), 12,
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
  [1346] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      anon_sym_LPAREN2,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(66), 1,
      sym_block,
    STATE(103), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(279), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(196), 10,
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
  [1425] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(354), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(309), 10,
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
  [1492] = 17,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(316), 1,
      sym_nesting_selector,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(214), 13,
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
  [1559] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(320), 1,
      sym_important,
    ACTIONS(322), 1,
      sym_plain_value,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(354), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
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
  [1626] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(324), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
  [1690] = 18,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(326), 1,
      sym_nesting_selector,
    ACTIONS(328), 1,
      sym_identifier,
    STATE(206), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 2,
      sym_from,
      sym_to,
    STATE(240), 12,
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
  [1758] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(330), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(146), 13,
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
  [1822] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(332), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(152), 13,
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
  [1886] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(334), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(159), 13,
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
  [1950] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(346), 1,
      sym_important,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_plain_value,
    STATE(97), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(344), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(197), 10,
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
  [2022] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(352), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(143), 13,
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
  [2086] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(354), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(212), 13,
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
  [2150] = 18,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(326), 1,
      sym_nesting_selector,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(204), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 2,
      sym_from,
      sym_to,
    STATE(240), 12,
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
  [2218] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(358), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
  [2282] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(360), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(233), 13,
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
  [2346] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(362), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
  [2410] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(364), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
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
  [2474] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(366), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(228), 13,
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
  [2538] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
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
    ACTIONS(57), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_PLUS,
    ACTIONS(368), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(240), 3,
      sym_from,
      sym_to,
      sym_identifier,
    STATE(145), 13,
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
  [2602] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_plain_value,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      sym_important,
    STATE(100), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(344), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(197), 10,
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
  [2671] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(374), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [2708] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(378), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(380), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [2745] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(382), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [2782] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(386), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(388), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [2819] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(390), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(392), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [2856] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(394), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(396), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [2893] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(398), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(400), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [2930] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(402), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(404), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [2967] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(406), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(408), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3004] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(410), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(412), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3041] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(414), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(416), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3078] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(418), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(420), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3115] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(422), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(424), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3152] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(426), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(428), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3189] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(430), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(432), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3226] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(434), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(436), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3263] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_plain_value,
    ACTIONS(438), 1,
      sym_important,
    STATE(102), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(344), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(197), 10,
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
  [3332] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(440), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(442), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3369] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(444), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(446), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3406] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(448), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(450), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3443] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(452), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3480] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(456), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(458), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3517] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(460), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(462), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3554] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(464), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(466), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3591] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(468), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(470), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3628] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(472), 14,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym__float_percentage_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(474), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      anon_sym_DOT,
      anon_sym_PLUS,
      sym_identifier,
      sym_at_keyword,
      aux_sym__integer_percentage_token1,
  [3665] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_arguments,
    ACTIONS(480), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(478), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(484), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(476), 10,
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
  [3711] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(486), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(488), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [3746] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(420), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(418), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [3781] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(310), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(196), 10,
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
  [3846] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(424), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(422), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [3881] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(450), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(448), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [3916] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(470), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(468), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [3951] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(446), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(444), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [3986] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(388), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(386), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4021] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(458), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(456), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4056] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(454), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(452), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4091] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(462), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(460), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4126] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(336), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(196), 10,
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
  [4191] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(442), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(440), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4226] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(412), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(410), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4261] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(396), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(394), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4296] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(318), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(196), 10,
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
  [4361] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(404), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(402), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4396] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(400), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(398), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4431] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(380), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(378), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4466] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(470), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(468), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4501] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(474), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(472), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4536] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(392), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(390), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4571] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(466), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(464), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4606] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(432), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(430), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4641] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(428), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(426), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4676] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(376), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(374), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4711] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(416), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(414), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4746] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(384), 11,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      sym_from,
      sym_to,
      anon_sym_ATsupports,
      sym_identifier,
      sym_at_keyword,
    ACTIONS(382), 15,
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
      anon_sym_DOLLAR_LBRACE,
  [4781] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(503), 1,
      sym_important,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(512), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      aux_sym_integer_value_token1,
    ACTIONS(518), 1,
      aux_sym_float_value_token1,
    ACTIONS(521), 1,
      anon_sym_LBRACK2,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(527), 1,
      sym_plain_value,
    ACTIONS(530), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(498), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(196), 10,
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
  [4841] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(535), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(533), 16,
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
  [4877] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(539), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(537), 16,
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
  [4913] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      sym_important,
    ACTIONS(552), 1,
      anon_sym_LPAREN2,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      aux_sym_integer_value_token1,
    ACTIONS(564), 1,
      aux_sym_float_value_token1,
    ACTIONS(567), 1,
      anon_sym_LBRACK2,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(573), 1,
      sym_plain_value,
    ACTIONS(576), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(92), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(544), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(197), 10,
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
  [4975] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(353), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(196), 10,
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
  [5039] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(357), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(196), 10,
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
  [5103] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(587), 6,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(591), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(585), 10,
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
  [5143] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(593), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(196), 10,
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
  [5203] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_plain_value,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      sym_important,
    STATE(92), 1,
      aux_sym_declaration_repeat1,
    STATE(197), 10,
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
  [5267] = 5,
    STATE(99), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(603), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(605), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(601), 19,
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
  [5304] = 5,
    STATE(99), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(611), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(607), 19,
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
  [5341] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_plain_value,
    ACTIONS(614), 1,
      anon_sym_SEMI,
    ACTIONS(616), 1,
      sym_important,
    STATE(92), 1,
      aux_sym_declaration_repeat1,
    STATE(197), 10,
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
  [5402] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(196), 10,
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
  [5461] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_plain_value,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(620), 1,
      sym_important,
    STATE(92), 1,
      aux_sym_declaration_repeat1,
    STATE(197), 10,
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
  [5522] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(622), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(196), 10,
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
  [5580] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(196), 10,
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
  [5638] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(196), 10,
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
  [5696] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(196), 10,
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
  [5754] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(196), 10,
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
  [5812] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_arguments,
    ACTIONS(634), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(632), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(478), 7,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(484), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [5853] = 5,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(638), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(636), 18,
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
  [5888] = 5,
    ACTIONS(646), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(642), 18,
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
  [5923] = 5,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(650), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(648), 18,
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
  [5958] = 5,
    ACTIONS(646), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(654), 18,
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
  [5993] = 5,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(658), 18,
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
  [6028] = 5,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(662), 18,
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
  [6063] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(196), 10,
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
  [6118] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_important,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(264), 1,
      sym_plain_value,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(196), 10,
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
  [6173] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(666), 1,
      sym_important,
    ACTIONS(668), 1,
      sym_plain_value,
    STATE(33), 10,
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
  [6225] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(670), 1,
      sym_important,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      sym_plain_value,
    STATE(307), 10,
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
  [6277] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(678), 1,
      sym_important,
    ACTIONS(680), 1,
      sym_plain_value,
    STATE(286), 10,
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
  [6329] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(682), 1,
      sym_important,
    ACTIONS(684), 1,
      sym_plain_value,
    STATE(297), 10,
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
  [6381] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(686), 1,
      sym_important,
    ACTIONS(688), 1,
      sym_plain_value,
    STATE(180), 10,
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
  [6433] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(690), 1,
      sym_important,
    ACTIONS(692), 1,
      sym_plain_value,
    STATE(274), 10,
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
  [6485] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_arguments,
    ACTIONS(484), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(478), 11,
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
  [6521] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      sym_important,
    ACTIONS(698), 1,
      anon_sym_LPAREN2,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
    ACTIONS(704), 1,
      aux_sym_integer_value_token1,
    ACTIONS(706), 1,
      aux_sym_float_value_token1,
    ACTIONS(708), 1,
      anon_sym_LBRACK2,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(712), 1,
      sym_plain_value,
    ACTIONS(714), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(248), 10,
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
  [6573] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(716), 1,
      sym_important,
    ACTIONS(718), 1,
      sym_plain_value,
    STATE(280), 10,
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
  [6625] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_LPAREN2,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
    ACTIONS(704), 1,
      aux_sym_integer_value_token1,
    ACTIONS(706), 1,
      aux_sym_float_value_token1,
    ACTIONS(708), 1,
      anon_sym_LBRACK2,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(714), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(720), 1,
      sym_important,
    ACTIONS(722), 1,
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
  [6677] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(724), 1,
      sym_important,
    ACTIONS(726), 1,
      sym_plain_value,
    STATE(304), 10,
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
  [6729] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    STATE(309), 10,
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
  [6781] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(728), 1,
      sym_important,
    ACTIONS(730), 1,
      sym_plain_value,
    STATE(275), 10,
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
  [6833] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(732), 1,
      sym_important,
    ACTIONS(734), 1,
      sym_plain_value,
    STATE(306), 10,
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
  [6885] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(736), 1,
      sym_important,
    ACTIONS(738), 1,
      sym_plain_value,
    STATE(198), 10,
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
  [6937] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(740), 1,
      sym_important,
    ACTIONS(742), 1,
      sym_plain_value,
    STATE(262), 10,
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
  [6989] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(744), 1,
      sym_important,
    ACTIONS(746), 1,
      sym_plain_value,
    STATE(23), 10,
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
  [7041] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(256), 1,
      aux_sym_integer_value_token1,
    ACTIONS(258), 1,
      aux_sym_float_value_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_LBRACK2,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(748), 1,
      sym_important,
    ACTIONS(750), 1,
      sym_plain_value,
    STATE(50), 10,
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
  [7093] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(752), 1,
      sym_important,
    ACTIONS(754), 1,
      sym_plain_value,
    STATE(299), 10,
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
  [7145] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(314), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(320), 1,
      sym_important,
    ACTIONS(322), 1,
      sym_plain_value,
    ACTIONS(672), 1,
      anon_sym_LPAREN2,
    ACTIONS(674), 1,
      sym_identifier,
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
  [7197] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_LPAREN2,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
    ACTIONS(704), 1,
      aux_sym_integer_value_token1,
    ACTIONS(706), 1,
      aux_sym_float_value_token1,
    ACTIONS(708), 1,
      anon_sym_LBRACK2,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(714), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(756), 1,
      sym_important,
    ACTIONS(758), 1,
      sym_plain_value,
    STATE(208), 10,
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
  [7249] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_unit,
    ACTIONS(762), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(760), 12,
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
  [7282] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(533), 18,
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
  [7311] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(768), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(766), 18,
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
  [7340] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(770), 18,
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
  [7369] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(776), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(774), 18,
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
  [7398] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(778), 17,
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
  [7429] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(476), 18,
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
  [7458] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(786), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(784), 17,
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
  [7489] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(790), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(788), 17,
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
  [7520] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(794), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(792), 18,
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
  [7549] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(798), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(796), 18,
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
  [7578] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(537), 18,
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
  [7607] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(802), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(800), 18,
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
  [7636] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(804), 18,
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
  [7665] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(808), 17,
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
  [7696] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(814), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(812), 17,
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
  [7727] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(816), 17,
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
  [7758] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(820), 17,
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
  [7789] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(824), 17,
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
  [7820] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(828), 18,
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
  [7849] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(834), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(832), 18,
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
  [7878] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(836), 17,
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
  [7909] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(840), 18,
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
  [7938] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(846), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(844), 18,
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
  [7967] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(850), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(848), 18,
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
  [7996] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(852), 18,
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
  [8025] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(654), 18,
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
  [8054] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(858), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(856), 18,
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
  [8083] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(862), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(860), 18,
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
  [8112] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(866), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(864), 18,
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
  [8141] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym_unit,
    ACTIONS(870), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(868), 12,
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
  [8174] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(876), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(874), 18,
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
  [8203] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(880), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(878), 18,
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
  [8232] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(884), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(882), 18,
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
  [8261] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(888), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(886), 18,
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
  [8290] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(892), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(890), 18,
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
  [8319] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(896), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(894), 18,
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
  [8348] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(898), 18,
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
  [8377] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(904), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(902), 18,
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
  [8406] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(908), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(906), 18,
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
  [8435] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(642), 18,
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
  [8464] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(912), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(910), 18,
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
  [8493] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(916), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(914), 12,
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
  [8523] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(918), 12,
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
  [8553] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(924), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(922), 12,
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
  [8583] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(928), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(926), 12,
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
  [8613] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(930), 12,
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
  [8643] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(936), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(934), 12,
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
  [8673] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(938), 12,
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
  [8703] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(944), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(942), 12,
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
  [8733] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(537), 12,
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
  [8763] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(535), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(533), 12,
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
  [8793] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(946), 12,
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
  [8823] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(952), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(950), 12,
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
  [8853] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(956), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(954), 12,
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
  [8883] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(960), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(958), 12,
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
  [8913] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    ACTIONS(964), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(587), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8946] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(587), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8979] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(968), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(966), 10,
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
  [9012] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(972), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(970), 10,
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
  [9045] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(974), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(544), 10,
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
  [9078] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(591), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(587), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [9108] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    ACTIONS(591), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(587), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [9138] = 5,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(978), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(476), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9168] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_SEMI,
    ACTIONS(591), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(587), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [9198] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    ACTIONS(591), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(587), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [9228] = 5,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(982), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(585), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9258] = 5,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(982), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(476), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9288] = 5,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(978), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(585), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9318] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(988), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(992), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(302), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9357] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(988), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(992), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(305), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9396] = 9,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(998), 1,
      anon_sym_SEMI,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(273), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9431] = 3,
    ACTIONS(1002), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 12,
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
  [9453] = 3,
    ACTIONS(1004), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 12,
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
  [9475] = 12,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1006), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9515] = 14,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_LBRACE,
    STATE(358), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9559] = 14,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9603] = 9,
    ACTIONS(1034), 1,
      anon_sym_host,
    ACTIONS(1038), 1,
      sym_escape_sequence,
    ACTIONS(1040), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_class_name_repeat1,
    STATE(112), 1,
      sym_class_name,
    STATE(164), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1036), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1032), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9637] = 3,
    ACTIONS(1042), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 12,
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
  [9659] = 14,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    STATE(357), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9703] = 4,
    ACTIONS(1042), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1044), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(476), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [9727] = 14,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    STATE(353), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9771] = 9,
    ACTIONS(1038), 1,
      sym_escape_sequence,
    ACTIONS(1040), 1,
      sym_identifier,
    ACTIONS(1049), 1,
      anon_sym_host,
    STATE(98), 1,
      aux_sym_class_name_repeat1,
    STATE(110), 1,
      sym_class_name,
    STATE(178), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1036), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1047), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9805] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym_arguments,
    ACTIONS(478), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(484), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9832] = 12,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9871] = 6,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(281), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9897] = 6,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(287), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9923] = 6,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(325), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9949] = 6,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(342), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9975] = 6,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(1053), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(354), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10001] = 12,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10039] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym_unit,
    ACTIONS(868), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(870), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10063] = 6,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(289), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10089] = 6,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(301), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10115] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym_unit,
    ACTIONS(760), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(762), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10139] = 12,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10177] = 6,
    ACTIONS(284), 1,
      anon_sym_selector,
    ACTIONS(990), 1,
      anon_sym_LPAREN2,
    ACTIONS(994), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(288), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10203] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(934), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(936), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10224] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(938), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(940), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10245] = 7,
    ACTIONS(51), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(53), 1,
      aux_sym__float_percentage_token1,
    ACTIONS(1063), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1065), 2,
      sym_from,
      sym_to,
    STATE(243), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(335), 3,
      sym__keyframe_selector,
      sym__integer_percentage,
      sym__float_percentage,
  [10272] = 7,
    ACTIONS(51), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(53), 1,
      aux_sym__float_percentage_token1,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1065), 2,
      sym_from,
      sym_to,
    STATE(243), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(335), 3,
      sym__keyframe_selector,
      sym__integer_percentage,
      sym__float_percentage,
  [10299] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(946), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(948), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10320] = 11,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_LBRACK,
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    ACTIONS(1018), 1,
      anon_sym_PLUS,
    ACTIONS(1020), 1,
      anon_sym_PIPE,
    ACTIONS(1022), 1,
      sym__descendant_operator,
    ACTIONS(1024), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10355] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
    ACTIONS(1071), 1,
      anon_sym_COLON,
    STATE(261), 1,
      sym_arguments,
    ACTIONS(478), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(632), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10384] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(918), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(920), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10405] = 7,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
    ACTIONS(1078), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(1081), 1,
      aux_sym__float_percentage_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1075), 2,
      sym_from,
      sym_to,
    STATE(243), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(335), 3,
      sym__keyframe_selector,
      sym__integer_percentage,
      sym__float_percentage,
  [10432] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(537), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(539), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10453] = 7,
    ACTIONS(51), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(53), 1,
      aux_sym__float_percentage_token1,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1065), 2,
      sym_from,
      sym_to,
    STATE(237), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(335), 3,
      sym__keyframe_selector,
      sym__integer_percentage,
      sym__float_percentage,
  [10480] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(930), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(932), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10501] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(922), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(924), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10522] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(914), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(916), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10543] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(942), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(944), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10564] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(958), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(960), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10585] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(954), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(956), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10606] = 7,
    ACTIONS(51), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(53), 1,
      aux_sym__float_percentage_token1,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1065), 2,
      sym_from,
      sym_to,
    STATE(238), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(335), 3,
      sym__keyframe_selector,
      sym__integer_percentage,
      sym__float_percentage,
  [10633] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(950), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(952), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10654] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(926), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(928), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10675] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(533), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(535), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10696] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_arguments,
    ACTIONS(478), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10721] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_SLASH,
    ACTIONS(1088), 1,
      sym_unit,
    ACTIONS(868), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10743] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SLASH,
    ACTIONS(1090), 1,
      sym_unit,
    ACTIONS(760), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10765] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_SLASH,
    ACTIONS(926), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [10785] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_SLASH,
    ACTIONS(942), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10804] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_SLASH,
    ACTIONS(938), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10823] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_SLASH,
    ACTIONS(914), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10842] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_SLASH,
    ACTIONS(934), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10861] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_SLASH,
    ACTIONS(922), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10880] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(930), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10899] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(946), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10918] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_SLASH,
    ACTIONS(954), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10937] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(537), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10956] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SLASH,
    ACTIONS(533), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10975] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_SLASH,
    ACTIONS(950), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10994] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_SLASH,
    ACTIONS(958), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11013] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(918), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11032] = 7,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_block,
    STATE(293), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [11056] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1102), 1,
      anon_sym_RBRACK,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    STATE(349), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11080] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1106), 1,
      anon_sym_RBRACK,
    STATE(361), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11104] = 5,
    ACTIONS(51), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(53), 1,
      aux_sym__float_percentage_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1108), 2,
      sym_from,
      sym_to,
    STATE(371), 3,
      sym__keyframe_selector,
      sym__integer_percentage,
      sym__float_percentage,
  [11124] = 7,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1110), 1,
      sym_identifier,
    STATE(236), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(403), 2,
      sym_string_value,
      sym_call_expression,
  [11148] = 7,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1110), 1,
      sym_identifier,
    STATE(236), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(393), 2,
      sym_string_value,
      sym_call_expression,
  [11172] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_block,
    STATE(303), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [11196] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1114), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11220] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1116), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11233] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1118), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11246] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(632), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11259] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1120), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11272] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1122), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11285] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1124), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11304] = 6,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      sym_block,
    STATE(345), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [11325] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1126), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11338] = 6,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_block,
    STATE(340), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [11359] = 4,
    ACTIONS(1130), 1,
      aux_sym_integer_value_token1,
    STATE(377), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1128), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [11375] = 3,
    ACTIONS(392), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(390), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym__float_percentage_token1,
  [11389] = 3,
    ACTIONS(436), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym__float_percentage_token1,
  [11403] = 6,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_block,
    STATE(338), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11423] = 5,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
    ACTIONS(1134), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(395), 2,
      sym_string_value,
      sym_call_expression,
  [11441] = 3,
    ACTIONS(408), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(406), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym__float_percentage_token1,
  [11455] = 5,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
    ACTIONS(1136), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(404), 2,
      sym_string_value,
      sym_call_expression,
  [11473] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1138), 1,
      anon_sym_RBRACK,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11491] = 3,
    ACTIONS(380), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym__float_percentage_token1,
  [11505] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11523] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11541] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1144), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11555] = 5,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    STATE(350), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [11573] = 6,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_block,
    STATE(338), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11593] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1150), 1,
      anon_sym_SEMI,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11611] = 5,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [11629] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11647] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11665] = 3,
    ACTIONS(388), 1,
      aux_sym__integer_percentage_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(386), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym__float_percentage_token1,
  [11679] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    ACTIONS(1100), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11697] = 4,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11712] = 4,
    ACTIONS(1162), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1164), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11727] = 4,
    ACTIONS(1166), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1168), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11742] = 4,
    ACTIONS(1170), 1,
      anon_sym_DQUOTE,
    STATE(329), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1172), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11757] = 4,
    ACTIONS(1170), 1,
      anon_sym_SQUOTE,
    STATE(312), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1174), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11772] = 4,
    ACTIONS(1176), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1178), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11787] = 4,
    ACTIONS(1176), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1168), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11802] = 4,
    STATE(98), 1,
      aux_sym_class_name_repeat1,
    STATE(148), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1038), 2,
      sym_escape_sequence,
      sym_identifier,
  [11817] = 4,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11832] = 4,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(315), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1184), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11847] = 4,
    ACTIONS(1182), 1,
      anon_sym_SQUOTE,
    STATE(316), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1186), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11862] = 4,
    ACTIONS(1188), 1,
      anon_sym_SQUOTE,
    STATE(331), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1190), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11877] = 4,
    ACTIONS(1188), 1,
      anon_sym_DQUOTE,
    STATE(328), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1192), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11892] = 5,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_block,
    STATE(352), 1,
      aux_sym_keyframe_block_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11909] = 4,
    ACTIONS(1196), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1178), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11924] = 4,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [11939] = 4,
    STATE(98), 1,
      aux_sym_class_name_repeat1,
    STATE(140), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1038), 2,
      sym_escape_sequence,
      sym_identifier,
  [11954] = 4,
    ACTIONS(1196), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1168), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11969] = 4,
    ACTIONS(1198), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1178), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11984] = 4,
    ACTIONS(1166), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1178), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11999] = 5,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym_block,
    STATE(323), 1,
      aux_sym_keyframe_block_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12016] = 4,
    ACTIONS(1198), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1168), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12031] = 4,
    ACTIONS(1200), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1202), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12046] = 4,
    ACTIONS(1200), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1204), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12061] = 4,
    ACTIONS(1162), 1,
      anon_sym_SQUOTE,
    STATE(327), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1206), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12076] = 5,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_LBRACE,
    STATE(295), 1,
      sym_block,
    STATE(348), 1,
      aux_sym_keyframe_block_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12093] = 4,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12108] = 3,
    ACTIONS(1071), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(632), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12121] = 4,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1144), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12136] = 4,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1006), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [12151] = 5,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      sym_block,
    STATE(338), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12168] = 4,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1218), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12183] = 4,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [12198] = 4,
    ACTIONS(1221), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1168), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12213] = 4,
    ACTIONS(1221), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1178), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12228] = 5,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      sym_block,
    STATE(338), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12245] = 4,
    ACTIONS(1223), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1225), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12260] = 4,
    ACTIONS(1228), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1230), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12275] = 5,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1208), 1,
      anon_sym_LBRACE,
    STATE(292), 1,
      sym_block,
    STATE(352), 1,
      aux_sym_keyframe_block_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12292] = 4,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12306] = 4,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1235), 1,
      anon_sym_SEMI,
    STATE(338), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12320] = 4,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12334] = 4,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_LBRACE,
    STATE(352), 1,
      aux_sym_keyframe_block_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12348] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12362] = 3,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_and,
      anon_sym_or,
  [12374] = 4,
    ACTIONS(1124), 1,
      anon_sym_RBRACK,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12388] = 4,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_SEMI,
    STATE(338), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12402] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12416] = 4,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12430] = 4,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12444] = 4,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    ACTIONS(762), 1,
      anon_sym_of,
    ACTIONS(1260), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12458] = 4,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12472] = 4,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12486] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1266), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12495] = 3,
    ACTIONS(1268), 1,
      sym__js_expression,
    STATE(381), 1,
      sym_js_expression,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12506] = 3,
    ACTIONS(1270), 1,
      sym__js_expression,
    STATE(385), 1,
      sym_js_expression,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12517] = 3,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12528] = 3,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12539] = 3,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12550] = 3,
    ACTIONS(1270), 1,
      sym__js_expression,
    STATE(399), 1,
      sym_js_expression,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12561] = 3,
    ACTIONS(1270), 1,
      sym__js_expression,
    STATE(402), 1,
      sym_js_expression,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12572] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1243), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12581] = 3,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12592] = 3,
    ACTIONS(1268), 1,
      sym__js_expression,
    STATE(376), 1,
      sym_js_expression,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12603] = 3,
    ACTIONS(1274), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12614] = 3,
    ACTIONS(1276), 1,
      aux_sym_color_value_token1,
    ACTIONS(1278), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12625] = 3,
    ACTIONS(1280), 1,
      anon_sym_RBRACE,
    ACTIONS(1282), 1,
      anon_sym_RBRACE_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12636] = 3,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    ACTIONS(1286), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12647] = 3,
    ACTIONS(1288), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12658] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1290), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12667] = 3,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
    ACTIONS(1294), 1,
      anon_sym_RBRACE_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12678] = 3,
    ACTIONS(1296), 1,
      anon_sym_RBRACE,
    ACTIONS(1298), 1,
      anon_sym_RBRACE_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12689] = 3,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12700] = 3,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12711] = 2,
    ACTIONS(1300), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12719] = 2,
    ACTIONS(1302), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12727] = 2,
    ACTIONS(1304), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12735] = 2,
    ACTIONS(1306), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12743] = 2,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12751] = 2,
    ACTIONS(1308), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12759] = 2,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12767] = 2,
    ACTIONS(1310), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12775] = 2,
    ACTIONS(1312), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12783] = 2,
    ACTIONS(1314), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12791] = 2,
    ACTIONS(1316), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12799] = 2,
    ACTIONS(1318), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12807] = 2,
    ACTIONS(1320), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12815] = 2,
    ACTIONS(1322), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12823] = 2,
    ACTIONS(1324), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12831] = 2,
    ACTIONS(1326), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12839] = 2,
    ACTIONS(1328), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12847] = 2,
    ACTIONS(1330), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12855] = 2,
    ACTIONS(1332), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12863] = 2,
    ACTIONS(1334), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12871] = 2,
    ACTIONS(1336), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12879] = 2,
    ACTIONS(1294), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12887] = 2,
    ACTIONS(1338), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12895] = 2,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12903] = 2,
    ACTIONS(1340), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12911] = 2,
    ACTIONS(1342), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12919] = 2,
    ACTIONS(1344), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 122,
  [SMALL_STATE(4)] = 244,
  [SMALL_STATE(5)] = 356,
  [SMALL_STATE(6)] = 468,
  [SMALL_STATE(7)] = 580,
  [SMALL_STATE(8)] = 692,
  [SMALL_STATE(9)] = 804,
  [SMALL_STATE(10)] = 916,
  [SMALL_STATE(11)] = 1025,
  [SMALL_STATE(12)] = 1133,
  [SMALL_STATE(13)] = 1241,
  [SMALL_STATE(14)] = 1346,
  [SMALL_STATE(15)] = 1425,
  [SMALL_STATE(16)] = 1492,
  [SMALL_STATE(17)] = 1559,
  [SMALL_STATE(18)] = 1626,
  [SMALL_STATE(19)] = 1690,
  [SMALL_STATE(20)] = 1758,
  [SMALL_STATE(21)] = 1822,
  [SMALL_STATE(22)] = 1886,
  [SMALL_STATE(23)] = 1950,
  [SMALL_STATE(24)] = 2022,
  [SMALL_STATE(25)] = 2086,
  [SMALL_STATE(26)] = 2150,
  [SMALL_STATE(27)] = 2218,
  [SMALL_STATE(28)] = 2282,
  [SMALL_STATE(29)] = 2346,
  [SMALL_STATE(30)] = 2410,
  [SMALL_STATE(31)] = 2474,
  [SMALL_STATE(32)] = 2538,
  [SMALL_STATE(33)] = 2602,
  [SMALL_STATE(34)] = 2671,
  [SMALL_STATE(35)] = 2708,
  [SMALL_STATE(36)] = 2745,
  [SMALL_STATE(37)] = 2782,
  [SMALL_STATE(38)] = 2819,
  [SMALL_STATE(39)] = 2856,
  [SMALL_STATE(40)] = 2893,
  [SMALL_STATE(41)] = 2930,
  [SMALL_STATE(42)] = 2967,
  [SMALL_STATE(43)] = 3004,
  [SMALL_STATE(44)] = 3041,
  [SMALL_STATE(45)] = 3078,
  [SMALL_STATE(46)] = 3115,
  [SMALL_STATE(47)] = 3152,
  [SMALL_STATE(48)] = 3189,
  [SMALL_STATE(49)] = 3226,
  [SMALL_STATE(50)] = 3263,
  [SMALL_STATE(51)] = 3332,
  [SMALL_STATE(52)] = 3369,
  [SMALL_STATE(53)] = 3406,
  [SMALL_STATE(54)] = 3443,
  [SMALL_STATE(55)] = 3480,
  [SMALL_STATE(56)] = 3517,
  [SMALL_STATE(57)] = 3554,
  [SMALL_STATE(58)] = 3591,
  [SMALL_STATE(59)] = 3628,
  [SMALL_STATE(60)] = 3665,
  [SMALL_STATE(61)] = 3711,
  [SMALL_STATE(62)] = 3746,
  [SMALL_STATE(63)] = 3781,
  [SMALL_STATE(64)] = 3846,
  [SMALL_STATE(65)] = 3881,
  [SMALL_STATE(66)] = 3916,
  [SMALL_STATE(67)] = 3951,
  [SMALL_STATE(68)] = 3986,
  [SMALL_STATE(69)] = 4021,
  [SMALL_STATE(70)] = 4056,
  [SMALL_STATE(71)] = 4091,
  [SMALL_STATE(72)] = 4126,
  [SMALL_STATE(73)] = 4191,
  [SMALL_STATE(74)] = 4226,
  [SMALL_STATE(75)] = 4261,
  [SMALL_STATE(76)] = 4296,
  [SMALL_STATE(77)] = 4361,
  [SMALL_STATE(78)] = 4396,
  [SMALL_STATE(79)] = 4431,
  [SMALL_STATE(80)] = 4466,
  [SMALL_STATE(81)] = 4501,
  [SMALL_STATE(82)] = 4536,
  [SMALL_STATE(83)] = 4571,
  [SMALL_STATE(84)] = 4606,
  [SMALL_STATE(85)] = 4641,
  [SMALL_STATE(86)] = 4676,
  [SMALL_STATE(87)] = 4711,
  [SMALL_STATE(88)] = 4746,
  [SMALL_STATE(89)] = 4781,
  [SMALL_STATE(90)] = 4841,
  [SMALL_STATE(91)] = 4877,
  [SMALL_STATE(92)] = 4913,
  [SMALL_STATE(93)] = 4975,
  [SMALL_STATE(94)] = 5039,
  [SMALL_STATE(95)] = 5103,
  [SMALL_STATE(96)] = 5143,
  [SMALL_STATE(97)] = 5203,
  [SMALL_STATE(98)] = 5267,
  [SMALL_STATE(99)] = 5304,
  [SMALL_STATE(100)] = 5341,
  [SMALL_STATE(101)] = 5402,
  [SMALL_STATE(102)] = 5461,
  [SMALL_STATE(103)] = 5522,
  [SMALL_STATE(104)] = 5580,
  [SMALL_STATE(105)] = 5638,
  [SMALL_STATE(106)] = 5696,
  [SMALL_STATE(107)] = 5754,
  [SMALL_STATE(108)] = 5812,
  [SMALL_STATE(109)] = 5853,
  [SMALL_STATE(110)] = 5888,
  [SMALL_STATE(111)] = 5923,
  [SMALL_STATE(112)] = 5958,
  [SMALL_STATE(113)] = 5993,
  [SMALL_STATE(114)] = 6028,
  [SMALL_STATE(115)] = 6063,
  [SMALL_STATE(116)] = 6118,
  [SMALL_STATE(117)] = 6173,
  [SMALL_STATE(118)] = 6225,
  [SMALL_STATE(119)] = 6277,
  [SMALL_STATE(120)] = 6329,
  [SMALL_STATE(121)] = 6381,
  [SMALL_STATE(122)] = 6433,
  [SMALL_STATE(123)] = 6485,
  [SMALL_STATE(124)] = 6521,
  [SMALL_STATE(125)] = 6573,
  [SMALL_STATE(126)] = 6625,
  [SMALL_STATE(127)] = 6677,
  [SMALL_STATE(128)] = 6729,
  [SMALL_STATE(129)] = 6781,
  [SMALL_STATE(130)] = 6833,
  [SMALL_STATE(131)] = 6885,
  [SMALL_STATE(132)] = 6937,
  [SMALL_STATE(133)] = 6989,
  [SMALL_STATE(134)] = 7041,
  [SMALL_STATE(135)] = 7093,
  [SMALL_STATE(136)] = 7145,
  [SMALL_STATE(137)] = 7197,
  [SMALL_STATE(138)] = 7249,
  [SMALL_STATE(139)] = 7282,
  [SMALL_STATE(140)] = 7311,
  [SMALL_STATE(141)] = 7340,
  [SMALL_STATE(142)] = 7369,
  [SMALL_STATE(143)] = 7398,
  [SMALL_STATE(144)] = 7429,
  [SMALL_STATE(145)] = 7458,
  [SMALL_STATE(146)] = 7489,
  [SMALL_STATE(147)] = 7520,
  [SMALL_STATE(148)] = 7549,
  [SMALL_STATE(149)] = 7578,
  [SMALL_STATE(150)] = 7607,
  [SMALL_STATE(151)] = 7636,
  [SMALL_STATE(152)] = 7665,
  [SMALL_STATE(153)] = 7696,
  [SMALL_STATE(154)] = 7727,
  [SMALL_STATE(155)] = 7758,
  [SMALL_STATE(156)] = 7789,
  [SMALL_STATE(157)] = 7820,
  [SMALL_STATE(158)] = 7849,
  [SMALL_STATE(159)] = 7878,
  [SMALL_STATE(160)] = 7909,
  [SMALL_STATE(161)] = 7938,
  [SMALL_STATE(162)] = 7967,
  [SMALL_STATE(163)] = 7996,
  [SMALL_STATE(164)] = 8025,
  [SMALL_STATE(165)] = 8054,
  [SMALL_STATE(166)] = 8083,
  [SMALL_STATE(167)] = 8112,
  [SMALL_STATE(168)] = 8141,
  [SMALL_STATE(169)] = 8174,
  [SMALL_STATE(170)] = 8203,
  [SMALL_STATE(171)] = 8232,
  [SMALL_STATE(172)] = 8261,
  [SMALL_STATE(173)] = 8290,
  [SMALL_STATE(174)] = 8319,
  [SMALL_STATE(175)] = 8348,
  [SMALL_STATE(176)] = 8377,
  [SMALL_STATE(177)] = 8406,
  [SMALL_STATE(178)] = 8435,
  [SMALL_STATE(179)] = 8464,
  [SMALL_STATE(180)] = 8493,
  [SMALL_STATE(181)] = 8523,
  [SMALL_STATE(182)] = 8553,
  [SMALL_STATE(183)] = 8583,
  [SMALL_STATE(184)] = 8613,
  [SMALL_STATE(185)] = 8643,
  [SMALL_STATE(186)] = 8673,
  [SMALL_STATE(187)] = 8703,
  [SMALL_STATE(188)] = 8733,
  [SMALL_STATE(189)] = 8763,
  [SMALL_STATE(190)] = 8793,
  [SMALL_STATE(191)] = 8823,
  [SMALL_STATE(192)] = 8853,
  [SMALL_STATE(193)] = 8883,
  [SMALL_STATE(194)] = 8913,
  [SMALL_STATE(195)] = 8946,
  [SMALL_STATE(196)] = 8979,
  [SMALL_STATE(197)] = 9012,
  [SMALL_STATE(198)] = 9045,
  [SMALL_STATE(199)] = 9078,
  [SMALL_STATE(200)] = 9108,
  [SMALL_STATE(201)] = 9138,
  [SMALL_STATE(202)] = 9168,
  [SMALL_STATE(203)] = 9198,
  [SMALL_STATE(204)] = 9228,
  [SMALL_STATE(205)] = 9258,
  [SMALL_STATE(206)] = 9288,
  [SMALL_STATE(207)] = 9318,
  [SMALL_STATE(208)] = 9357,
  [SMALL_STATE(209)] = 9396,
  [SMALL_STATE(210)] = 9431,
  [SMALL_STATE(211)] = 9453,
  [SMALL_STATE(212)] = 9475,
  [SMALL_STATE(213)] = 9515,
  [SMALL_STATE(214)] = 9559,
  [SMALL_STATE(215)] = 9603,
  [SMALL_STATE(216)] = 9637,
  [SMALL_STATE(217)] = 9659,
  [SMALL_STATE(218)] = 9703,
  [SMALL_STATE(219)] = 9727,
  [SMALL_STATE(220)] = 9771,
  [SMALL_STATE(221)] = 9805,
  [SMALL_STATE(222)] = 9832,
  [SMALL_STATE(223)] = 9871,
  [SMALL_STATE(224)] = 9897,
  [SMALL_STATE(225)] = 9923,
  [SMALL_STATE(226)] = 9949,
  [SMALL_STATE(227)] = 9975,
  [SMALL_STATE(228)] = 10001,
  [SMALL_STATE(229)] = 10039,
  [SMALL_STATE(230)] = 10063,
  [SMALL_STATE(231)] = 10089,
  [SMALL_STATE(232)] = 10115,
  [SMALL_STATE(233)] = 10139,
  [SMALL_STATE(234)] = 10177,
  [SMALL_STATE(235)] = 10203,
  [SMALL_STATE(236)] = 10224,
  [SMALL_STATE(237)] = 10245,
  [SMALL_STATE(238)] = 10272,
  [SMALL_STATE(239)] = 10299,
  [SMALL_STATE(240)] = 10320,
  [SMALL_STATE(241)] = 10355,
  [SMALL_STATE(242)] = 10384,
  [SMALL_STATE(243)] = 10405,
  [SMALL_STATE(244)] = 10432,
  [SMALL_STATE(245)] = 10453,
  [SMALL_STATE(246)] = 10480,
  [SMALL_STATE(247)] = 10501,
  [SMALL_STATE(248)] = 10522,
  [SMALL_STATE(249)] = 10543,
  [SMALL_STATE(250)] = 10564,
  [SMALL_STATE(251)] = 10585,
  [SMALL_STATE(252)] = 10606,
  [SMALL_STATE(253)] = 10633,
  [SMALL_STATE(254)] = 10654,
  [SMALL_STATE(255)] = 10675,
  [SMALL_STATE(256)] = 10696,
  [SMALL_STATE(257)] = 10721,
  [SMALL_STATE(258)] = 10743,
  [SMALL_STATE(259)] = 10765,
  [SMALL_STATE(260)] = 10785,
  [SMALL_STATE(261)] = 10804,
  [SMALL_STATE(262)] = 10823,
  [SMALL_STATE(263)] = 10842,
  [SMALL_STATE(264)] = 10861,
  [SMALL_STATE(265)] = 10880,
  [SMALL_STATE(266)] = 10899,
  [SMALL_STATE(267)] = 10918,
  [SMALL_STATE(268)] = 10937,
  [SMALL_STATE(269)] = 10956,
  [SMALL_STATE(270)] = 10975,
  [SMALL_STATE(271)] = 10994,
  [SMALL_STATE(272)] = 11013,
  [SMALL_STATE(273)] = 11032,
  [SMALL_STATE(274)] = 11056,
  [SMALL_STATE(275)] = 11080,
  [SMALL_STATE(276)] = 11104,
  [SMALL_STATE(277)] = 11124,
  [SMALL_STATE(278)] = 11148,
  [SMALL_STATE(279)] = 11172,
  [SMALL_STATE(280)] = 11196,
  [SMALL_STATE(281)] = 11220,
  [SMALL_STATE(282)] = 11233,
  [SMALL_STATE(283)] = 11246,
  [SMALL_STATE(284)] = 11259,
  [SMALL_STATE(285)] = 11272,
  [SMALL_STATE(286)] = 11285,
  [SMALL_STATE(287)] = 11304,
  [SMALL_STATE(288)] = 11325,
  [SMALL_STATE(289)] = 11338,
  [SMALL_STATE(290)] = 11359,
  [SMALL_STATE(291)] = 11375,
  [SMALL_STATE(292)] = 11389,
  [SMALL_STATE(293)] = 11403,
  [SMALL_STATE(294)] = 11423,
  [SMALL_STATE(295)] = 11441,
  [SMALL_STATE(296)] = 11455,
  [SMALL_STATE(297)] = 11473,
  [SMALL_STATE(298)] = 11491,
  [SMALL_STATE(299)] = 11505,
  [SMALL_STATE(300)] = 11523,
  [SMALL_STATE(301)] = 11541,
  [SMALL_STATE(302)] = 11555,
  [SMALL_STATE(303)] = 11573,
  [SMALL_STATE(304)] = 11593,
  [SMALL_STATE(305)] = 11611,
  [SMALL_STATE(306)] = 11629,
  [SMALL_STATE(307)] = 11647,
  [SMALL_STATE(308)] = 11665,
  [SMALL_STATE(309)] = 11679,
  [SMALL_STATE(310)] = 11697,
  [SMALL_STATE(311)] = 11712,
  [SMALL_STATE(312)] = 11727,
  [SMALL_STATE(313)] = 11742,
  [SMALL_STATE(314)] = 11757,
  [SMALL_STATE(315)] = 11772,
  [SMALL_STATE(316)] = 11787,
  [SMALL_STATE(317)] = 11802,
  [SMALL_STATE(318)] = 11817,
  [SMALL_STATE(319)] = 11832,
  [SMALL_STATE(320)] = 11847,
  [SMALL_STATE(321)] = 11862,
  [SMALL_STATE(322)] = 11877,
  [SMALL_STATE(323)] = 11892,
  [SMALL_STATE(324)] = 11909,
  [SMALL_STATE(325)] = 11924,
  [SMALL_STATE(326)] = 11939,
  [SMALL_STATE(327)] = 11954,
  [SMALL_STATE(328)] = 11969,
  [SMALL_STATE(329)] = 11984,
  [SMALL_STATE(330)] = 11999,
  [SMALL_STATE(331)] = 12016,
  [SMALL_STATE(332)] = 12031,
  [SMALL_STATE(333)] = 12046,
  [SMALL_STATE(334)] = 12061,
  [SMALL_STATE(335)] = 12076,
  [SMALL_STATE(336)] = 12093,
  [SMALL_STATE(337)] = 12108,
  [SMALL_STATE(338)] = 12121,
  [SMALL_STATE(339)] = 12136,
  [SMALL_STATE(340)] = 12151,
  [SMALL_STATE(341)] = 12168,
  [SMALL_STATE(342)] = 12183,
  [SMALL_STATE(343)] = 12198,
  [SMALL_STATE(344)] = 12213,
  [SMALL_STATE(345)] = 12228,
  [SMALL_STATE(346)] = 12245,
  [SMALL_STATE(347)] = 12260,
  [SMALL_STATE(348)] = 12275,
  [SMALL_STATE(349)] = 12292,
  [SMALL_STATE(350)] = 12306,
  [SMALL_STATE(351)] = 12320,
  [SMALL_STATE(352)] = 12334,
  [SMALL_STATE(353)] = 12348,
  [SMALL_STATE(354)] = 12362,
  [SMALL_STATE(355)] = 12374,
  [SMALL_STATE(356)] = 12388,
  [SMALL_STATE(357)] = 12402,
  [SMALL_STATE(358)] = 12416,
  [SMALL_STATE(359)] = 12430,
  [SMALL_STATE(360)] = 12444,
  [SMALL_STATE(361)] = 12458,
  [SMALL_STATE(362)] = 12472,
  [SMALL_STATE(363)] = 12486,
  [SMALL_STATE(364)] = 12495,
  [SMALL_STATE(365)] = 12506,
  [SMALL_STATE(366)] = 12517,
  [SMALL_STATE(367)] = 12528,
  [SMALL_STATE(368)] = 12539,
  [SMALL_STATE(369)] = 12550,
  [SMALL_STATE(370)] = 12561,
  [SMALL_STATE(371)] = 12572,
  [SMALL_STATE(372)] = 12581,
  [SMALL_STATE(373)] = 12592,
  [SMALL_STATE(374)] = 12603,
  [SMALL_STATE(375)] = 12614,
  [SMALL_STATE(376)] = 12625,
  [SMALL_STATE(377)] = 12636,
  [SMALL_STATE(378)] = 12647,
  [SMALL_STATE(379)] = 12658,
  [SMALL_STATE(380)] = 12667,
  [SMALL_STATE(381)] = 12678,
  [SMALL_STATE(382)] = 12689,
  [SMALL_STATE(383)] = 12700,
  [SMALL_STATE(384)] = 12711,
  [SMALL_STATE(385)] = 12719,
  [SMALL_STATE(386)] = 12727,
  [SMALL_STATE(387)] = 12735,
  [SMALL_STATE(388)] = 12743,
  [SMALL_STATE(389)] = 12751,
  [SMALL_STATE(390)] = 12759,
  [SMALL_STATE(391)] = 12767,
  [SMALL_STATE(392)] = 12775,
  [SMALL_STATE(393)] = 12783,
  [SMALL_STATE(394)] = 12791,
  [SMALL_STATE(395)] = 12799,
  [SMALL_STATE(396)] = 12807,
  [SMALL_STATE(397)] = 12815,
  [SMALL_STATE(398)] = 12823,
  [SMALL_STATE(399)] = 12831,
  [SMALL_STATE(400)] = 12839,
  [SMALL_STATE(401)] = 12847,
  [SMALL_STATE(402)] = 12855,
  [SMALL_STATE(403)] = 12863,
  [SMALL_STATE(404)] = 12871,
  [SMALL_STATE(405)] = 12879,
  [SMALL_STATE(406)] = 12887,
  [SMALL_STATE(407)] = 12895,
  [SMALL_STATE(408)] = 12903,
  [SMALL_STATE(409)] = 12911,
  [SMALL_STATE(410)] = 12919,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(137),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(230),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(135),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(294),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(406),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(218),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(225),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(213),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(157),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(326),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(394),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(386),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(32),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(21),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(22),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(321),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(322),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(216),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(209),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(409),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(389),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(364),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(215),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(224),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(127),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(296),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(396),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(211),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(226),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(213),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(157),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(326),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(394),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(386),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(321),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(322),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(373),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(215),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, .dynamic_precedence = 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block, 2, .dynamic_precedence = 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 3, .dynamic_precedence = -1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block, 3, .dynamic_precedence = -1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(400),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(196),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(136),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(320),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(319),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(138),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(168),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(122),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(123),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(196),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(365),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(400),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(197),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(136),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(320),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(319),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(138),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(168),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(122),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(197),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(365),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2), SHIFT_REPEAT(99),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 4),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 2),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 2),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 2),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1), REDUCE(sym__keyframe_selector, 1),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(335),
  [1078] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(409),
  [1081] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(389),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(231),
  [1215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(25),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(116),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2),
  [1225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2), SHIFT_REPEAT(346),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2),
  [1230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2), SHIFT_REPEAT(347),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_repeat1, 2), SHIFT_REPEAT(276),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_repeat1, 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(119),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_percentage, 2),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_percentage, 2),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_expression, 1),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_expression, 1),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1312] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
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
