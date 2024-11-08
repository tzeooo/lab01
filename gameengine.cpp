#include "gameengine.hpp"
#include <iostream>
#include <memory>

GameEngine::GameEngine() 
    : _pacman(std::make_shared<Pacman>(Point{0, 0})), 
      _ghost(std::make_shared<Ghost>(Point{5, 5})), 
      _board(std::make_shared<Board>(20, 20)) {}

void GameEngine::Init() {
    _pacman = std::make_shared<Pacman>(Point{0, 0});
    _ghost = std::make_shared<Ghost>(Point{5, 5});
    std::cout << "Jocul Pacman a fost inițializat" << std::endl;
}

void GameEngine::Run() {
    std::cout << "Jocul merge" << std::endl;
    std::cout << "Pacman este la poziția: " << *_pacman << std::endl;
    std::cout << "Fantoma este la poziția: " << *_ghost << std::endl;
    std::cout << "Jocul s-a terminat" << std::endl;
}
