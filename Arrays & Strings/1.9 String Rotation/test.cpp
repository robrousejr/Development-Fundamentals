#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch.hpp"
#include "stringrotation.h"

TEST_CASE( "Testing if string rotation works", "[isRotation]" ) {
    REQUIRE(isRotation("waterbottle", "erbottlewat") == true);
    REQUIRE(isRotation("candyland", "landcandy") == true);
    REQUIRE(isRotation("waterbottle", "erlybottlewat") == false);
    REQUIRE(isRotation("waterbottle", "erlyboftlewat") == false);
}