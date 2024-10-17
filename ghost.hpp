#pragma once
#include "point.hpp"

class Ghost {
    Point _position;
public:
    Ghost();
    Ghost(const Point& position);
    Ghost(const Ghost& other);

    Ghost& operator=(const Ghost& other);
    bool operator==(const Ghost& other) const;

    Point GetPosition() const;
    void Move(int dx, int dy);

    friend std::istream& operator>>(std::istream& in, Ghost& ghost);
    friend std::ostream& operator<<(std::ostream& out, const Ghost& ghost);
};
