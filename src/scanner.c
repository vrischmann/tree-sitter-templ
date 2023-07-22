// Based on
// https://github.com/tree-sitter/tree-sitter-html/blob/master/src/scanner.c

#include <stdio.h>
#include <string.h>
#include <wctype.h>

#include "tree_sitter/parser.h"

// Helper struct to have multicharacter lookahead

#define LOOKAHEAD_BUFFER_SIZE 8

typedef struct {
  int buf[LOOKAHEAD_BUFFER_SIZE];
  size_t pos;
} LookaheadBuffer;

void lookahead_buffer_init(LookaheadBuffer *buffer) {
  memset(&buffer->buf[0], 0, LOOKAHEAD_BUFFER_SIZE);
  buffer->pos = 0;
}

void lookahead_buffer_dump(LookaheadBuffer *buffer) {
  printf("\"");
  for (size_t i = 0; i < buffer->pos; i++) {
    printf("%c", buffer->buf[i]);
  }
  printf("\"\n");
}

int next_char(LookaheadBuffer *buffer, TSLexer *lexer) {
  if (buffer->pos > 0) {
    int ch = buffer->buf[buffer->pos];
    buffer->pos--;
    return ch;
  }

  int ch = lexer->lookahead;
  lexer->advance(lexer, false);

  return ch;
}

// Tries to find the keyword `str` in the character stream of `lexer`.
//
// Since TSLexer doesn't allow backtracking and we need it to lookup different
// keywords, we have to implement backtracking ourselves.
//
// It's relatively simple:
// * if we have any buffered data, try it first
// * otherwise pull from the stream while simultaneously adding to the buffer
//
// The next call will have the buffer populated.
bool find_keyword(TSLexer *lexer, LookaheadBuffer *buffer, const char *str) {
  size_t length = strlen(str);

  // First look in the buffer
  for (size_t i = 0; i < buffer->pos && i < length; i++) {
    if (buffer->buf[i] != str[i]) {
      return false;
    }

    length--;
  }

  // Otherwise fetch data from the lexer
  bool found = true;
  for (size_t i = 0; i < length; i++) {
    if (lexer->eof(lexer) || lexer->lookahead != str[i]) {
      return false;
    }

    buffer->buf[buffer->pos] = lexer->lookahead;
    buffer->pos++;

    lexer->advance(lexer, false);
  }

  return true;
}

//

enum TokenType {
  EXPRESSION,
  CSS_PROPERTY_VALUE,
  ELEMENT_TEXT,
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

static bool scan_element_text(Scanner *scanner, TSLexer *lexer) {
  lexer->result_symbol = ELEMENT_TEXT;

  // Start by marking the end so the following calls to advance don't
  // increase the token size
  lexer->mark_end(lexer);

  LookaheadBuffer buffer;
  lookahead_buffer_init(&buffer);

  bool has_marked = false;
  size_t count = 0;

  // These keywords can only be present at the start of an element node

  // Try for "if"
  if (find_keyword(lexer, &buffer, "if")) {
    goto done;
  }
  lookahead_buffer_dump(&buffer);
  // Try for "else"
  if (find_keyword(lexer, &buffer, "else")) {
    goto done;
  }
  lookahead_buffer_dump(&buffer);
  // Try for "for"
  if (find_keyword(lexer, &buffer, "for")) {
    goto done;
  }
  lookahead_buffer_dump(&buffer);
  // Try for "switch"
  if (find_keyword(lexer, &buffer, "switch")) {
    goto done;
  }
  lookahead_buffer_dump(&buffer);

  //

  while (true) {
    if (lexer->eof(lexer)) {
      break;
    }

    lookahead_buffer_dump(&buffer);

    int next_char = lexer->lookahead;
    /* int next_char = next_char(&buffer,,lexer); */

    switch (next_char) {
    case '<':
    case '{':
    case '}':
    case '\n':
    case '@':
      goto done;
    }

    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    has_marked = true;
    count++;
  }

done:

  printf("done: %b, chars: %zu\n", has_marked, count);

  return has_marked;
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

  if (valid_symbols[ELEMENT_TEXT] && scan_element_text(scanner, lexer)) {
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
