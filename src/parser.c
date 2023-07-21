#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_package = 1,
  sym_package_identifier = 2,
  anon_sym_templ = 3,
  sym_component_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_source_file = 9,
  sym__definition = 10,
  sym_package_definition = 11,
  sym_component_definition = 12,
  sym_component_parameter_list = 13,
  sym_component_block = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [sym_package_identifier] = "package_identifier",
  [anon_sym_templ] = "templ",
  [sym_component_identifier] = "component_identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_package_definition] = "package_definition",
  [sym_component_definition] = "component_definition",
  [sym_component_parameter_list] = "component_parameter_list",
  [sym_component_block] = "component_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [sym_package_identifier] = sym_package_identifier,
  [anon_sym_templ] = anon_sym_templ,
  [sym_component_identifier] = sym_component_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_package_definition] = sym_package_definition,
  [sym_component_definition] = sym_component_definition,
  [sym_component_parameter_list] = sym_component_parameter_list,
  [sym_component_block] = sym_component_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_templ] = {
    .visible = true,
    .named = false,
  },
  [sym_component_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_component_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_component_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'k') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == 'p') ADVANCE(1);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_package_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_templ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_component_identifier);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_component_identifier);
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_component_identifier);
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_templ] = ACTIONS(1),
    [sym_component_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__definition] = STATE(2),
    [sym_package_definition] = STATE(2),
    [sym_component_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_templ] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_templ,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__definition,
      sym_package_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(16), 1,
      anon_sym_templ,
    STATE(3), 4,
      sym__definition,
      sym_package_definition,
      sym_component_definition,
      aux_sym_source_file_repeat1,
  [32] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [38] = 1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [44] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_templ,
  [50] = 2,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_component_parameter_list,
  [57] = 2,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_component_block,
  [64] = 1,
    ACTIONS(29), 1,
      sym_package_identifier,
  [68] = 1,
    ACTIONS(31), 1,
      sym_component_identifier,
  [72] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [76] = 1,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
  [80] = 1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
  [84] = 1,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 57,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 72,
  [SMALL_STATE(12)] = 76,
  [SMALL_STATE(13)] = 80,
  [SMALL_STATE(14)] = 84,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_block, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_parameter_list, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
