# tree-sitter-templ

A [tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for [Templ](https://templ.guide).

# Using this with Neovim

To use this parser for syntax highlighting in Neovim, you need [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter).

## Requirements

- Neovim 0.11.0+
- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)

## Installation

First, install nvim-treesitter. If using [lazy.nvim](https://github.com/folke/lazy.nvim):

```lua
require('lazy').setup({
  {
    'nvim-treesitter/nvim-treesitter',
    lazy = false,
    branch = 'main',
    build = ':TSUpdate'
  }
})
```

Then install the Templ parser:

```lua
require('nvim-treesitter').install({ 'templ' })
```

Finally, enable syntax highlighting for Templ files by adding this autocmd:

```lua
vim.api.nvim_create_autocmd('FileType', {
  pattern = 'templ',
  callback = function()
    vim.treesitter.start()
  end,
})
```

## Manual Installation

If you want to use a specific branch, version, or local development path, you can manually configure the parser:

```lua
vim.api.nvim_create_autocmd('User', {
  pattern = 'TSUpdate',
  callback = function()
    require('nvim-treesitter.parsers').templ = {
      install_info = {
        url = 'https://github.com/vrischmann/tree-sitter-templ',
        branch = 'main', -- or specific branch/tag
        -- path = "~/dev/perso/projects/tree-sitter-templ", -- for local development
        queries = 'queries/templ',
      },
    }
  end
})
```

Then run `:TSInstall templ` to install the parser with your custom configuration.

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

# Contributing

The official tree-sitter [documentation](https://tree-sitter.github.io/tree-sitter/creating-parsers#getting-started) for creating a parser contains everything you need to start contributing to this parser.

To make it easier, we use a [Justfile](https://github.com/casey/just) to simplify some tasks:
* `just test [filter...]` to run tests
* `just gen` to generate the parser
* `just build` to generate and build the parser

If you want to modify the parser, make sure to add a test or modify an existing one in the `corpus` directory.
