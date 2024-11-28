#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pacman.hpp"
#include "direction.hpp"

TEST_CASE("Test Pacman class", "[Pacman]") {
    Point startPoint = {0, 0};
    Pacman pacman(startPoint);

    SECTION("Check initial position") {
        REQUIRE(pacman.GetPosition().x == 0);
        REQUIRE(pacman.GetPosition().y == 0);
    }

    SECTION("Move Pacman Up") {
        pacman.Move(Direction::Up);
        REQUIRE(pacman.GetPosition().x == 0);
        REQUIRE(pacman.GetPosition().y == -1);
    }

    SECTION("Move Pacman Down") {
        pacman.Move(Direction::Down);
        REQUIRE(pacman.GetPosition().x == 0);
        REQUIRE(pacman.GetPosition().y == 1);
    }

    SECTION("Move Pacman Left") {
        pacman.Move(Direction::Left);
        REQUIRE(pacman.GetPosition().x == -1);
        REQUIRE(pacman.GetPosition().y == 0);
    }

    SECTION("Move Pacman Right") {
        pacman.Move(Direction::Right);
        REQUIRE(pacman.GetPosition().x == 1);
        REQUIRE(pacman.GetPosition().y == 0);
    }
}
