gen:
	tree-sitter generate

test FILTER="": gen
	#!/usr/bin/env fish
	if test -n "{{FILTER}}"
		tree-sitter test -f "{{FILTER}}"
	else
		tree-sitter test
	end

build: gen
	node-gyp configure
	node-gyp build
