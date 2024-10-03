#include "gameengine.hpp"
#include <iostream>

GameEngine::GameEngine() : _pacman(Point{0, 0}), _ghost(Point{5, 5}), _board(20, 20) {}
// acum precis initializam
void GameEngine::Init() {
    _pacman = Pacman(Point{0, 0});
    _ghost = Ghost(Point{5, 5});
    std::cout << "Jocul Pacman a fost inițializat" << std::endl;
}

void GameEngine::Run() {
    std::cout << "Jocul merge" << std::endl;
    std::cout << "Pacman este la poziția: (" << _pacman.GetPosition().x << ", " << _pacman.GetPosition().y << ")" << std::endl;
    std::cout << "Fantoma este la poziția: (" << _ghost.GetPosition().x << ", " << _ghost.GetPosition().y << ")" << std::endl;
    std::cout << "Jocul s-a terminat" << std::endl;
}
