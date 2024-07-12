package tree_sitter_d2_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-d2"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_d2.Language())
	if language == nil {
		t.Errorf("Error loading D2 grammar")
	}
}
