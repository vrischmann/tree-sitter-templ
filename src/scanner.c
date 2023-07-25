// Based on
// https://github.com/tree-sitter/tree-sitter-html/blob/master/src/scanner.c

#include <stdio.h>
#include <string.h>
#include <wctype.h>

#include "tree_sitter/parser.h"

// Helper struct to have multicharacter lookahead

#define LOOKAHEAD_BUFFER_SIZE 16

typedef struct {
  int buf[LOOKAHEAD_BUFFER_SIZE];
  size_t write_pos;
} LookaheadBuffer;

void lookahead_buffer_init(LookaheadBuffer *buffer) {
  memset(&buffer->buf[0], 0, LOOKAHEAD_BUFFER_SIZE);
  buffer->write_pos = 0;
}

void lookahead_buffer_dump(LookaheadBuffer *buffer) {
  printf("\"");
  for (size_t i = 0; i < buffer->write_pos; i++) {
    printf("%c", buffer->buf[i]);
  }
  printf("\"\n");
}

bool lookahead_buffer_find_char(LookaheadBuffer *buffer,
                                bool (*callback)(int ch)) {
  for (size_t i = 0; i < buffer->write_pos; i++) {
    if (callback(buffer->buf[i])) {
      return true;
    }
  }

  return false;
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
bool lookahead_buffer_find_keyword(LookaheadBuffer *buffer, TSLexer *lexer,
                                   const char *str) {
  size_t length = strlen(str);

  // First look in the buffer
  for (size_t i = 0; i < buffer->write_pos && i < length; i++) {
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

    buffer->buf[buffer->write_pos] = lexer->lookahead;
    buffer->write_pos++;

    lexer->advance(lexer, false);
  }

  return true;
}

//

enum TokenType {
  CSS_PROPERTY_VALUE,
  ELEMENT_TEXT,
  STYLE_ELEMENT_TEXT,
  SCRIPT_ELEMENT_TEXT,
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

static bool is_element_text_terminator(int ch) {
  switch (ch) {
  case '<':
  case '{':
  case '}':
  case '\n':
    return true;
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

  if (lexer->eof(lexer)) {
    return false;
  }

  // 1. Detect if the node starts with a keyword that makes it a statement
  // instead of a text element
  //
  // Since we're looking for a multicharacter token we need backtracking but
  // TSLexer doesn't provide it so we have to do it ourselves.

  // Try for "if"
  if (lookahead_buffer_find_keyword(&buffer, lexer, "if ")) {
    goto done;
  }
  // Try for "else"
  if (lookahead_buffer_find_keyword(&buffer, lexer, "else ")) {
    goto done;
  }
  // Try for "for"
  if (lookahead_buffer_find_keyword(&buffer, lexer, "for ")) {
    goto done;
  }
  // Try for "switch"
  if (lookahead_buffer_find_keyword(&buffer, lexer, "switch ")) {
    goto done;
  }
  // Try for a "@" which signals a component import statement
  if (lookahead_buffer_find_keyword(&buffer, lexer, "@")) {
    goto done;
  }

  // 2. We looked for a statement keyword but found none.

  // Process the remaining data in the buffer to look for terminator characters.
  if (lookahead_buffer_find_char(&buffer, is_element_text_terminator)) {
    goto done;
  }

  // Everything up to this
  count += buffer.write_pos;

  // 3. We looked for a terminator in the buffer but found none. Now we can
  // start processing the lexer stream itself.
  //
  // There's no need for backtracking here since we only need a single character
  // lookahead.

  while (!lexer->eof(lexer)) {
    if (is_element_text_terminator(lexer->lookahead)) {
      goto done;
    }

    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    count++;
  }

done:

  if (count > 0) {
    lexer->mark_end(lexer);
    has_marked = true;
  }

  /* printf("done: %b, chars: %zu\n", has_marked, count); */

  return has_marked;
}

static bool scan_style_element_text(Scanner *scanner, TSLexer *lexer) {
  lexer->result_symbol = STYLE_ELEMENT_TEXT;

  // Start by marking the end so the following calls to advance don't
  // increase the token size
  lexer->mark_end(lexer);

  bool has_marked = false;

  const char *end_keyword = "</style>";
  size_t length = strlen(end_keyword);

  // Look for the closing tag

outer:
  while (!lexer->eof(lexer)) {
    for (size_t i = 0; i < length; i++) {
      if (lexer->lookahead != end_keyword[i]) {
        // This branch means the keyword was not found at this point, therefore
        // we have to extend the current token.

        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        has_marked = true;

        goto outer;
      }

      // Otherwise continue and try to find the next character in the keyword

      lexer->advance(lexer, false);
    }

    // The keyword was found
    break;
  }

done:

  return has_marked;
}

static bool scan_script_element_text(Scanner *scanner, TSLexer *lexer) {
  lexer->result_symbol = SCRIPT_ELEMENT_TEXT;

  // Start by marking the end so the following calls to advance don't
  // increase the token size
  lexer->mark_end(lexer);

  if (lexer->eof(lexer)) {
    return false;
  }

  bool has_marked = false;

  int brace_count = 1;
  int count = 0;

  while (!lexer->eof(lexer)) {
    switch (lexer->lookahead) {
    case '{':
      brace_count++;
      break;
    case '}':
      brace_count--;
      if (brace_count == 0) {
        goto done;
      }
      break;
    }

    lexer->advance(lexer, false);
    lexer->mark_end(lexer);

    has_marked = true;
    count++;
  }

done:

  /* printf("done: %d, count: %d\n", has_marked, count); */

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

  if (valid_symbols[ELEMENT_TEXT] && scan_element_text(scanner, lexer)) {
    return true;
  }

  if (valid_symbols[STYLE_ELEMENT_TEXT] &&
      scan_style_element_text(scanner, lexer)) {
    return true;
  }

  if (valid_symbols[SCRIPT_ELEMENT_TEXT] &&
      scan_script_element_text(scanner, lexer)) {
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
