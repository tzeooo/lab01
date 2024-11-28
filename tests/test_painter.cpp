#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "painter.hpp"
#include "point.hpp"

TEST_CASE("Test Painter class", "[Painter]") {
    Painter painter;

    SECTION("Test DrawImage method") {
        Point topLeft = {0, 0};
        Point bottomRight = {10, 10};
        char** image = nullptr;  // Vom presupune că aceasta este o imagine fictivă pentru test.

        // Testează dacă metoda nu produce erori
        REQUIRE_NOTHROW(painter.DrawImage(topLeft, bottomRight, image));
    }

    SECTION("Test WriteText method") {
        Point position = {5, 5};
        const char* text = "Test";

        // Testează dacă metoda nu produce erori
        REQUIRE_NOTHROW(painter.WriteText(position, text));
    }
}
