#include <catch2/catch.hpp>
#include <strutils/strutils.hpp>

TEST_CASE("replace(string,char,char)")
{
    SECTION("Common use cases")
    {
        std::string str = "HI! My name is 002=02.02'C";        
        std::string repl1 = strutils::replace(str, '!', ',');
        std::string repl2 = strutils::replace(repl1, '=', '|');
        std::string repl3 = strutils::replace(repl2, '$', '&');
        REQUIRE(repl1 == "HI, My name is 002=02.02'C");
        REQUIRE(repl2 == "HI, My name is 002|02.02'C");
        REQUIRE(repl3 == "HI, My name is 002|02.02'C");
    }

    SECTION("Empty string")
    {
        std::string str;
        std::string repl = strutils::replace(str, '0', '1');
        REQUIRE(repl.size() == 0);
    }
}

TEST_CASE("replace(string,string,string)")
{
    SECTION("Common use cases")
    {
        std::string str = "HI! My name is 002=02.02'C";        
        std::string repl1 = strutils::replace(str, "HI!", "Greetings,");
        std::string repl2 = strutils::replace(repl1, "02", "77");
        REQUIRE(repl1 == "Greetings, My name is 002=02.02'C");
        REQUIRE(repl2 == "Greetings, My name is 077=77.77'C");
    }
}