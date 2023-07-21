#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 2
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

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
  aux_sym_element_attribute_token1 = 11,
  anon_sym_EQ_DQUOTE = 12,
  aux_sym_element_attribute_token2 = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_FOO = 15,
  anon_sym_LT_SLASH = 16,
  sym_identifier = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_package_definition = 20,
  sym_component_definition = 21,
  sym_parameter_list = 22,
  sym_parameter_declaration = 23,
  sym_block = 24,
  sym_element = 25,
  sym_element_open_tag = 26,
  sym_element_attribute = 27,
  sym_element_content = 28,
  sym_element_close_tag = 29,
  sym__package_identifier = 30,
  sym__component_identifier = 31,
  sym__parameter_identifier = 32,
  sym_element_identifier = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_parameter_list_repeat1 = 35,
  aux_sym_block_repeat1 = 36,
  aux_sym_element_repeat1 = 37,
  aux_sym_element_open_tag_repeat1 = 38,
  aux_sym_element_attribute_repeat1 = 39,
  alias_sym_component_identifier = 40,
  alias_sym_parameter_identifier = 41,
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
  [aux_sym_element_attribute_token1] = "element_attribute_token1",
  [anon_sym_EQ_DQUOTE] = "=\"",
  [aux_sym_element_attribute_token2] = "element_attribute_token2",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_FOO] = "FOO",
  [anon_sym_LT_SLASH] = "</",
  [sym_identifier] = "package_identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_package_definition] = "package_definition",
  [sym_component_definition] = "component_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_block] = "block",
  [sym_element] = "element",
  [sym_element_open_tag] = "element_open_tag",
  [sym_element_attribute] = "element_attribute",
  [sym_element_content] = "element_content",
  [sym_element_close_tag] = "element_close_tag",
  [sym__package_identifier] = "_package_identifier",
  [sym__component_identifier] = "_component_identifier",
  [sym__parameter_identifier] = "_parameter_identifier",
  [sym_element_identifier] = "element_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_element_open_tag_repeat1] = "element_open_tag_repeat1",
  [aux_sym_element_attribute_repeat1] = "element_attribute_repeat1",
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
  [aux_sym_element_attribute_token1] = aux_sym_element_attribute_token1,
  [anon_sym_EQ_DQUOTE] = anon_sym_EQ_DQUOTE,
  [aux_sym_element_attribute_token2] = aux_sym_element_attribute_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_FOO] = anon_sym_FOO,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_package_definition] = sym_package_definition,
  [sym_component_definition] = sym_component_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_block] = sym_block,
  [sym_element] = sym_element,
  [sym_element_open_tag] = sym_element_open_tag,
  [sym_element_attribute] = sym_element_attribute,
  [sym_element_content] = sym_element_content,
  [sym_element_close_tag] = sym_element_close_tag,
  [sym__package_identifier] = sym__package_identifier,
  [sym__component_identifier] = sym__component_identifier,
  [sym__parameter_identifier] = sym__parameter_identifier,
  [sym_element_identifier] = sym_element_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_element_open_tag_repeat1] = aux_sym_element_open_tag_repeat1,
  [aux_sym_element_attribute_repeat1] = aux_sym_element_attribute_repeat1,
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
  [aux_sym_element_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_element_attribute_token2] = {
    .visible = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_package_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_component_definition] = {
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
  [sym_element_open_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_element_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_element_content] = {
    .visible = true,
    .named = true,
  },
  [sym_element_close_tag] = {
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
  [sym_element_identifier] = {
    .visible = true,
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
  [aux_sym_element_open_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_attribute_repeat1] = {
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
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
    {field_type, 1},
  [3] =
    {field_name, 0},
  [4] =
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'k') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_templ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_parameter_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_element_attribute_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_element_attribute_token2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_element_attribute_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_FOO);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
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
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 0},
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
    [sym_source_file] = STATE(44),
    [sym__definition] = STATE(5),
    [sym_package_definition] = STATE(5),
    [sym_component_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
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
      sym_element_open_tag,
    STATE(14), 1,
      sym_element_close_tag,
    STATE(29), 1,
      sym_element,
    STATE(4), 2,
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
      sym_element_open_tag,
    STATE(16), 1,
      sym_element_close_tag,
    STATE(29), 1,
      sym_element,
    STATE(2), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [46] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(18), 1,
      anon_sym_FOO,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_element_open_tag,
    STATE(29), 1,
      sym_element,
    STATE(4), 2,
      sym_element_content,
      aux_sym_element_repeat1,
  [66] = 4,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_templ,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym__definition,
      sym_package_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
  [82] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_package,
    ACTIONS(30), 1,
      anon_sym_templ,
    STATE(6), 4,
      sym__definition,
      sym_package_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
  [98] = 4,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_element_open_tag,
    STATE(7), 2,
      sym_element,
      aux_sym_block_repeat1,
  [112] = 5,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_parameter_list_repeat1,
    STATE(26), 1,
      sym_parameter_declaration,
    STATE(46), 1,
      sym__parameter_identifier,
  [128] = 4,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_element_open_tag,
    STATE(7), 2,
      sym_element,
      aux_sym_block_repeat1,
  [142] = 5,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_parameter_list_repeat1,
    STATE(26), 1,
      sym_parameter_declaration,
    STATE(46), 1,
      sym__parameter_identifier,
  [158] = 5,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_parameter_list_repeat1,
    STATE(26), 1,
      sym_parameter_declaration,
    STATE(46), 1,
      sym__parameter_identifier,
  [174] = 4,
    ACTIONS(44), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_element_open_tag,
    STATE(9), 2,
      sym_element,
      aux_sym_block_repeat1,
  [188] = 3,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(57), 1,
      aux_sym_element_attribute_token1,
    STATE(13), 2,
      sym_element_attribute,
      aux_sym_element_open_tag_repeat1,
  [199] = 2,
    ACTIONS(62), 1,
      anon_sym_LT,
    ACTIONS(60), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [208] = 3,
    ACTIONS(64), 1,
      anon_sym_GT,
    ACTIONS(66), 1,
      aux_sym_element_attribute_token1,
    STATE(13), 2,
      sym_element_attribute,
      aux_sym_element_open_tag_repeat1,
  [219] = 2,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(68), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [228] = 3,
    ACTIONS(66), 1,
      aux_sym_element_attribute_token1,
    ACTIONS(72), 1,
      anon_sym_GT,
    STATE(15), 2,
      sym_element_attribute,
      aux_sym_element_open_tag_repeat1,
  [239] = 2,
    ACTIONS(76), 1,
      anon_sym_LT,
    ACTIONS(74), 3,
      anon_sym_RBRACE,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [248] = 1,
    ACTIONS(78), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [254] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [260] = 2,
    ACTIONS(82), 1,
      anon_sym_LT,
    ACTIONS(84), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [268] = 1,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [274] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [280] = 3,
    ACTIONS(90), 1,
      aux_sym_element_attribute_token2,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_element_attribute_repeat1,
  [290] = 3,
    ACTIONS(94), 1,
      aux_sym_element_attribute_token2,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_element_attribute_repeat1,
  [300] = 2,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [308] = 1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [314] = 3,
    ACTIONS(105), 1,
      aux_sym_element_attribute_token2,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_element_attribute_repeat1,
  [324] = 2,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(111), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [332] = 2,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 2,
      anon_sym_FOO,
      anon_sym_LT_SLASH,
  [340] = 1,
    ACTIONS(117), 2,
      anon_sym_GT,
      aux_sym_element_attribute_token1,
  [345] = 2,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameter_list,
  [352] = 2,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [359] = 1,
    ACTIONS(123), 2,
      anon_sym_GT,
      aux_sym_element_attribute_token1,
  [364] = 1,
    ACTIONS(46), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [369] = 2,
    ACTIONS(125), 1,
      aux_sym_element_attribute_token1,
    STATE(42), 1,
      sym_element_identifier,
  [376] = 1,
    ACTIONS(127), 2,
      anon_sym_GT,
      aux_sym_element_attribute_token1,
  [381] = 2,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(32), 1,
      sym__component_identifier,
  [388] = 2,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(27), 1,
      sym__package_identifier,
  [395] = 2,
    ACTIONS(125), 1,
      aux_sym_element_attribute_token1,
    STATE(17), 1,
      sym_element_identifier,
  [402] = 1,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
  [406] = 1,
    ACTIONS(135), 1,
      anon_sym_GT,
  [410] = 1,
    ACTIONS(137), 1,
      anon_sym_EQ_DQUOTE,
  [414] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [418] = 1,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
  [422] = 1,
    ACTIONS(143), 1,
      sym_parameter_type,
  [426] = 1,
    ACTIONS(145), 1,
      sym_parameter_type,
  [430] = 1,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 188,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 268,
  [SMALL_STATE(23)] = 274,
  [SMALL_STATE(24)] = 280,
  [SMALL_STATE(25)] = 290,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 308,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 332,
  [SMALL_STATE(31)] = 340,
  [SMALL_STATE(32)] = 345,
  [SMALL_STATE(33)] = 352,
  [SMALL_STATE(34)] = 359,
  [SMALL_STATE(35)] = 364,
  [SMALL_STATE(36)] = 369,
  [SMALL_STATE(37)] = 376,
  [SMALL_STATE(38)] = 381,
  [SMALL_STATE(39)] = 388,
  [SMALL_STATE(40)] = 395,
  [SMALL_STATE(41)] = 402,
  [SMALL_STATE(42)] = 406,
  [SMALL_STATE(43)] = 410,
  [SMALL_STATE(44)] = 414,
  [SMALL_STATE(45)] = 418,
  [SMALL_STATE(46)] = 422,
  [SMALL_STATE(47)] = 426,
  [SMALL_STATE(48)] = 430,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(40),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(47),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_open_tag_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_open_tag_repeat1, 2), SHIFT_REPEAT(43),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_close_tag, 3, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_close_tag, 3, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_open_tag, 4, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_open_tag, 4, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_attribute_repeat1, 2), SHIFT_REPEAT(25),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_attribute_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_content, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_content, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_open_tag, 3, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_open_tag, 3, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_attribute, 3, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_attribute, 4, .production_id = 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_identifier, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_identifier, 1, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_identifier, 1, .production_id = 1),
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
