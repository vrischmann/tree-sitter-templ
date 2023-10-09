-- CREDIT FOR THIS FILE: https://github.com/IndianBoy42/tree-sitter-just/blob/main/lua/tree-sitter-just/init.lua
local M = {}

local is_windows
if jit ~= nil then
	is_windows = jit.os == "Windows"
else
	is_windows = package.config:sub(1, 1) == "\\"
end

local get_separator = function()
	if is_windows then
		return "\\"
	end
	return "/"
end
local join_paths = function(...)
	local separator = get_separator()
	return table.concat({ ... }, separator)
end

function M.setup(arg)
	local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
	parser_config.templ = {
		install_info = {
			url = "https://github.com/vrischmann/tree-sitter-templ.git",
			files = { "src/parser.c", "src/scanner.c" },
			branch = "master",
		},
		maintainers = { "vrischmann" },
	}
	local ok, ft = pcall(require, "filetype")
	if ok then
		ft.setup({
			overrides = {
				extensions = {
					templ = "templ",
				},
			},
		})
	end
end

return M
