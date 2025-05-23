gen:
	npx tree-sitter generate

test FILTER="": gen
	#!/usr/bin/env fish
	if test -n "{{FILTER}}"
		npx tree-sitter test -i "{{FILTER}}"
	else
		npx tree-sitter test
	end

build: gen
	npx node-gyp configure
	npx node-gyp build

examples:
	tree-sitter parse -q -t "templ/**/*.templ"

init-templ:
	git submodule update --init --depth=1
