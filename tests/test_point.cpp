#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "point.hpp"

TEST_CASE("Test Point structure", "[Point]") {
    Point p1 = {10, 20};
    Point p2 = {10, 20};
    Point p3 = {30, 40};

    SECTION("Check Point equality") {
        REQUIRE(p1.x == p2.x);
        REQUIRE(p1.y == p2.y);
        REQUIRE_FALSE(p1.x == p3.x);
        REQUIRE_FALSE(p1.y == p3.y);
    }

    SECTION("Modify Point") {
        p1.x = 50;
        p1.y = 60;
        REQUIRE(p1.x == 50);
        REQUIRE(p1.y == 60);
    }
}
