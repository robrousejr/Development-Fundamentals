#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch.hpp"
#include "stringcompression.h"

TEST_CASE( "Testing if string compression works", "[stringCompression]" ) {
    REQUIRE(stringCompression("aabcccccaaa") == "a2b1c5a3");
    REQUIRE(stringCompression("abcdefg") == "a1b1c1d1e1f1g1");
    REQUIRE(stringCompression("hhhhddp") == "h4d2p1");
}