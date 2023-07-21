#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 2
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

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
  sym_identifier = 15,
  sym_element_identifier = 16,
  sym_attribute_name = 17,
  sym_attribute_value = 18,
  sym_source_file = 19,
  sym__definition = 20,
  sym_package_declaration = 21,
  sym_component_declaration = 22,
  sym_parameter_list = 23,
  sym_parameter_declaration = 24,
  sym_block = 25,
  sym_element = 26,
  sym_open_tag = 27,
  sym_attribute = 28,
  sym_element_content = 29,
  sym_close_tag = 30,
  sym__package_identifier = 31,
  sym__component_identifier = 32,
  sym__parameter_identifier = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_parameter_list_repeat1 = 35,
  aux_sym_block_repeat1 = 36,
  aux_sym_element_repeat1 = 37,
  aux_sym_open_tag_repeat1 = 38,
  alias_sym_component_identifier = 39,
  alias_sym_parameter_identifier = 40,
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
  [sym__package_identifier] = "_package_identifier",
  [sym__component_identifier] = "_component_identifier",
  [sym__parameter_identifier] = "_parameter_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_open_tag_repeat1] = "open_tag_repeat1",
  [alias_sym_component_identifier] = "component_identifier",
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
  [sym__package_identifier] = sym__package_identifier,
  [sym__component_identifier] = sym__component_identifier,
  [sym__parameter_identifier] = sym__parameter_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_open_tag_repeat1] = aux_sym_open_tag_repeat1,
  [alias_sym_component_identifier] = alias_sym_component_identifier,
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
  [alias_sym_component_identifier] = {
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
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(32);
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
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'k') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(37);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_templ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_parameter_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_FOO);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_element_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(37);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__definition] = STATE(6),
    [sym_package_declaration] = STATE(6),
    [sym_component_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_templ] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_FOO,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_open_tag,
    STATE(15), 1,
      sym_close_tag,
    STATE(24), 1,
      sym_element,
    STATE(5), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [23] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_FOO,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_open_tag,
    STATE(14), 1,
      sym_close_tag,
    STATE(24), 1,
      sym_element,
    STATE(2), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [46] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_package,
    ACTIONS(20), 1,
      anon_sym_templ,
    STATE(4), 4,
      sym__definition,
      sym_package_declaration,
      sym_component_declaration,
      aux_sym_source_file_repeat1,
  [62] = 6,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      anon_sym_FOO,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_open_tag,
    STATE(24), 1,
      sym_element,
    STATE(5), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [82] = 4,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_templ,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__definition,
      sym_package_declaration,
      sym_component_declaration,
      aux_sym_source_file_repeat1,
  [98] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_open_tag,
    STATE(7), 2,
      sym_element,
      aux_sym_block_repeat1,
  [112] = 4,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_open_tag,
    STATE(7), 2,
      sym_element,
      aux_sym_block_repeat1,
  [126] = 5,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_parameter_list_repeat1,
    STATE(21), 1,
      sym_parameter_declaration,
    STATE(38), 1,
      sym__parameter_identifier,
  [142] = 5,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym_parameter_list_repeat1,
    STATE(21), 1,
      sym_parameter_declaration,
    STATE(38), 1,
      sym__parameter_identifier,
  [158] = 4,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_open_tag,
    STATE(8), 2,
      sym_element,
      aux_sym_block_repeat1,
  [172] = 5,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_parameter_list_repeat1,
    STATE(21), 1,
      sym_parameter_declaration,
    STATE(38), 1,
      sym__parameter_identifier,
  [188] = 3,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      sym_attribute_name,
    STATE(13), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [199] = 2,
    ACTIONS(62), 1,
      anon_sym_LT,
    ACTIONS(60), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [208] = 2,
    ACTIONS(66), 1,
      anon_sym_LT,
    ACTIONS(64), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [217] = 2,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(68), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [226] = 3,
    ACTIONS(72), 1,
      anon_sym_GT,
    ACTIONS(74), 1,
      sym_attribute_name,
    STATE(18), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [237] = 3,
    ACTIONS(74), 1,
      sym_attribute_name,
    ACTIONS(76), 1,
      anon_sym_GT,
    STATE(13), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [248] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [254] = 1,
    ACTIONS(80), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [260] = 2,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(84), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [268] = 2,
    ACTIONS(86), 1,
      anon_sym_LT,
    ACTIONS(88), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [276] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [282] = 2,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(94), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [290] = 1,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [296] = 1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [302] = 2,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(102), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [310] = 1,
    ACTIONS(42), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [315] = 2,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_parameter_list,
  [322] = 2,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(25), 1,
      sym__package_identifier,
  [329] = 2,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(29), 1,
      sym__component_identifier,
  [336] = 2,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [343] = 1,
    ACTIONS(112), 2,
      anon_sym_GT,
      sym_attribute_name,
  [348] = 1,
    ACTIONS(114), 1,
      sym_element_identifier,
  [352] = 1,
    ACTIONS(116), 1,
      anon_sym_EQ_DQUOTE,
  [356] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [360] = 1,
    ACTIONS(120), 1,
      anon_sym_GT,
  [364] = 1,
    ACTIONS(122), 1,
      sym_parameter_type,
  [368] = 1,
    ACTIONS(124), 1,
      sym_parameter_type,
  [372] = 1,
    ACTIONS(126), 1,
      sym_attribute_value,
  [376] = 1,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
  [380] = 1,
    ACTIONS(130), 1,
      sym_element_identifier,
  [384] = 1,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
  [388] = 1,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
  [392] = 1,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 188,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 226,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 268,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 290,
  [SMALL_STATE(26)] = 296,
  [SMALL_STATE(27)] = 302,
  [SMALL_STATE(28)] = 310,
  [SMALL_STATE(29)] = 315,
  [SMALL_STATE(30)] = 322,
  [SMALL_STATE(31)] = 329,
  [SMALL_STATE(32)] = 336,
  [SMALL_STATE(33)] = 343,
  [SMALL_STATE(34)] = 348,
  [SMALL_STATE(35)] = 352,
  [SMALL_STATE(36)] = 356,
  [SMALL_STATE(37)] = 360,
  [SMALL_STATE(38)] = 364,
  [SMALL_STATE(39)] = 368,
  [SMALL_STATE(40)] = 372,
  [SMALL_STATE(41)] = 376,
  [SMALL_STATE(42)] = 380,
  [SMALL_STATE(43)] = 384,
  [SMALL_STATE(44)] = 388,
  [SMALL_STATE(45)] = 392,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(42),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_tag_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_tag_repeat1, 2), SHIFT_REPEAT(35),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_tag, 3, .production_id = 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_tag, 3, .production_id = 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_tag, 4, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_tag, 4, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_content, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_content, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_tag, 3, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_tag, 3, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, .production_id = 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_identifier, 1, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_identifier, 1, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
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
