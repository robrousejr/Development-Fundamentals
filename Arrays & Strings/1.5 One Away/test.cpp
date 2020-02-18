#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch.hpp"
#include "oneaway.h"

TEST_CASE( "Testing if string is one edit away from being other", "[oneAway]" ) {
    REQUIRE(oneAway("pale", "ple") == true);
    REQUIRE(oneAway("pales", "pale") == true);
    REQUIRE(oneAway("pale", "bale") == true);
    REQUIRE(oneAway("pale", "bake") == false);
    REQUIRE(oneAway("pale", "palers") == false);
}