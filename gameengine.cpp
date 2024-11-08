#include "gameengine.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm> 

GameEngine::GameEngine() 
    : _pacman(std::make_unique<Pacman>(Point{0, 0})),
      _board(20, 20)
{
    
    _ghosts.push_back(std::make_unique<Ghost>(Point{5, 5}));
}

void GameEngine::Init() {
    _pacman = std::make_unique<Pacman>(Point{0, 0});
    std::cout << "Jocul Pacman a fost inițializat" << std::endl;

    
    _ghosts.push_back(std::make_unique<Ghost>(Point{6, 6}));
    _ghosts.push_back(std::make_unique<Ghost>(Point{2, 3}));
    _ghosts.push_back(std::make_unique<Ghost>(Point{9, 9}));
}


void GameEngine::Run() {
    std::cout << "Jocul merge" << std::endl;

    
    std::sort(_ghosts.begin(), _ghosts.end(), [](const std::unique_ptr<Ghost>& a, const std::unique_ptr<Ghost>& b) {
        return a->GetPosition().x < b->GetPosition().x;
    });

   
    auto it = std::find_if(_ghosts.begin(), _ghosts.end(), [](const std::unique_ptr<Ghost>& ghost) {
        return ghost->GetPosition().x == 2 && ghost->GetPosition().y == 3;
    });

    if (it != _ghosts.end()) {
        std::cout << "Am găsit o fantomă la poziția (2, 3)" << std::endl;
    }

    std::cout << "Pacman este la poziția: (" << _pacman->GetPosition().x << ", " << _pacman->GetPosition().y << ")" << std::endl;

    
    for (const auto& ghost : _ghosts) {
        std::cout << *ghost << std::endl;
    }

    std::cout << "Jocul s-a terminat" << std::endl;
}

