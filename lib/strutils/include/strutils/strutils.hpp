#pragma once

#include <string>
#include <string_view>
#include <vector>
#include <array>

namespace strutils
{
    extern std::vector<std::string> split(const std::string& str, char delim);
    extern std::vector<std::string> split(std::string_view str, char delim);
    extern std::vector<std::string_view> split_views(const std::string& str, char delim);
}