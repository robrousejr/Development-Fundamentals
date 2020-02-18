#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch.hpp"
#include "checkperm.h"

TEST_CASE( "Testing if strings are permutations of each other", "[checkPermutation]" ) {
    REQUIRE( checkPermutation("testing", "snapshot") == false);
    REQUIRE( checkPermutation("trap", "part") == true);
}