#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>

class Pacman {
    Point _position;
    Direction _direction;

public:
    Pacman();
    Pacman(const Point& position);

    void Move(Direction direction);
    Point GetPosition() const;

    friend std::istream& operator>>(std::istream& in, Pacman& pacman);
    friend std::ostream& operator<<(std::ostream& out, const Pacman& pacman);
};
