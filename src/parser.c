#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 3
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum {
  sym_identifier = 1,
  anon_sym_package = 2,
  anon_sym_templ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  sym_parameter_type = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  anon_sym_EQ_DQUOTE = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_FOO = 14,
  anon_sym_LT_SLASH = 15,
  anon_sym_css = 16,
  anon_sym_COLON = 17,
  anon_sym_SEMI = 18,
  sym_css_property_name = 19,
  sym_element_identifier = 20,
  sym_attribute_name = 21,
  sym_attribute_value = 22,
  sym_expression = 23,
  sym_css_property_value = 24,
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
  sym_css_declaration = 37,
  sym_css_block = 38,
  sym_css_property = 39,
  sym__package_identifier = 40,
  sym__component_identifier = 41,
  sym__parameter_identifier = 42,
  sym__css_identifier = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_parameter_list_repeat1 = 45,
  aux_sym_block_repeat1 = 46,
  aux_sym_element_repeat1 = 47,
  aux_sym_open_tag_repeat1 = 48,
  aux_sym_css_block_repeat1 = 49,
  alias_sym_component_identifier = 50,
  alias_sym_css_identifier = 51,
  alias_sym_parameter_identifier = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "package_identifier",
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
  [anon_sym_css] = "css",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_css_property_name] = "css_property_name",
  [sym_element_identifier] = "element_identifier",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_expression] = "expression",
  [sym_css_property_value] = "css_property_value",
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
  [sym_css_declaration] = "css_declaration",
  [sym_css_block] = "css_block",
  [sym_css_property] = "css_property",
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
  [sym_identifier] = sym_identifier,
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
  [anon_sym_css] = anon_sym_css,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_css_property_name] = sym_css_property_name,
  [sym_element_identifier] = sym_element_identifier,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_expression] = sym_expression,
  [sym_css_property_value] = sym_css_property_value,
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
  [sym_css_declaration] = sym_css_declaration,
  [sym_css_block] = sym_css_block,
  [sym_css_property] = sym_css_property,
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
  [sym_identifier] = {
    .visible = true,
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_css_property_value] = {
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
  field_name = 1,
  field_type = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 2},
  [6] = {.index = 3, .length = 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_parameter_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_css_property_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_element_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_FOO);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_css);
      END_STATE();
    case 11:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_templ);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
};

