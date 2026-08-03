// Based on
// https://github.com/tree-sitter/tree-sitter-html/blob/master/src/scanner.c

#include <string.h>
#include <wctype.h>

#include "tree_sitter/parser.h"

// Helper struct to have multicharacter lookahead

#define LOOKAHEAD_BUFFER_SIZE 16

typedef struct {
  int buf[LOOKAHEAD_BUFFER_SIZE];
  size_t write_pos;
} LookaheadBuffer;

static void lookahead_buffer_init(LookaheadBuffer *buffer) {
  memset(&buffer->buf[0], 0, LOOKAHEAD_BUFFER_SIZE);
  buffer->write_pos = 0;
}

// static void lookahead_buffer_dump(LookaheadBuffer *buffer) {
//   printf("\"");
//   for (size_t i = 0; i < buffer->write_pos; i++) {
//     printf("%c", buffer->buf[i]);
//   }
//   printf("\"\n");
// }

static bool lookahead_buffer_find_char(LookaheadBuffer *buffer,
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
// Since TSLexer doesn't allow backtracking and we need it to lookup
// different keywords, we have to implement backtracking ourselves.
//
// It's relatively simple:
// * if we have any buffered data, try it first
// * otherwise pull from the stream while simultaneously adding to the
// buffer
//
// The next call will have the buffer populated.
static bool lookahead_buffer_find_keyword(LookaheadBuffer *buffer,
                                          TSLexer *lexer, const char *str) {
  size_t length = strlen(str);

  // First look in the buffer
  for (size_t i = 0; i < buffer->write_pos && i < length; i++) {
    if (buffer->buf[i] != str[i]) {
      return false;
    }

    length--;
  }

  const char *str_remaining = &str[buffer->write_pos];

  // Otherwise fetch data from the lexer
  for (size_t i = 0; i < length; i++) {
    if (lexer->eof(lexer) || lexer->lookahead != str_remaining[i]) {
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
  SWITCH_ELEMENT_TEXT_CHUNK,
  ELEMENT_TEXT_CHUNK,
  SCRIPT_ELEMENT_TEXT_CHUNK,
  SCRIPT_GO_EXPRESSION_START,
  SCRIPT_TAG_END,
};

typedef enum {
  JS_QUOTE_NONE,
  JS_QUOTE_SINGLE,
  JS_QUOTE_DOUBLE,
  JS_QUOTE_BACKTICK,
} JavaScriptQuote;

typedef struct {
  JavaScriptQuote script_quote;
} Scanner;

static unsigned serialize(Scanner *scanner, char *buffer) {
  buffer[0] = (char)scanner->script_quote;
  return 1;
}

static void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
  scanner->script_quote = JS_QUOTE_NONE;

  if (length == 1 && buffer[0] >= JS_QUOTE_NONE &&
      buffer[0] <= JS_QUOTE_BACKTICK) {
    scanner->script_quote = (JavaScriptQuote)buffer[0];
  }
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

const char *statement_keywords[] = {
    // Comments
    "//",
    "/*",
    // Other statements
    "if ",
    "else ",
    "for ",
    "switch ",
    // Switch keywords
    "case ",
    "default:",
    "fallthrough",
};
const size_t statement_keywords_count =
    sizeof(statement_keywords) / sizeof(const char *) - 3;
const size_t switch_statement_keywords_count =
    sizeof(statement_keywords) / sizeof(const char *);

static bool scan_element_text(Scanner *scanner, TSLexer *lexer,
                              bool in_switch) {
  (void)scanner;

  int symbol = in_switch ? SWITCH_ELEMENT_TEXT_CHUNK : ELEMENT_TEXT_CHUNK;
  lexer->result_symbol = symbol;

  size_t keywords_count =
      (in_switch) ? switch_statement_keywords_count : statement_keywords_count;

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

  // Stateless: decline if the chunk would start with import-continuation
  // punctuation, so the grammar can parse it as part of a component_import
  // (argument list, selector, index) or as a low-precedence punctuation token.
  {
    int la = lexer->lookahead;
    if (la == '.' || la == '(' || la == ')' || la == '[' || la == ']') {
      return false;
    }
  }

  // Detect if the node starts with a keyword that makes it a statement instead.
  for (size_t i = 0; i < keywords_count; i++) {
    const char *keyword = statement_keywords[i];

    // Since we're looking for a multicharacter token we need backtracking but
    // TSLexer doesn't provide it so we have to do it ourselves.
    if (lookahead_buffer_find_keyword(&buffer, lexer, keyword)) {
      goto done;
    }
  }

  // Try for a "@" which signals a component import expression. Decline (count
  // stays 0) so the grammar parses a component_import instead.
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

static bool scan_script_end_tag(TSLexer *lexer) {
  const char *end_tag = "</script>";
  lexer->mark_end(lexer);

  for (size_t i = 0; end_tag[i] != '\0'; i++) {
    if (lexer->eof(lexer) || lexer->lookahead != end_tag[i]) {
      // Keep the matching prefix as comment text when this is another closing
      // tag, such as </div>.
      lexer->mark_end(lexer);
      return false;
    }
    lexer->advance(lexer, false);
  }

  return true;
}

typedef enum {
  JS_REGEX_DONE,
  JS_REGEX_INTERPOLATION,
  JS_REGEX_SCRIPT_END,
} JavaScriptRegexResult;

static JavaScriptRegexResult scan_javascript_regex(TSLexer *lexer) {
  bool in_character_class = false;

  while (!lexer->eof(lexer)) {
    int ch = lexer->lookahead;

    if (ch == '\n' || ch == '\r') {
      return JS_REGEX_DONE;
    }

    if (ch == '<') {
      if (scan_script_end_tag(lexer)) {
        return JS_REGEX_SCRIPT_END;
      }
      continue;
    }

    if (ch == '{') {
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      if (!lexer->eof(lexer) && lexer->lookahead == '{') {
        return JS_REGEX_INTERPOLATION;
      }
      lexer->mark_end(lexer);
      continue;
    }

    if (ch == '\\') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      if (!lexer->eof(lexer)) {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
      }
      continue;
    }

    if (ch == '[') {
      in_character_class = true;
    } else if (ch == ']') {
      in_character_class = false;
    } else if (ch == '/' && !in_character_class) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return JS_REGEX_DONE;
    }

    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  }

  return JS_REGEX_DONE;
}

static bool scan_javascript_comment(TSLexer *lexer, bool multiline) {
  while (!lexer->eof(lexer)) {
    int ch = lexer->lookahead;

    if (ch == '<') {
      if (scan_script_end_tag(lexer)) {
        return true;
      }
      continue;
    }

    lexer->advance(lexer, false);
    lexer->mark_end(lexer);

    if (!multiline && (ch == '\n' || ch == '\r')) {
      return false;
    }
    if (multiline && ch == '*' && !lexer->eof(lexer) &&
        lexer->lookahead == '/') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return false;
    }
  }

  return false;
}

static bool scan_script_element_text(Scanner *scanner, TSLexer *lexer,
                                     const bool *valid_symbols) {
  lexer->result_symbol = SCRIPT_ELEMENT_TEXT_CHUNK;
  lexer->mark_end(lexer);

  JavaScriptQuote quote = scanner->script_quote;
  bool has_content = false;

  while (!lexer->eof(lexer)) {
    int ch = lexer->lookahead;

    if (ch == '<') {
      if (scan_script_end_tag(lexer)) {
        if (has_content) {
          scanner->script_quote = quote;
          return true;
        }
        if (valid_symbols[SCRIPT_TAG_END]) {
          lexer->mark_end(lexer);
          lexer->result_symbol = SCRIPT_TAG_END;
          scanner->script_quote = JS_QUOTE_NONE;
          return true;
        }
        return false;
      }

      has_content = true;
      continue;
    }

    // JavaScript escapes consume the next character, so an escaped brace does
    // not open an interpolation and an escaped quote does not end a string.
    if (ch == '\\') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      has_content = true;

      if (!lexer->eof(lexer)) {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
      }
      continue;
    }

    if (quote == JS_QUOTE_NONE && ch == '/') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      has_content = true;

      if (lexer->eof(lexer)) {
        continue;
      }

      if (lexer->lookahead == '/') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        if (scan_javascript_comment(lexer, false)) {
          scanner->script_quote = quote;
          return true;
        }
        continue;
      }

      if (lexer->lookahead == '*') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        if (scan_javascript_comment(lexer, true)) {
          scanner->script_quote = quote;
          return true;
        }
        continue;
      }

      JavaScriptRegexResult result = scan_javascript_regex(lexer);
      if (result == JS_REGEX_INTERPOLATION || result == JS_REGEX_SCRIPT_END) {
        scanner->script_quote = quote;
        return true;
      }
      continue;
    }

    // Keep the first brace of an interpolation out of the text token.
    // Interpolation is allowed inside JavaScript strings.
    if (ch == '{') {
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      if (!lexer->eof(lexer) && lexer->lookahead == '{') {
        if (has_content) {
          scanner->script_quote = quote;
          return true;
        }
        if (valid_symbols[SCRIPT_GO_EXPRESSION_START]) {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          lexer->result_symbol = SCRIPT_GO_EXPRESSION_START;
          scanner->script_quote = quote;
          return true;
        }
        return false;
      }

      lexer->mark_end(lexer);
      has_content = true;
      continue;
    }

    if (quote == JS_QUOTE_NONE) {
      switch (ch) {
      case '\'':
        quote = JS_QUOTE_SINGLE;
        break;
      case '"':
        quote = JS_QUOTE_DOUBLE;
        break;
      case '`':
        quote = JS_QUOTE_BACKTICK;
        break;
      }
    } else if ((quote == JS_QUOTE_SINGLE && ch == '\'') ||
               (quote == JS_QUOTE_DOUBLE && ch == '"') ||
               (quote == JS_QUOTE_BACKTICK && ch == '`')) {
      quote = JS_QUOTE_NONE;
    }

    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    has_content = true;
  }

  if (has_content) {
    scanner->script_quote = quote;
  }
  return has_content;
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if ((valid_symbols[SCRIPT_ELEMENT_TEXT_CHUNK] ||
       valid_symbols[SCRIPT_GO_EXPRESSION_START] ||
       valid_symbols[SCRIPT_TAG_END]) &&
      scan_script_element_text(scanner, lexer, valid_symbols)) {
    return true;
  }

  while (!lexer->eof(lexer) && iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (valid_symbols[SWITCH_ELEMENT_TEXT_CHUNK] &&
      scan_element_text(scanner, lexer, true)) {
    return true;
  }

  if (valid_symbols[ELEMENT_TEXT_CHUNK] &&
      scan_element_text(scanner, lexer, false)) {
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
