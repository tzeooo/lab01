#include <iostream>
#include "gameengine.hpp"

int main() {

    GameEngine game;


    game.Init();

    std::cout << "Jocul a startat!" << std::endl;

 
    game.Run();

    return 0;
}