enum {
  ts_external_token_expression = 0,
  ts_external_token_css_property_value = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_expression] = sym_expression,
  [ts_external_token_css_property_value] = sym_css_property_value,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_expression] = true,
    [ts_external_token_css_property_value] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [sym_css_property_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_package_declaration] = STATE(5),
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
    STATE(18), 1,
      sym_close_tag,
    STATE(32), 1,
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
    STATE(32), 1,
      sym_element,
    STATE(4), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [46] = 6,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(14), 1,
      anon_sym_FOO,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_open_tag,
    STATE(32), 1,
      sym_element,
    STATE(4), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [66] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_templ,
    ACTIONS(23), 1,
      anon_sym_css,
    STATE(6), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [82] = 4,
    ACTIONS(21), 1,
      anon_sym_templ,
    ACTIONS(23), 1,
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
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_parameter_list_repeat1,
    STATE(33), 1,
      sym_parameter_declaration,
    STATE(56), 1,
      sym__parameter_identifier,
  [130] = 4,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_open_tag,
    STATE(9), 2,
      sym_element,
      aux_sym_block_repeat1,
  [144] = 5,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_parameter_list_repeat1,
    STATE(33), 1,
      sym_parameter_declaration,
    STATE(56), 1,
      sym__parameter_identifier,
  [160] = 4,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_open_tag,
    STATE(9), 2,
      sym_element,
      aux_sym_block_repeat1,
  [174] = 5,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_parameter_list_repeat1,
    STATE(33), 1,
      sym_parameter_declaration,
    STATE(56), 1,
      sym__parameter_identifier,
  [190] = 4,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_open_tag,
    STATE(11), 2,
      sym_element,
      aux_sym_block_repeat1,
  [204] = 2,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(57), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [213] = 3,
    ACTIONS(61), 1,
      anon_sym_GT,
    ACTIONS(63), 1,
      sym_attribute_name,
    STATE(21), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [224] = 3,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      sym_css_property_name,
    STATE(16), 2,
      sym_css_property,
      aux_sym_css_block_repeat1,
  [235] = 2,
    ACTIONS(72), 1,
      anon_sym_LT,
    ACTIONS(70), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [244] = 2,
    ACTIONS(76), 1,
      anon_sym_LT,
    ACTIONS(74), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [253] = 3,
    ACTIONS(63), 1,
      sym_attribute_name,
    ACTIONS(78), 1,
      anon_sym_GT,
    STATE(15), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [264] = 3,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      sym_css_property_name,
    STATE(16), 2,
      sym_css_property,
      aux_sym_css_block_repeat1,
  [275] = 3,
    ACTIONS(84), 1,
      anon_sym_GT,
    ACTIONS(86), 1,
      sym_attribute_name,
    STATE(21), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [286] = 3,
    ACTIONS(82), 1,
      sym_css_property_name,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_css_property,
      aux_sym_css_block_repeat1,
  [297] = 1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [303] = 1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [309] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [315] = 1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [321] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [327] = 1,
    ACTIONS(101), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [333] = 2,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(105), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [341] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [347] = 2,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(111), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [355] = 2,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [363] = 2,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [371] = 1,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [377] = 2,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_parameter_list,
  [384] = 1,
    ACTIONS(125), 2,
      anon_sym_GT,
      sym_attribute_name,
  [389] = 1,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      sym_css_property_name,
  [394] = 2,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(27), 1,
      sym__package_identifier,
  [401] = 1,
    ACTIONS(38), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [406] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_css_block,
  [413] = 2,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [420] = 2,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(35), 1,
      sym__component_identifier,
  [427] = 2,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameter_list,
  [434] = 1,
    ACTIONS(137), 2,
      sym_expression,
      sym_css_property_value,
  [439] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(43), 1,
      sym__css_identifier,
  [446] = 1,
    ACTIONS(141), 1,
      sym_element_identifier,
  [450] = 1,
    ACTIONS(143), 1,
      anon_sym_COLON,
  [454] = 1,
    ACTIONS(145), 1,
      anon_sym_EQ_DQUOTE,
  [458] = 1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
  [462] = 1,
    ACTIONS(149), 1,
      anon_sym_GT,
  [466] = 1,
    ACTIONS(151), 1,
      sym_parameter_type,
  [470] = 1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
  [474] = 1,
    ACTIONS(155), 1,
      anon_sym_SEMI,
  [478] = 1,
    ACTIONS(157), 1,
      sym_attribute_value,
  [482] = 1,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
  [486] = 1,
    ACTIONS(161), 1,
      sym_parameter_type,
  [490] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [494] = 1,
    ACTIONS(165), 1,
      sym_element_identifier,
  [498] = 1,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
  [502] = 1,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 190,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 235,
  [SMALL_STATE(18)] = 244,
  [SMALL_STATE(19)] = 253,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 286,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 309,
  [SMALL_STATE(26)] = 315,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 327,
  [SMALL_STATE(29)] = 333,
  [SMALL_STATE(30)] = 341,
  [SMALL_STATE(31)] = 347,
  [SMALL_STATE(32)] = 355,
  [SMALL_STATE(33)] = 363,
  [SMALL_STATE(34)] = 371,
  [SMALL_STATE(35)] = 377,
  [SMALL_STATE(36)] = 384,
  [SMALL_STATE(37)] = 389,
  [SMALL_STATE(38)] = 394,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 406,
  [SMALL_STATE(41)] = 413,
  [SMALL_STATE(42)] = 420,
  [SMALL_STATE(43)] = 427,
  [SMALL_STATE(44)] = 434,
  [SMALL_STATE(45)] = 439,
  [SMALL_STATE(46)] = 446,
  [SMALL_STATE(47)] = 450,
  [SMALL_STATE(48)] = 454,
  [SMALL_STATE(49)] = 458,
  [SMALL_STATE(50)] = 462,
  [SMALL_STATE(51)] = 466,
  [SMALL_STATE(52)] = 470,
  [SMALL_STATE(53)] = 474,
  [SMALL_STATE(54)] = 478,
  [SMALL_STATE(55)] = 482,
  [SMALL_STATE(56)] = 486,
  [SMALL_STATE(57)] = 490,
  [SMALL_STATE(58)] = 494,
  [SMALL_STATE(59)] = 498,
  [SMALL_STATE(60)] = 502,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(46),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(51),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_css_block_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_block_repeat1, 2), SHIFT_REPEAT(47),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_tag, 3, .production_id = 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_tag, 3, .production_id = 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_tag_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_tag_repeat1, 2), SHIFT_REPEAT(48),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_block, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, .production_id = 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_declaration, 4, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_tag, 4, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_tag, 4, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_tag, 3, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_tag, 3, .production_id = 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_content, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_content, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_block, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, .production_id = 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_property, 4, .production_id = 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_identifier, 1, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_identifier, 1, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_identifier, 1, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_templ_external_scanner_create(void);
void tree_sitter_templ_external_scanner_destroy(void *);
bool tree_sitter_templ_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_templ_external_scanner_serialize(void *, char *);
void tree_sitter_templ_external_scanner_deserialize(void *, const char *, unsigned);

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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_templ_external_scanner_create,
      tree_sitter_templ_external_scanner_destroy,
      tree_sitter_templ_external_scanner_scan,
      tree_sitter_templ_external_scanner_serialize,
      tree_sitter_templ_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
