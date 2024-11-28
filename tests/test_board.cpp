#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "board.hpp"

TEST_CASE("Test Board class", "[Board]") {
    Board board(20, 20);

    SECTION("Check board dimensions") {
        REQUIRE(board.GetWidth() == 20);
        REQUIRE(board.GetHeight() == 20);
    }

    SECTION("Default constructor") {
        Board defaultBoard;
        REQUIRE(defaultBoard.GetWidth() == 20);
        REQUIRE(defaultBoard.GetHeight() == 20);
    }
}
