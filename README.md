# tree-sitter-templ

A [tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for [Templ](https://templ.guide).

# Using this with Neovim

To use this with Neovim you need to do two things:
* install the treesitter parser
* install this repo as a neovim plugin

If you're curious why we need a plugin, read the last paragraph.

## Installing the treesitter parser

To use this parser for syntax highlighting in Neovim, you need [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter).
It is highly recommended you go through nvim-treesitter's quickstart, but in any case a minimal configuration to enable syntax highlighting looks like this:

```lua
require'nvim-treesitter.configs'.setup {
  highlight = {
    enable = true,
    additional_vim_regex_highlighting = false,
  },
}

```

This parser is not (yet) part of the available parsers so you need to add it manually:

```lua
local treesitter_parser_config = require "nvim-treesitter.parsers".get_parser_configs()
treesitter_parser_config.templ = {
  install_info = {
    url = "https://github.com/vrischmann/tree-sitter-templ.git",
    files = {"src/parser.c", "src/scanner.c"},
    branch = "master",
  },
}

vim.treesitter.language.register('templ', 'templ')
```

Next you can install it with `:TSInstall templ`.

You can check its status with `:checkhealth`, you should see something like this:
```
nvim-treesitter: require("nvim-treesitter.health").check()

Installation ~
- OK `tree-sitter` found 0.20.8 (parser generator, only needed for :TSInstallFromGrammar)
- OK `node` found v18.16.1 (only needed for :TSInstallFromGrammar)
- OK `git` executable found.
- OK `cc` executable found. Selected from { vim.NIL, "cc", "gcc", "clang", "cl", "zig" }
  Version: cc (GCC) 13.1.1 20230614 (Red Hat 13.1.1-4)
- OK Neovim was compiled with tree-sitter runtime ABI version 14 (required >=13). Parsers must be compatible with runtime ABI.

Parser/Features         H L F I J
  - templ               ✓ . . . ✓

  Legend: H[ighlight], L[ocals], F[olds], I[ndents], In[j]ections
         +) multiple parsers found, only one will be used
         x) errors found in the query, try to run :TSUpdate {lang} ~
```

Finally you can open a `templ` file and run `:InspectTree` to see the parse tree.

## Installing the plugin

Use your plugin manager of choice, for example with packer:
```lua
return require("packer").startup(function(use)
    use("vrischmann/tree-sitter-templ")
end)
```

## Why is a plugin required

Consuming a tree-sitter parse tree works by looking at _queries_ which are defined in different `*.scm` files:
* `highlights.scm` for syntax highlighting
* `injections.scm` for language injection (used to invoke other parsers on a subset of the parse tree)
* others which we won't go into

`nvim-treesitter` maintains queries for the parser it includes but since our parser is not (yet) included we have to make them available to neovim ourselves.
This is where the plugin comes in: it provides these queries files for neovim.
