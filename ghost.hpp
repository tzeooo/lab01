#pragma once

#include "point.hpp"

class Ghost {
    Point _position;
public:
    Ghost();
    Ghost(const Point& position);
    Point GetPosition() const;
    void Move(int dx, int dy);
};
