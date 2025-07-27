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
nvim-treesitter:                                                            ✅

Requirements ~
- ✅ OK Neovim was compiled with tree-sitter runtime ABI version 15 (required >=13).
- ✅ OK tree-sitter 0.25.8 (/home/vincent/.local/share/nvm/v22.17.1/bin/tree-sitter)
- ✅ OK node 22.17.1 (/home/vincent/.local/share/nvm/v22.17.1/bin/node)
- ✅ OK tar 1.35.0 (/usr/bin/tar)
- ✅ OK curl 8.11.1 (/usr/bin/curl)
  curl 8.11.1 (x86_64-redhat-linux-gnu) libcurl/8.11.1 OpenSSL/3.2.4 zlib/1.3.1.zlib-ng brotli/1.1.0 libidn2/2.3.8 libpsl/0.21.5 libssh/0.11.2/openssl/zlib nghttp2/1.64.0 OpenLDAP/2.6.9
  Release-Date: 2024-12-11
  Protocols: dict file ftp ftps gopher gophers http https imap imaps ipfs ipns ldap ldaps mqtt pop3 pop3s rtsp scp sftp smb smbs smtp smtps telnet tftp ws wss
  Features: alt-svc AsynchDNS brotli GSS-API HSTS HTTP2 HTTPS-proxy IDN IPv6 Kerberos Largefile libz NTLM PSL SPNEGO SSL threadsafe TLS-SRP UnixSockets

OS Info ~
- sysname: Linux
- release: 6.15.7-200.fc42.x86_64
- version: #1 SMP PREEMPT_DYNAMIC Thu Jul 17 17:57:16 UTC 2025
- machine: x86_64

Install directory for parsers and queries ~
- /home/vincent/.local/share/nvim/site/
- ✅ OK is writable.
- ✅ OK is in runtimepath.

Installed languages     H L F I J ~
- templ                 ✓ . ✓ ✓ ✓

  Legend: H[ighlight], L[ocals], F[olds], I[ndents], In[J]ections ~
```

Finally you can open a `templ` file and run `:InspectTree` to see the parse tree.

# Contributing

The official tree-sitter [documentation](https://tree-sitter.github.io/tree-sitter/creating-parsers#getting-started) for creating a parser contains everything you need to start contributing to this parser.

To make it easier, we use a [Justfile](https://github.com/casey/just) to simplify some tasks:
* `just test [filter...]` to run tests
* `just gen` to generate the parser
* `just build` to generate and build the parser

If you want to modify the parser, make sure to add a test or modify an existing one in the `corpus` directory.
