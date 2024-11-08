#include "painter.hpp"
#include <iostream>

void Painter::DrawImage(Point topLeft, Point bottomRight, std::vector<std::string>& image) {
    for (int y = topLeft.y; y <= bottomRight.y && y < image.size(); ++y) {
        for (int x = topLeft.x; x <= bottomRight.x && x < image[y].size(); ++x) {
            std::cout << image[y][x];
        }
        std::cout << std::endl;
    }
}

void Painter::WriteText(Point position, const std::string& text) {
    std::cout << text << std::endl;
}
