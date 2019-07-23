#include <catch2/catch.hpp>
#include <strutils/strutils.hpp>


TEST_CASE("String split")
{
    SECTION("Common split case")
    {
        std::string str = "1234;4321;0000";
        std::vector<std::string> segments = strutils::split(str, ';');
        REQUIRE(segments.size() == 3);
        REQUIRE(segments[0] == "1234");
        REQUIRE(segments[1] == "4321");
        REQUIRE(segments[2] == "0000");
    }

    SECTION("Only delimiter(s) case")
    {
        std::string str1 = ";";
        std::string str2 = ";;;;;";
        std::vector<std::string> segments1 = strutils::split(str1, ';');
        std::vector<std::string> segments2 = strutils::split(str2, ';');

        REQUIRE(segments1.size() == 0);
        REQUIRE(segments2.size() == 0);
    }

    SECTION("Delimiter at start/end")
    {
        std::string str1 = ";1234;4321;0000";
        std::string str2 = "1234;4321;0000;";
        std::string str3 = ";1234;4321;0000;";

        std::vector<std::string> segments1 = strutils::split(str1, ';');
        std::vector<std::string> segments2 = strutils::split(str2, ';');
        std::vector<std::string> segments3 = strutils::split(str3, ';');

        REQUIRE(segments1.size() == 3);
        REQUIRE(segments2.size() == 3);
        REQUIRE(segments3.size() == 3);

        REQUIRE(segments1[0] == "1234");
        REQUIRE(segments1[1] == "4321");
        REQUIRE(segments1[2] == "0000");

        REQUIRE(segments2[0] == "1234");
        REQUIRE(segments2[1] == "4321");
        REQUIRE(segments2[2] == "0000");

        REQUIRE(segments3[0] == "1234");
        REQUIRE(segments3[1] == "4321");
        REQUIRE(segments3[2] == "0000");
    }
}