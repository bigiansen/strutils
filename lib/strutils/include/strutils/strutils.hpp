#pragma once

#include <string>
#include <string_view>
#include <vector>
#include <array>

namespace strutils
{
    extern std::vector<std::string> split(const std::string& str, char delim);
    extern std::vector<std::string> split(std::string_view str, char delim);

    extern std::vector<std::string_view> split_view(const std::string& str, char delim);
    extern std::vector<std::string_view> split_view(std::string_view str, char delim);

    extern bool contains(const std::string& str, char ocurrence);
    extern bool contains(const std::string& str, const std::string& ocurrence);
    extern bool contains(const std::string& str, std::string_view ocurrence);

    extern bool contains(std::string_view str, char ocurrence);
    extern bool contains(std::string_view str, const std::string& ocurrence);
    extern bool contains(std::string_view str, std::string_view ocurrence);

    [[nodiscard]] extern std::string replace(const std::string& str, char ocurrence, char replacement);
    [[nodiscard]] extern std::string replace(std::string_view str, char ocurrence, char replacement);

    [[nodiscard]] extern std::string replace(const std::string& str, char ocurrence, char replacement);
    [[nodiscard]] extern std::string replace(const std::string& str, const std::string& ocurrence, const std::string& replacement);

    extern void replace_in_place(std::string& str, char ocurrence, char replacement);
}