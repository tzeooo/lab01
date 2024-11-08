#pragma once
#include "point.hpp"
#include <iostream>

class Ghost {
    Point _position;
public:
    Ghost();
    Ghost(const Point& position);

    Point GetPosition() const;
    void Move(int dx, int dy);

    friend std::istream& operator>>(std::istream& in, Ghost& ghost);
    friend std::ostream& operator<<(std::ostream& out, const Ghost& ghost);
};
