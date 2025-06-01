package tree_sitter_templ_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_templ "github.com/vrischmann/tree-sitter-templ/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_templ.Language())
	if language == nil {
		t.Errorf("Error loading Templ grammar")
	}
}
