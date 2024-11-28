#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "ghost.hpp"
#include "point.hpp"

TEST_CASE("Test Ghost class", "[Ghost]") {
    Point startPoint = {5, 5};
    Ghost ghost(startPoint);

    SECTION("Check initial position") {
        REQUIRE(ghost.GetPosition().x == 5);
        REQUIRE(ghost.GetPosition().y == 5);
    }

    SECTION("Move Ghost") {
        ghost.Move(2, 3);
        REQUIRE(ghost.GetPosition().x == 7);
        REQUIRE(ghost.GetPosition().y == 8);
    }

    SECTION("Move Ghost with negative offset") {
        ghost.Move(-1, -2);
        REQUIRE(ghost.GetPosition().x == 6);
        REQUIRE(ghost.GetPosition().y == 6);
    }
}
