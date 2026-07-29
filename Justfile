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

# Parse the templ examples, the same way the CI does.
# Fetches the examples (templ submodule) and rebuilds the parser first.
examples: gen init-templ
	npx tree-sitter parse -q --stat "templ/**/*.templ"

init-templ:
	git submodule update --init --depth=1

# Advance the templ submodule to the latest upstream main, parse the examples
# to check for regressions, and stage the bump. Review with
# `git diff --cached -- templ` then commit and push.
update-templ: gen
	#!/usr/bin/env bash
	set -euo pipefail
	git submodule update --init --depth=1
	git -C templ fetch --depth=1 origin main
	git -C templ checkout FETCH_HEAD
	echo "templ now at $(git -C templ rev-parse --short HEAD); parsing examples..."
	npx tree-sitter parse -q --stat "templ/**/*.templ"
	git add templ
	echo "bump staged"
