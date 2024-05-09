# tree-sitter-templ

A [tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for [Templ](https://templ.guide).

# Using this with Neovim

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

Once `nvim-treesitter` is installed you need to install the parser with the command `:TSInstall templ`.

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

If you are runnning stable then you also need to add register the `templ` filetype:READ
```lua
vim.filetype.add({
    extension = {
        templ = "templ",
    },
})
```

**Note**: _This is not required for nightly builds > NVIM
v0.10.0-dev-3070+gcf9f002f3 (3rd May 2024)

Finally you can open a `templ` file and run `:InspectTree` to see the parse tree.

# Contributing

The official tree-sitter [documentation](https://tree-sitter.github.io/tree-sitter/creating-parsers#getting-started) for creating a parser contains everything you need to start contributing to this parser.

To make it slightly easier, we use a [Justfile](https://github.com/casey/just) to simplify some things:
* `just test [filter...]` to run tests
* `just gen` to only generate the parser
* `just build` to generate then build the parser

If you want to modify the parser, make sure to add a test or modify an existnig one in the `corpus` directory.
