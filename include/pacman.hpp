#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>
#include <memory>

class Pacman {
    Point _position;
    Direction _direction;
public:
    Pacman();
    Pacman(const Point& position);
    Pacman(const Pacman& other);

    Pacman& operator=(const Pacman& other);
    bool operator==(const Pacman& other) const;

    void Move(Direction direction);
    Point GetPosition() const;

    friend std::istream& operator>>(std::istream& in, Pacman& pacman);
    friend std::ostream& operator<<(std::ostream& out, const Pacman& pacman);
};
