#include <catch2/catch.hpp>
#include <strutils/strutils.hpp>

TEST_CASE("to_upper, to_lower")
{
    SECTION("to_upper")
    {
        std::string str = "abCdEfGHijk lm o)) -=";
        std::string stru = strutils::to_upper(str);

        REQUIRE(stru == "ABCDEFGHIJK LM O)) -=");
    }

    SECTION("to_lower")
    {
        std::string str = "abCdEfGHijk lm o)) -=";
        std::string stru = strutils::to_lower(str);

        REQUIRE(stru == "abcdefghijk lm o)) -=");
    }
}