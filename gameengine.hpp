#pragma once

#include "pacman.hpp"
#include "ghost.hpp"
#include "board.hpp"
#include <memory>

class GameEngine {
    std::shared_ptr<Pacman> _pacman;
    std::shared_ptr<Ghost> _ghost;
    std::shared_ptr<Board> _board;

public:
    GameEngine();
    void Init();
    void Run();
};
