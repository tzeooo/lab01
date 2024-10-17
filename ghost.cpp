#include "ghost.hpp"

Ghost::Ghost() : _position{0, 0} {}

Ghost::Ghost(const Point& position) : _position(position) {}

Ghost::Ghost(const Ghost &other) : _position(other._position) {}

Ghost& Ghost::operator=(const Ghost& other) {
    if (this != &other) {
        _position = other._position;
    }
    return *this;
}

bool Ghost::operator==(const Ghost& other) const {
    return _position == other._position;
}

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
