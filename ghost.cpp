#include "ghost.hpp"
#include <memory>

Ghost::Ghost() : _position{0, 0} {}

Ghost::Ghost(const Point& position) : _position(position) {}

Point Ghost::GetPosition() const {
    return _position;
}

void Ghost::Move(int dx, int dy) {
    _position.x += dx;
    _position.y += dy;
}

std::istream& operator>>(std::istream& in, Ghost& ghost) {
    in >> ghost._position;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Ghost& ghost) {
    out << "Ghost position: " << ghost._position;
    return out;
}
