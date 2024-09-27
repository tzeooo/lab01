#include "pacman.hpp"


Pacman::Pacman() : _position{0, 0}, _direction(Direction::Right) {}


Pacman::Pacman(const Point& position) : _position(position), _direction(Direction::Right) {}


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
