#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 3
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_package = 1,
  anon_sym_templ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  sym_parameter_type = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  anon_sym_EQ_DQUOTE = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_FOO = 13,
  anon_sym_LT_SLASH = 14,
  sym_expression_content = 15,
  anon_sym_css = 16,
  anon_sym_COLON = 17,
  anon_sym_SEMI = 18,
  sym_css_property_name = 19,
  aux_sym_css_property_value_token1 = 20,
  sym_identifier = 21,
  sym_element_identifier = 22,
  sym_attribute_name = 23,
  sym_attribute_value = 24,
  sym_source_file = 25,
  sym__definition = 26,
  sym_package_declaration = 27,
  sym_component_declaration = 28,
  sym_parameter_list = 29,
  sym_parameter_declaration = 30,
  sym_block = 31,
  sym_element = 32,
  sym_open_tag = 33,
  sym_attribute = 34,
  sym_element_content = 35,
  sym_close_tag = 36,
  sym_expression = 37,
  sym_css_declaration = 38,
  sym_css_block = 39,
  sym_css_property = 40,
  sym_css_property_value = 41,
  sym__package_identifier = 42,
  sym__component_identifier = 43,
  sym__parameter_identifier = 44,
  sym__css_identifier = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_parameter_list_repeat1 = 47,
  aux_sym_block_repeat1 = 48,
  aux_sym_element_repeat1 = 49,
  aux_sym_open_tag_repeat1 = 50,
  aux_sym_css_block_repeat1 = 51,
  alias_sym_component_identifier = 52,
  alias_sym_css_identifier = 53,
  alias_sym_parameter_identifier = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_templ] = "templ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_parameter_type] = "parameter_type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_DQUOTE] = "=\"",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_FOO] = "FOO",
  [anon_sym_LT_SLASH] = "</",
  [sym_expression_content] = "expression_content",
  [anon_sym_css] = "css",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_css_property_name] = "css_property_name",
  [aux_sym_css_property_value_token1] = "css_property_value_token1",
  [sym_identifier] = "package_identifier",
  [sym_element_identifier] = "element_identifier",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_package_declaration] = "package_declaration",
  [sym_component_declaration] = "component_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_block] = "block",
  [sym_element] = "element",
  [sym_open_tag] = "open_tag",
  [sym_attribute] = "attribute",
  [sym_element_content] = "element_content",
  [sym_close_tag] = "close_tag",
  [sym_expression] = "expression",
  [sym_css_declaration] = "css_declaration",
  [sym_css_block] = "css_block",
  [sym_css_property] = "css_property",
  [sym_css_property_value] = "css_property_value",
  [sym__package_identifier] = "_package_identifier",
  [sym__component_identifier] = "_component_identifier",
  [sym__parameter_identifier] = "_parameter_identifier",
  [sym__css_identifier] = "_css_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_open_tag_repeat1] = "open_tag_repeat1",
  [aux_sym_css_block_repeat1] = "css_block_repeat1",
  [alias_sym_component_identifier] = "component_identifier",
  [alias_sym_css_identifier] = "css_identifier",
  [alias_sym_parameter_identifier] = "parameter_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_templ] = anon_sym_templ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_parameter_type] = sym_parameter_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_DQUOTE] = anon_sym_EQ_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_FOO] = anon_sym_FOO,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_expression_content] = sym_expression_content,
  [anon_sym_css] = anon_sym_css,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_css_property_name] = sym_css_property_name,
  [aux_sym_css_property_value_token1] = aux_sym_css_property_value_token1,
  [sym_identifier] = sym_identifier,
  [sym_element_identifier] = sym_element_identifier,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_package_declaration] = sym_package_declaration,
  [sym_component_declaration] = sym_component_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_block] = sym_block,
  [sym_element] = sym_element,
  [sym_open_tag] = sym_open_tag,
  [sym_attribute] = sym_attribute,
  [sym_element_content] = sym_element_content,
  [sym_close_tag] = sym_close_tag,
  [sym_expression] = sym_expression,
  [sym_css_declaration] = sym_css_declaration,
  [sym_css_block] = sym_css_block,
  [sym_css_property] = sym_css_property,
  [sym_css_property_value] = sym_css_property_value,
  [sym__package_identifier] = sym__package_identifier,
  [sym__component_identifier] = sym__component_identifier,
  [sym__parameter_identifier] = sym__parameter_identifier,
  [sym__css_identifier] = sym__css_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_open_tag_repeat1] = aux_sym_open_tag_repeat1,
  [aux_sym_css_block_repeat1] = aux_sym_css_block_repeat1,
  [alias_sym_component_identifier] = alias_sym_component_identifier,
  [alias_sym_css_identifier] = alias_sym_css_identifier,
  [alias_sym_parameter_identifier] = alias_sym_parameter_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_templ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_parameter_type] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_expression_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_css] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_css_property_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_css_property_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_element_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_component_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_open_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_element_content] = {
    .visible = true,
    .named = true,
  },
  [sym_close_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_css_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_css_block] = {
    .visible = true,
    .named = true,
  },
  [sym_css_property] = {
    .visible = true,
    .named = true,
  },
  [sym_css_property_value] = {
    .visible = true,
    .named = true,
  },
  [sym__package_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__component_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__css_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_component_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_css_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_content = 1,
  field_name = 2,
  field_type = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 2},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
    {field_type, 1},
  [3] =
    {field_name, 0},
    {field_value, 2},
  [5] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_component_identifier,
  },
  [2] = {
    [0] = alias_sym_css_identifier,
  },
  [3] = {
    [0] = alias_sym_parameter_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'k') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_templ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_parameter_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_FOO);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_expression_content);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_css);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_css_property_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_css_property_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_element_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 23},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 25},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 24},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_templ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_FOO] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [sym_expression_content] = ACTIONS(1),
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym_package_declaration] = STATE(4),
    [anon_sym_package] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_FOO,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_open_tag,
    STATE(16), 1,
      sym_close_tag,
    STATE(31), 1,
      sym_element,
    STATE(3), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [23] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_FOO,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_open_tag,
    STATE(14), 1,
      sym_close_tag,
    STATE(31), 1,
      sym_element,
    STATE(5), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [46] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_templ,
    ACTIONS(15), 1,
      anon_sym_css,
    STATE(6), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [62] = 6,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(20), 1,
      anon_sym_FOO,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_open_tag,
    STATE(31), 1,
      sym_element,
    STATE(5), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [82] = 4,
    ACTIONS(13), 1,
      anon_sym_templ,
    ACTIONS(15), 1,
      anon_sym_css,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(7), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [98] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_templ,
    ACTIONS(32), 1,
      anon_sym_css,
    STATE(7), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [114] = 5,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_parameter_list_repeat1,
    STATE(35), 1,
      sym_parameter_declaration,
    STATE(61), 1,
      sym__parameter_identifier,
  [130] = 5,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_parameter_list_repeat1,
    STATE(35), 1,
      sym_parameter_declaration,
    STATE(61), 1,
      sym__parameter_identifier,
  [146] = 4,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_open_tag,
    STATE(12), 2,
      sym_element,
      aux_sym_block_repeat1,
  [160] = 5,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_parameter_list_repeat1,
    STATE(35), 1,
      sym_parameter_declaration,
    STATE(61), 1,
      sym__parameter_identifier,
  [176] = 4,
    ACTIONS(46), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_open_tag,
    STATE(13), 2,
      sym_element,
      aux_sym_block_repeat1,
  [190] = 4,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_open_tag,
    STATE(13), 2,
      sym_element,
      aux_sym_block_repeat1,
  [204] = 2,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(57), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [213] = 2,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [222] = 2,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [231] = 3,
    ACTIONS(69), 1,
      anon_sym_GT,
    ACTIONS(71), 1,
      sym_attribute_name,
    STATE(21), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [242] = 3,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym_css_property_name,
    STATE(20), 2,
      sym_css_property,
      aux_sym_css_block_repeat1,
  [253] = 3,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      aux_sym_css_property_value_token1,
    STATE(55), 2,
      sym_expression,
      sym_css_property_value,
  [264] = 3,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      sym_css_property_name,
    STATE(20), 2,
      sym_css_property,
      aux_sym_css_block_repeat1,
  [275] = 3,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(86), 1,
      anon_sym_GT,
    STATE(23), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [286] = 3,
    ACTIONS(75), 1,
      sym_css_property_name,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_css_property,
      aux_sym_css_block_repeat1,
  [297] = 3,
    ACTIONS(90), 1,
      anon_sym_GT,
    ACTIONS(92), 1,
      sym_attribute_name,
    STATE(23), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [308] = 2,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(97), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [316] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [322] = 1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [328] = 1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [334] = 1,
    ACTIONS(105), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [340] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [346] = 1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [352] = 2,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [360] = 2,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(117), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [368] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [374] = 1,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [380] = 2,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [388] = 2,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_parameter_list,
  [395] = 2,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(33), 1,
      sym__package_identifier,
  [402] = 1,
    ACTIONS(131), 2,
      anon_sym_RBRACE,
      sym_css_property_name,
  [407] = 2,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(36), 1,
      sym__component_identifier,
  [414] = 2,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(44), 1,
      sym__css_identifier,
  [421] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_css_block,
  [428] = 1,
    ACTIONS(139), 2,
      anon_sym_GT,
      sym_attribute_name,
  [433] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [440] = 2,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_parameter_list,
  [447] = 1,
    ACTIONS(39), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [452] = 1,
    ACTIONS(143), 1,
      anon_sym_COLON,
  [456] = 1,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
  [460] = 1,
    ACTIONS(147), 1,
      anon_sym_EQ_DQUOTE,
  [464] = 1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
  [468] = 1,
    ACTIONS(151), 1,
      anon_sym_GT,
  [472] = 1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
  [476] = 1,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
  [480] = 1,
    ACTIONS(157), 1,
      sym_expression_content,
  [484] = 1,
    ACTIONS(159), 1,
      anon_sym_SEMI,
  [488] = 1,
    ACTIONS(161), 1,
      anon_sym_SEMI,
  [492] = 1,
    ACTIONS(163), 1,
      sym_attribute_value,
  [496] = 1,
    ACTIONS(165), 1,
      sym_element_identifier,
  [500] = 1,
    ACTIONS(167), 1,
      sym_parameter_type,
  [504] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [508] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
  [512] = 1,
    ACTIONS(173), 1,
      sym_parameter_type,
  [516] = 1,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
  [520] = 1,
    ACTIONS(177), 1,
      anon_sym_SEMI,
  [524] = 1,
    ACTIONS(179), 1,
      sym_element_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 190,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 253,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 286,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 316,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 328,
  [SMALL_STATE(28)] = 334,
  [SMALL_STATE(29)] = 340,
  [SMALL_STATE(30)] = 346,
  [SMALL_STATE(31)] = 352,
  [SMALL_STATE(32)] = 360,
  [SMALL_STATE(33)] = 368,
  [SMALL_STATE(34)] = 374,
  [SMALL_STATE(35)] = 380,
  [SMALL_STATE(36)] = 388,
  [SMALL_STATE(37)] = 395,
  [SMALL_STATE(38)] = 402,
  [SMALL_STATE(39)] = 407,
  [SMALL_STATE(40)] = 414,
  [SMALL_STATE(41)] = 421,
  [SMALL_STATE(42)] = 428,
  [SMALL_STATE(43)] = 433,
  [SMALL_STATE(44)] = 440,
  [SMALL_STATE(45)] = 447,
  [SMALL_STATE(46)] = 452,
  [SMALL_STATE(47)] = 456,
  [SMALL_STATE(48)] = 460,
  [SMALL_STATE(49)] = 464,
  [SMALL_STATE(50)] = 468,
  [SMALL_STATE(51)] = 472,
  [SMALL_STATE(52)] = 476,
  [SMALL_STATE(53)] = 480,
  [SMALL_STATE(54)] = 484,
  [SMALL_STATE(55)] = 488,
  [SMALL_STATE(56)] = 492,
  [SMALL_STATE(57)] = 496,
  [SMALL_STATE(58)] = 500,
  [SMALL_STATE(59)] = 504,
  [SMALL_STATE(60)] = 508,
  [SMALL_STATE(61)] = 512,
  [SMALL_STATE(62)] = 516,
  [SMALL_STATE(63)] = 520,
  [SMALL_STATE(64)] = 524,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(64),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(58),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_tag, 3, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_tag, 3, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_css_block_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_block_repeat1, 2), SHIFT_REPEAT(46),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_tag_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_tag_repeat1, 2), SHIFT_REPEAT(48),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_tag, 3, .production_id = 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_tag, 3, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_declaration, 4, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_block, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_content, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_content, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_tag, 4, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_tag, 4, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_block, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_property, 4, .production_id = 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, .production_id = 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_identifier, 1, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_identifier, 1, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_property_value, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_identifier, 1, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_templ(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
