#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>
#include <memory>

/**
 * @file pacman.hpp
 * @brief Definirea clasei Pacman pentru personajul principal din joc.
 * @author Cristian-Teodor Burduja
 * @year 2024
 */

/**
 * @class Pacman
 * @brief Clasa care reprezintă personajul Pacman.
 * Permite manipularea poziției și direcției lui Pacman.
 */
class Pacman {
    Point _position; ///< Poziția curentă a lui Pacman.
    Direction _direction; ///< Direcția curentă în care se mișcă Pacman.
public:
    /**
     * @brief Constructor implicit pentru Pacman.
     */
    Pacman();

    /**
     * @brief Constructor cu parametru pentru Pacman.
     * @param position Poziția inițială a lui Pacman.
     */
    Pacman(const Point& position);

    /**
     * @brief Constructor de copiere pentru Pacman.
     * @param other Pacman-ul care va fi copiat.
     */
    Pacman(const Pacman& other);

    /**
     * @brief Operatorul de atribuire pentru Pacman.
     * @param other Pacman-ul care va fi copiat.
     * @return Referința către obiectul curent.
     */
    Pacman& operator=(const Pacman& other);

    /**
     * @brief Operatorul de comparație pentru Pacman.
     * @param other Pacman-ul cu care se compară obiectul curent.
     * @return True dacă obiectele sunt egale, altfel false.
     */
    bool operator==(const Pacman& other) const;

    /**
     * @brief Mută Pacman în direcția specificată.
     * @param direction Direcția în care se va mișca Pacman.
     */
    void Move(Direction direction);

    /**
     * @brief Obține poziția curentă a lui Pacman.
     * @return Poziția curentă a lui Pacman.
     */
    Point GetPosition() const;

    /**
     * @brief Supraincarcă operatorul de citire pentru Pacman.
     * @param in Fluxul de intrare.
     * @param pacman Obiectul de tip Pacman care va fi citit.
     * @return Fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, Pacman& pacman);

    /**
     * @brief Supraincarcă operatorul de scriere pentru Pacman.
     * @param out Fluxul de ieșire.
     * @param pacman Obiectul de tip Pacman care va fi scris.
     * @return Fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Pacman& pacman);
};
