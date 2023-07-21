#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 3
#define TOKEN_COUNT 26
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
  anon_sym_LT_SLASH = 12,
  anon_sym_SLASH_GT = 13,
  anon_sym_EQ = 14,
  anon_sym_DQUOTE = 15,
  anon_sym_css = 16,
  anon_sym_COLON = 17,
  anon_sym_SEMI = 18,
  sym_css_property_name = 19,
  sym_element_identifier = 20,
  sym_attribute_name = 21,
  sym_attribute_value = 22,
  sym_text = 23,
  sym_expression = 24,
  sym_css_property_value = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_package_declaration = 28,
  sym_component_declaration = 29,
  sym_parameter_list = 30,
  sym_parameter_declaration = 31,
  sym__block = 32,
  sym_element = 33,
  sym__tag = 34,
  sym_tag_start = 35,
  sym_tag_end = 36,
  sym_self_closing_tag = 37,
  sym_attribute = 38,
  sym__attribute_value = 39,
  sym__element_content = 40,
  sym_css_declaration = 41,
  sym__css_block = 42,
  sym_css_property = 43,
  sym__package_identifier = 44,
  sym__component_identifier = 45,
  sym__parameter_identifier = 46,
  sym__css_identifier = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_parameter_list_repeat1 = 49,
  aux_sym__block_repeat1 = 50,
  aux_sym__tag_repeat1 = 51,
  aux_sym_tag_start_repeat1 = 52,
  aux_sym__css_block_repeat1 = 53,
  alias_sym_component_identifier = 54,
  alias_sym_css_identifier = 55,
  alias_sym_parameter_identifier = 56,
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
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
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
  [sym__tag] = "_tag",
  [sym_tag_start] = "tag_start",
  [sym_tag_end] = "tag_end",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_attribute] = "attribute",
  [sym__attribute_value] = "_attribute_value",
  [sym__element_content] = "_element_content",
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
  [aux_sym__tag_repeat1] = "_tag_repeat1",
  [aux_sym_tag_start_repeat1] = "tag_start_repeat1",
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
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
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
  [sym__tag] = sym__tag,
  [sym_tag_start] = sym_tag_start,
  [sym_tag_end] = sym_tag_end,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_attribute] = sym_attribute,
  [sym__attribute_value] = sym__attribute_value,
  [sym__element_content] = sym__element_content,
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
  [aux_sym__tag_repeat1] = aux_sym__tag_repeat1,
  [aux_sym_tag_start_repeat1] = aux_sym_tag_start_repeat1,
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
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
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
  [sym__tag] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_end] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
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
  [aux_sym__tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_start_repeat1] = {
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
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 16,
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
  [44] = 34,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 35,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 38,
  [54] = 54,
  [55] = 37,
  [56] = 56,
  [57] = 32,
  [58] = 58,
  [59] = 30,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 73,
  [76] = 69,
  [77] = 65,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '>') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_parameter_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_css_property_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_element_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(29);
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
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
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
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [sym_css_property_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym_package_declaration] = STATE(9),
    [anon_sym_package] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_SLASH,
    ACTIONS(9), 1,
      sym_text,
    STATE(3), 1,
      sym_tag_start,
    STATE(34), 1,
      sym_tag_end,
    STATE(38), 2,
      sym__tag,
      sym_self_closing_tag,
    STATE(6), 3,
      sym_element,
      sym__element_content,
      aux_sym__tag_repeat1,
  [25] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_SLASH,
    ACTIONS(11), 1,
      sym_text,
    STATE(3), 1,
      sym_tag_start,
    STATE(37), 1,
      sym_tag_end,
    STATE(38), 2,
      sym__tag,
      sym_self_closing_tag,
    STATE(2), 3,
      sym_element,
      sym__element_content,
      aux_sym__tag_repeat1,
  [50] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    ACTIONS(15), 1,
      sym_text,
    STATE(3), 1,
      sym_tag_start,
    STATE(55), 1,
      sym_tag_end,
    STATE(38), 2,
      sym__tag,
      sym_self_closing_tag,
    STATE(5), 3,
      sym_element,
      sym__element_content,
      aux_sym__tag_repeat1,
  [75] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_tag_start,
    STATE(44), 1,
      sym_tag_end,
    STATE(38), 2,
      sym__tag,
      sym_self_closing_tag,
    STATE(6), 3,
      sym_element,
      sym__element_content,
      aux_sym__tag_repeat1,
  [100] = 6,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(20), 1,
      anon_sym_LT_SLASH,
    ACTIONS(22), 1,
      sym_text,
    STATE(3), 1,
      sym_tag_start,
    STATE(38), 2,
      sym__tag,
      sym_self_closing_tag,
    STATE(6), 3,
      sym_element,
      sym__element_content,
      aux_sym__tag_repeat1,
  [122] = 5,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_LT,
    STATE(4), 1,
      sym_tag_start,
    STATE(7), 2,
      sym_element,
      aux_sym__block_repeat1,
    STATE(53), 2,
      sym__tag,
      sym_self_closing_tag,
  [140] = 5,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      anon_sym_LT,
    STATE(4), 1,
      sym_tag_start,
    STATE(10), 2,
      sym_element,
      aux_sym__block_repeat1,
    STATE(53), 2,
      sym__tag,
      sym_self_closing_tag,
  [158] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_templ,
    ACTIONS(38), 1,
      anon_sym_css,
    STATE(11), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [174] = 5,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_tag_start,
    STATE(7), 2,
      sym_element,
      aux_sym__block_repeat1,
    STATE(53), 2,
      sym__tag,
      sym_self_closing_tag,
  [192] = 4,
    ACTIONS(36), 1,
      anon_sym_templ,
    ACTIONS(38), 1,
      anon_sym_css,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(12), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [208] = 4,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_templ,
    ACTIONS(49), 1,
      anon_sym_css,
    STATE(12), 4,
      sym__definition,
      sym_component_declaration,
      sym_css_declaration,
      aux_sym_source_file_repeat1,
  [224] = 5,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_parameter_list_repeat1,
    STATE(26), 1,
      sym_parameter_declaration,
    STATE(66), 1,
      sym__parameter_identifier,
  [240] = 5,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_parameter_list_repeat1,
    STATE(26), 1,
      sym_parameter_declaration,
    STATE(66), 1,
      sym__parameter_identifier,
  [256] = 4,
    ACTIONS(61), 1,
      anon_sym_GT,
    ACTIONS(63), 1,
      anon_sym_SLASH_GT,
    ACTIONS(65), 1,
      sym_attribute_name,
    STATE(18), 2,
      sym_attribute,
      aux_sym_tag_start_repeat1,
  [270] = 4,
    ACTIONS(65), 1,
      sym_attribute_name,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_SLASH_GT,
    STATE(17), 2,
      sym_attribute,
      aux_sym_tag_start_repeat1,
  [284] = 4,
    ACTIONS(61), 1,
      anon_sym_GT,
    ACTIONS(65), 1,
      sym_attribute_name,
    ACTIONS(71), 1,
      anon_sym_SLASH_GT,
    STATE(18), 2,
      sym_attribute,
      aux_sym_tag_start_repeat1,
  [298] = 3,
    ACTIONS(75), 1,
      sym_attribute_name,
    ACTIONS(73), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(18), 2,
      sym_attribute,
      aux_sym_tag_start_repeat1,
  [310] = 5,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_parameter_list_repeat1,
    STATE(26), 1,
      sym_parameter_declaration,
    STATE(66), 1,
      sym__parameter_identifier,
  [326] = 4,
    ACTIONS(65), 1,
      sym_attribute_name,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(80), 1,
      anon_sym_SLASH_GT,
    STATE(15), 2,
      sym_attribute,
      aux_sym_tag_start_repeat1,
  [340] = 3,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym_css_property_name,
    STATE(21), 2,
      sym_css_property,
      aux_sym__css_block_repeat1,
  [351] = 3,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      sym_css_property_name,
    STATE(23), 2,
      sym_css_property,
      aux_sym__css_block_repeat1,
  [362] = 3,
    ACTIONS(89), 1,
      sym_css_property_name,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_css_property,
      aux_sym__css_block_repeat1,
  [373] = 2,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(95), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [381] = 2,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [389] = 2,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(101), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [397] = 1,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [403] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [409] = 1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [415] = 2,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [423] = 1,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [429] = 2,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(119), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [437] = 1,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [443] = 2,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(125), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [451] = 2,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [459] = 1,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [465] = 2,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [473] = 2,
    ACTIONS(137), 1,
      anon_sym_LT,
    ACTIONS(139), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [481] = 1,
    ACTIONS(141), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [487] = 1,
    ACTIONS(143), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [493] = 3,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_expression,
    STATE(40), 1,
      sym__attribute_value,
  [503] = 1,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [509] = 1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_templ,
      anon_sym_css,
  [515] = 1,
    ACTIONS(125), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [520] = 1,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      sym_css_property_name,
  [525] = 1,
    ACTIONS(155), 2,
      sym_expression,
      sym_css_property_value,
  [530] = 2,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym__block,
  [537] = 1,
    ACTIONS(129), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [542] = 1,
    ACTIONS(55), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [547] = 2,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_parameter_list,
  [554] = 2,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(56), 1,
      sym__component_identifier,
  [561] = 2,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(50), 1,
      sym__css_identifier,
  [568] = 1,
    ACTIONS(139), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [573] = 2,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(27), 1,
      sym__package_identifier,
  [580] = 1,
    ACTIONS(135), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [585] = 2,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_parameter_list,
  [592] = 1,
    ACTIONS(119), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [597] = 2,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym__css_block,
  [604] = 1,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
      anon_sym_LT,
  [609] = 1,
    ACTIONS(169), 1,
      sym_attribute_value,
  [613] = 1,
    ACTIONS(171), 1,
      anon_sym_EQ,
  [617] = 1,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
  [621] = 1,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
  [625] = 1,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
  [629] = 1,
    ACTIONS(179), 1,
      sym_element_identifier,
  [633] = 1,
    ACTIONS(181), 1,
      sym_parameter_type,
  [637] = 1,
    ACTIONS(183), 1,
      anon_sym_COLON,
  [641] = 1,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [645] = 1,
    ACTIONS(187), 1,
      sym_element_identifier,
  [649] = 1,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
  [653] = 1,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
  [657] = 1,
    ACTIONS(193), 1,
      sym_parameter_type,
  [661] = 1,
    ACTIONS(195), 1,
      anon_sym_GT,
  [665] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [669] = 1,
    ACTIONS(199), 1,
      anon_sym_GT,
  [673] = 1,
    ACTIONS(201), 1,
      sym_element_identifier,
  [677] = 1,
    ACTIONS(203), 1,
      sym_element_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 298,
  [SMALL_STATE(19)] = 310,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 351,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 373,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 397,
  [SMALL_STATE(28)] = 403,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 415,
  [SMALL_STATE(31)] = 423,
  [SMALL_STATE(32)] = 429,
  [SMALL_STATE(33)] = 437,
  [SMALL_STATE(34)] = 443,
  [SMALL_STATE(35)] = 451,
  [SMALL_STATE(36)] = 459,
  [SMALL_STATE(37)] = 465,
  [SMALL_STATE(38)] = 473,
  [SMALL_STATE(39)] = 481,
  [SMALL_STATE(40)] = 487,
  [SMALL_STATE(41)] = 493,
  [SMALL_STATE(42)] = 503,
  [SMALL_STATE(43)] = 509,
  [SMALL_STATE(44)] = 515,
  [SMALL_STATE(45)] = 520,
  [SMALL_STATE(46)] = 525,
  [SMALL_STATE(47)] = 530,
  [SMALL_STATE(48)] = 537,
  [SMALL_STATE(49)] = 542,
  [SMALL_STATE(50)] = 547,
  [SMALL_STATE(51)] = 554,
  [SMALL_STATE(52)] = 561,
  [SMALL_STATE(53)] = 568,
  [SMALL_STATE(54)] = 573,
  [SMALL_STATE(55)] = 580,
  [SMALL_STATE(56)] = 585,
  [SMALL_STATE(57)] = 592,
  [SMALL_STATE(58)] = 597,
  [SMALL_STATE(59)] = 604,
  [SMALL_STATE(60)] = 609,
  [SMALL_STATE(61)] = 613,
  [SMALL_STATE(62)] = 617,
  [SMALL_STATE(63)] = 621,
  [SMALL_STATE(64)] = 625,
  [SMALL_STATE(65)] = 629,
  [SMALL_STATE(66)] = 633,
  [SMALL_STATE(67)] = 637,
  [SMALL_STATE(68)] = 641,
  [SMALL_STATE(69)] = 645,
  [SMALL_STATE(70)] = 649,
  [SMALL_STATE(71)] = 653,
  [SMALL_STATE(72)] = 657,
  [SMALL_STATE(73)] = 661,
  [SMALL_STATE(74)] = 665,
  [SMALL_STATE(75)] = 669,
  [SMALL_STATE(76)] = 673,
  [SMALL_STATE(77)] = 677,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tag_repeat1, 2), SHIFT_REPEAT(76),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tag_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tag_repeat1, 2), SHIFT_REPEAT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(69),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(72),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_start_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(61),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__css_block_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__css_block_repeat1, 2), SHIFT_REPEAT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_start, 4, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_start, 4, .production_id = 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_start, 3, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_start, 3, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_declaration, 4, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_end, 3, .production_id = 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_end, 3, .production_id = 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_block, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_block, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_property, 4, .production_id = 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_identifier, 1, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_identifier, 1, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_identifier, 1, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
