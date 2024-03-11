package tree_sitter_templ_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-templ"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_templ.Language())
	if language == nil {
		t.Errorf("Error loading Templ grammar")
	}
}
