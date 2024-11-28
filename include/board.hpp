#pragma once

/**
 * @file board.hpp
 * @brief Definirea clasei Board pentru tabla de joc.
 * @author Cristian-Teodor Burduja
 * @year 2024
 */

/**
 * @class Board
 * @brief Clasa care reprezintă tabla de joc.
 * Aceasta gestionează dimensiunile jocului, adică lățimea și înălțimea.
 */
class Board {
    int _width; ///< Lățimea tablei de joc.
    int _height; ///< Înălțimea tablei de joc.
public:
    /**
     * @brief Constructor pentru Board.
     * @param width Lățimea tablei de joc.
     * @param height Înălțimea tablei de joc.
     */
    Board(int width = 20, int height = 20);

    /**
     * @brief Obține lățimea tablei de joc.
     * @return Lățimea tablei de joc.
     */
    int GetWidth() const;

    /**
     * @brief Obține înălțimea tablei de joc.
     * @return Înălțimea tablei de joc.
     */
    int GetHeight() const;
};
