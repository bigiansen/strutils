#include <catch2/catch.hpp>
#include <strutils/strutils.hpp>

TEST_CASE("trim")
{
    SECTION("trim start")
    {
        std::string no_trim = "asdfa  ";
        std::string trim = "   asdf  ";

        REQUIRE(strutils::trim_start(no_trim) == no_trim);
        REQUIRE(strutils::trim_start(trim) == "asdf  ");
    }

    SECTION("trim end")
    {
        std::string trim = " asdfa  ";
        std::string no_trim = "    asdf";

        REQUIRE(strutils::trim_end(trim) == " asdfa" );
        REQUIRE(strutils::trim_end(no_trim) == no_trim);
    }

    SECTION("trim both")
    {
        std::string str = " aaa ";
        REQUIRE(strutils::trim(str) == "aaa");
    }
}