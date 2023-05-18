#pragma once
#include <format>
#include <string>

// format-style print()
constexpr void print(const std::string_view str_fmt, auto&&... args) {
	fputs(std::vformat(str_fmt, std::make_format_args(args...)).c_str(), stdout);
}

// disp_v: display vector
void disp_v(const auto& v) {
	if (!v.size()) return;
	for (auto e : v) print("{} ", e);
	print("\n");
}
