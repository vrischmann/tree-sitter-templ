gen:
	tree-sitter generate

test: gen
	tree-sitter test

build: gen
	node-gyp build
