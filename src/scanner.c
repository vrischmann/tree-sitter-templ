// Based on
// https://github.com/tree-sitter/tree-sitter-html/blob/master/src/scanner.c

#include <stdio.h>
#include <wctype.h>

#include "tree_sitter/parser.h"

enum TokenType {
  EXPRESSION,
  CSS_PROPERTY_VALUE,
};

typedef struct {
} Scanner;

static unsigned serialize(Scanner *scanner, char *buffer) { return 0; }

static void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
}

static bool scan_css_property_value(Scanner *scanner, TSLexer *lexer) {
  // If we encounter the start of a templ expression, bail
  if (lexer->lookahead == '{') {
    return false;
  }

  lexer->result_symbol = CSS_PROPERTY_VALUE;

  // Consume everything until we find the end of the value;
  while (!lexer->eof(lexer)) {
    if (lexer->lookahead == ';') {
      return true;
    }
    lexer->advance(lexer, false);
  }

  return false;
}

static bool scan_expression(Scanner *scanner, TSLexer *lexer) {
  lexer->result_symbol = EXPRESSION;

  // An expression always starts with a {
  if (lexer->lookahead != '{') {
    return false;
  }

  int brace_count = 0;

  while (!lexer->eof(lexer)) {
    switch (lexer->lookahead) {
    case '{':
      brace_count++;
      break;
    case '}':
      brace_count--;
      break;
    }

    lexer->advance(lexer, false);

    if (brace_count == 0) {
      return true;
    }
  }

  return false;
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  while (!lexer->eof(lexer) && iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (valid_symbols[CSS_PROPERTY_VALUE] &&
      scan_css_property_value(scanner, lexer)) {
    return true;
  }

  if (valid_symbols[EXPRESSION] && scan_expression(scanner, lexer)) {
    return true;
  }

  return false;
}

void *tree_sitter_templ_external_scanner_create() {
  Scanner *scanner = (Scanner *)calloc(1, sizeof(Scanner));
  return scanner;
}

bool tree_sitter_templ_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  return scan(scanner, lexer, valid_symbols);
}

unsigned tree_sitter_templ_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  return serialize(scanner, buffer);
}

void tree_sitter_templ_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  deserialize(scanner, buffer, length);
}

void tree_sitter_templ_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner);
}
