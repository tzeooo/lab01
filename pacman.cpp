#include "pacman.hpp"
#include <algorithm>

Pacman::Pacman() : _position{0, 0}, _direction(Direction::Right) {}

Pacman::Pacman(const Point& position) : _position(position), _direction(Direction::Right) {}

Pacman::Pacman(const Pacman &other) : _position(other._position), _direction(other._direction) {}

Pacman& Pacman::operator=(const Pacman& other) {
    if (this != &other) {
        _position = other._position;
        _direction = other._direction;
    }
    return *this;
}

bool Pacman::operator==(const Pacman& other) const {
    return _position == other._position && _direction == other._direction;
}

void Pacman::Move(Direction direction) {
    switch (direction) {
        case Direction::Up:
            _position.y -= 1;
            break;
        case Direction::Down:
            _position.y += 1;
            break;
        case Direction::Left:
            _position.x -= 1;
            break;
        case Direction::Right:
            _position.x += 1;
            break;
    }
}

Point Pacman::GetPosition() const {
    return _position;
}

std::istream& operator>>(std::istream& in, Pacman& pacman) {
    in >> pacman._position;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Pacman& pacman) {
    out << "Pacman position: " << pacman._position;
    return out;
}
