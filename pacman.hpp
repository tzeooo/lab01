#pragma once

#include "point.hpp"
#include "direction.hpp"

class Pacman {
    Point _position;
    Direction _direction;
public:
    Pacman();
    Pacman(const Point& position);
    void Move(Direction direction);
    Point GetPosition() const;
};
