#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
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
  anon_sym_EQ = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_LT_SLASH = 14,
  anon_sym_css = 15,
  anon_sym_COLON = 16,
  anon_sym_SEMI = 17,
  sym_css_property_name = 18,
  sym_element_identifier = 19,
  sym_attribute_name = 20,
  sym_attribute_value = 21,
  sym_text = 22,
  sym_expression = 23,
  sym_css_property_value = 24,
  sym_source_file = 25,
  sym__definition = 26,
  sym_package_declaration = 27,
  sym_component_declaration = 28,
  sym_parameter_list = 29,
  sym_parameter_declaration = 30,
  sym__block = 31,
  sym_element = 32,
  sym_open_tag = 33,
  sym_attribute = 34,
  sym__attribute_value = 35,
  sym__element_content = 36,
  sym_close_tag = 37,
  sym_css_declaration = 38,
  sym__css_block = 39,
  sym_css_property = 40,
  sym__package_identifier = 41,
  sym__component_identifier = 42,
  sym__parameter_identifier = 43,
  sym__css_identifier = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_parameter_list_repeat1 = 46,
  aux_sym__block_repeat1 = 47,
  aux_sym_element_repeat1 = 48,
  aux_sym_open_tag_repeat1 = 49,
  aux_sym__css_block_repeat1 = 50,
  alias_sym_component_identifier = 51,
  alias_sym_css_identifier = 52,
  alias_sym_parameter_identifier = 53,
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
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_css] = "css",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_css_property_name] = "css_property_name",
  [sym_element_identifier] = "element_identifier",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_text] = "text",
  [sym_expression] = "expression",
  [sym_css_property_value] = "css_property_value",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_package_declaration] = "package_declaration",
  [sym_component_declaration] = "component_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym__block] = "_block",
  [sym_element] = "element",
  [sym_open_tag] = "open_tag",
  [sym_attribute] = "attribute",
  [sym__attribute_value] = "_attribute_value",
  [sym__element_content] = "_element_content",
  [sym_close_tag] = "close_tag",
  [sym_css_declaration] = "css_declaration",
  [sym__css_block] = "_css_block",
  [sym_css_property] = "css_property",
  [sym__package_identifier] = "_package_identifier",
  [sym__component_identifier] = "_component_identifier",
  [sym__parameter_identifier] = "_parameter_identifier",
  [sym__css_identifier] = "_css_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_open_tag_repeat1] = "open_tag_repeat1",
  [aux_sym__css_block_repeat1] = "_css_block_repeat1",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_css] = anon_sym_css,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_css_property_name] = sym_css_property_name,
  [sym_element_identifier] = sym_element_identifier,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym_expression] = sym_expression,
  [sym_css_property_value] = sym_css_property_value,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_package_declaration] = sym_package_declaration,
  [sym_component_declaration] = sym_component_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym__block] = sym__block,
  [sym_element] = sym_element,
  [sym_open_tag] = sym_open_tag,
  [sym_attribute] = sym_attribute,
  [sym__attribute_value] = sym__attribute_value,
  [sym__element_content] = sym__element_content,
  [sym_close_tag] = sym_close_tag,
  [sym_css_declaration] = sym_css_declaration,
  [sym__css_block] = sym__css_block,
  [sym_css_property] = sym_css_property,
  [sym__package_identifier] = sym__package_identifier,
  [sym__component_identifier] = sym__component_identifier,
  [sym__parameter_identifier] = sym__parameter_identifier,
  [sym__css_identifier] = sym__css_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_open_tag_repeat1] = aux_sym_open_tag_repeat1,
  [aux_sym__css_block_repeat1] = aux_sym__css_block_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [sym_text] = {
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
  [sym__block] = {
    .visible = false,
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
  [sym__attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__element_content] = {
    .visible = false,
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
  [sym__css_block] = {
    .visible = false,
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
  [aux_sym__block_repeat1] = {
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
  [aux_sym__css_block_repeat1] = {
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
  [4] = 3,
  [5] = 2,
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
  [37] = 35,
  [38] = 38,
  [39] = 33,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 36,
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
  [65] = 65,
  [66] = 66,
  [67] = 54,
  [68] = 59,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_parameter_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_css_property_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_element_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(27);
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
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_css);
      END_STATE();
    case 8:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_templ);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
};

enum {
  ts_external_token_expression = 0,
  ts_external_token_css_property_value = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_expression] = sym_expression,
  [ts_external_token_css_property_value] = sym_css_property_value,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_expression] = true,
    [ts_external_token_css_property_value] = true,
  },
  [2] = {
    [ts_external_token_expression] = true,
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [sym_css_property_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym_package_declaration] = STATE(6),
    [anon_sym_package] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_SLASH,
    ACTIONS(9), 1,
      sym_text,
    STATE(3), 1,
      sym_open_tag,
    STATE(35), 1,
      sym_close_tag,
    STATE(9), 3,
      sym_element,
      sym__element_content,
      aux_sym_element_repeat1,
  [21] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_SLASH,
    ACTIONS(11), 1,
      sym_text,
    STATE(3), 1,
      sym_open_tag,
    STATE(33), 1,
      sym_close_tag,
    STATE(2), 3,
      sym_element,
      sym__element_content,
      aux_sym_element_repeat1,
  [42] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    ACTIONS(15), 1,
      sym_text,
    STATE(3), 1,
      sym_open_tag,
    STATE(39), 1,
      sym_close_tag,
    STATE(5), 3,
      sym_element,
      sym__element_content,
      aux_sym_element_repeat1,
  [63] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_open_tag,
    STATE(37), 1,
      sym_close_tag,
    STATE(9), 3,
      sym_element,
      sym__element_content,
      aux_sym_element_repeat1,
  [84] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_templ,
    ACTIONS(21), 1,
      anon_sym_css,
    STATE(7), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [100] = 4,
    ACTIONS(19), 1,
      anon_sym_templ,
    ACTIONS(21), 1,
      anon_sym_css,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(8), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [116] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_templ,
    ACTIONS(30), 1,
      anon_sym_css,
    STATE(8), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [132] = 5,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
      anon_sym_LT_SLASH,
    ACTIONS(38), 1,
      sym_text,
    STATE(3), 1,
      sym_open_tag,
    STATE(9), 3,
      sym_element,
      sym__element_content,
      aux_sym_element_repeat1,
  [150] = 4,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_LT,
    STATE(4), 1,
      sym_open_tag,
    STATE(12), 2,
      sym_element,
      aux_sym__block_repeat1,
  [164] = 5,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_parameter_list_repeat1,
    STATE(28), 1,
      sym_parameter_declaration,
    STATE(61), 1,
      sym__parameter_identifier,
  [180] = 4,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_open_tag,
    STATE(14), 2,
      sym_element,
      aux_sym__block_repeat1,
  [194] = 5,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_parameter_list_repeat1,
    STATE(28), 1,
      sym_parameter_declaration,
    STATE(61), 1,
      sym__parameter_identifier,
  [210] = 4,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_LT,
    STATE(4), 1,
      sym_open_tag,
    STATE(14), 2,
      sym_element,
      aux_sym__block_repeat1,
  [224] = 5,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_parameter_list_repeat1,
    STATE(28), 1,
      sym_parameter_declaration,
    STATE(61), 1,
      sym__parameter_identifier,
  [240] = 3,
    ACTIONS(63), 1,
      anon_sym_GT,
    ACTIONS(65), 1,
      sym_attribute_name,
    STATE(17), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [251] = 3,
    ACTIONS(65), 1,
      sym_attribute_name,
    ACTIONS(67), 1,
      anon_sym_GT,
    STATE(21), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [262] = 3,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym_css_property_name,
    STATE(20), 2,
      sym_css_property,
      aux_sym__css_block_repeat1,
  [273] = 3,
    ACTIONS(71), 1,
      sym_css_property_name,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_css_property,
      aux_sym__css_block_repeat1,
  [284] = 3,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym_css_property_name,
    STATE(20), 2,
      sym_css_property,
      aux_sym__css_block_repeat1,
  [295] = 3,
    ACTIONS(80), 1,
      anon_sym_GT,
    ACTIONS(82), 1,
      sym_attribute_name,
    STATE(21), 2,
      sym_attribute,
      aux_sym_open_tag_repeat1,
  [306] = 2,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [314] = 1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [320] = 1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [326] = 1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [332] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [338] = 1,
    ACTIONS(97), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [344] = 2,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(99), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [352] = 3,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_expression,
    STATE(38), 1,
      sym__attribute_value,
  [362] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [368] = 1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [374] = 2,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [382] = 2,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(117), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [390] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [396] = 2,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(123), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [404] = 2,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(127), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [412] = 1,
    ACTIONS(123), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [417] = 1,
    ACTIONS(129), 2,
      anon_sym_GT,
      sym_attribute_name,
  [422] = 1,
    ACTIONS(117), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [427] = 2,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(44), 1,
      sym__component_identifier,
  [434] = 2,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(24), 1,
      sym__package_identifier,
  [441] = 2,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(49), 1,
      sym__css_identifier,
  [448] = 1,
    ACTIONS(137), 2,
      sym_expression,
      sym_css_property_value,
  [453] = 2,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_parameter_list,
  [460] = 1,
    ACTIONS(54), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [465] = 1,
    ACTIONS(141), 2,
      anon_sym_GT,
      sym_attribute_name,
  [470] = 1,
    ACTIONS(143), 2,
      anon_sym_RBRACE,
      sym_css_property_name,
  [475] = 1,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [480] = 2,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_parameter_list,
  [487] = 2,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym__block,
  [494] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym__css_block,
  [501] = 1,
    ACTIONS(149), 1,
      anon_sym_SEMI,
  [505] = 1,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
  [509] = 1,
    ACTIONS(153), 1,
      anon_sym_GT,
  [513] = 1,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
  [517] = 1,
    ACTIONS(157), 1,
      sym_parameter_type,
  [521] = 1,
    ACTIONS(159), 1,
      anon_sym_EQ,
  [525] = 1,
    ACTIONS(161), 1,
      sym_attribute_value,
  [529] = 1,
    ACTIONS(163), 1,
      sym_element_identifier,
  [533] = 1,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
  [537] = 1,
    ACTIONS(167), 1,
      sym_parameter_type,
  [541] = 1,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
  [545] = 1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
  [549] = 1,
    ACTIONS(173), 1,
      sym_element_identifier,
  [553] = 1,
    ACTIONS(175), 1,
      anon_sym_COLON,
  [557] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [561] = 1,
    ACTIONS(179), 1,
      anon_sym_GT,
  [565] = 1,
    ACTIONS(181), 1,
      sym_element_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 240,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 262,
  [SMALL_STATE(19)] = 273,
  [SMALL_STATE(20)] = 284,
  [SMALL_STATE(21)] = 295,
  [SMALL_STATE(22)] = 306,
  [SMALL_STATE(23)] = 314,
  [SMALL_STATE(24)] = 320,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 332,
  [SMALL_STATE(27)] = 338,
  [SMALL_STATE(28)] = 344,
  [SMALL_STATE(29)] = 352,
  [SMALL_STATE(30)] = 362,
  [SMALL_STATE(31)] = 368,
  [SMALL_STATE(32)] = 374,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 390,
  [SMALL_STATE(35)] = 396,
  [SMALL_STATE(36)] = 404,
  [SMALL_STATE(37)] = 412,
  [SMALL_STATE(38)] = 417,
  [SMALL_STATE(39)] = 422,
  [SMALL_STATE(40)] = 427,
  [SMALL_STATE(41)] = 434,
  [SMALL_STATE(42)] = 441,
  [SMALL_STATE(43)] = 448,
  [SMALL_STATE(44)] = 453,
  [SMALL_STATE(45)] = 460,
  [SMALL_STATE(46)] = 465,
  [SMALL_STATE(47)] = 470,
  [SMALL_STATE(48)] = 475,
  [SMALL_STATE(49)] = 480,
  [SMALL_STATE(50)] = 487,
  [SMALL_STATE(51)] = 494,
  [SMALL_STATE(52)] = 501,
  [SMALL_STATE(53)] = 505,
  [SMALL_STATE(54)] = 509,
  [SMALL_STATE(55)] = 513,
  [SMALL_STATE(56)] = 517,
  [SMALL_STATE(57)] = 521,
  [SMALL_STATE(58)] = 525,
  [SMALL_STATE(59)] = 529,
  [SMALL_STATE(60)] = 533,
  [SMALL_STATE(61)] = 537,
  [SMALL_STATE(62)] = 541,
  [SMALL_STATE(63)] = 545,
  [SMALL_STATE(64)] = 549,
  [SMALL_STATE(65)] = 553,
  [SMALL_STATE(66)] = 557,
  [SMALL_STATE(67)] = 561,
  [SMALL_STATE(68)] = 565,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(64),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(56),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(64),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__css_block_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__css_block_repeat1, 2), SHIFT_REPEAT(65),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_tag_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_tag_repeat1, 2), SHIFT_REPEAT(57),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_tag, 3, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_tag, 3, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_declaration, 4, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_block, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_tag, 4, .production_id = 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_tag, 4, .production_id = 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_block, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_tag, 3, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_tag, 3, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_property, 4, .production_id = 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_identifier, 1, .production_id = 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_identifier, 1, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_identifier, 1, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
