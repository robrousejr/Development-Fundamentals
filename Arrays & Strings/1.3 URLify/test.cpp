#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch.hpp"
#include "urlify.h"

TEST_CASE( "Testing if string was properly URLified", "[URLify]" ) {
    REQUIRE(URLify("Mr John Smith") == "Mr%20John%20Smith");
    REQUIRE(URLify("Petey") == "Petey");
    REQUIRE(URLify("Petey       ") == "Petey");
    REQUIRE(URLify("   Petey       ") == "Petey");
    REQUIRE(URLify("Pe    tey") == "Pe%20tey");
}