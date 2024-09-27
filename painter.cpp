#include "painter.hpp"
#include <iostream>


void Painter::DrawImage(Point topLeft, Point bottomRight, char** image) {
 
    for (int y = topLeft.y; y <= bottomRight.y; ++y) {
        for (int x = topLeft.x; x <= bottomRight.x; ++x) {
            std::cout << image[y][x];
        }
        std::cout << std::endl;
    }
}


void Painter::WriteText(Point position, const char* text) {
    
    std::cout << text << std::endl;
}
