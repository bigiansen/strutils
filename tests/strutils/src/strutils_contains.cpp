#include <catch2/catch.hpp>
#include <strutils/strutils.hpp>

TEST_CASE("contains(string,char)")
{
    SECTION("Common use case")
    {
        std::string str = "do i have a \'%\' sign?";
        bool found_a = strutils::contains(str, '%');
        bool found_b = strutils::contains(str, '?');
        bool found_c = strutils::contains(str, ' ');
        bool found_d = strutils::contains(str, '$');
        REQUIRE(found_a);
        REQUIRE(found_b);
        REQUIRE(found_c);
        REQUIRE(!found_d);
    }

    SECTION("Empty string")
    {
        std::string str = "";
        bool found = strutils::contains(str, '1');
        REQUIRE(!found);
    }
}