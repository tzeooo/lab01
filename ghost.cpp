#include "ghost.hpp"


Ghost::Ghost() : _position{0, 0} {}


Ghost::Ghost(const Point& position) : _position(position) {}


Point Ghost::GetPosition() const {
    return _position;
}


void Ghost::Move(int dx, int dy) {
    _position.x += dx;
    _position.y += dy;
}
