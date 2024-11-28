#pragma once

#include "pacman.hpp"
#include "ghost.hpp"
#include "board.hpp"
#include <memory>
#include <vector>

/**
 * @file gameengine.hpp
 * @brief Definirea clasei GameEngine pentru gestionarea logicii jocului.
 * @author Cristian-Teodor Burduja
 * @year 2024
 */

/**
 * @class GameEngine
 * @brief Clasa care gestionează logica jocului.
 * Aceasta controlează obiectele Pacman și Ghost și interacțiunea acestora cu tabla de joc.
 */
class GameEngine {
    std::unique_ptr<Pacman> _pacman; ///< Obiectul Pacman.
    std::vector<std::unique_ptr<Ghost>> _ghosts; ///< Vectorul de Ghosts.
    Board _board; ///< Tabla de joc.

public:
    /**
     * @brief Constructor implicit pentru GameEngine.
     * Inițializează obiectele jocului.
     */
    GameEngine();

    /**
     * @brief Inițializează jocul și setează toate obiectele în pozițiile lor de început.
     */
    void Init();

    /**
     * @brief Rulează logica jocului.
     * La fiecare pas, actualizează pozițiile personajelor și verifică condițiile de câștig sau pierdere.
     */
    void Run();
};
