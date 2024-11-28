#pragma once
#include "point.hpp"
#include <memory>

/**
 * @file ghost.hpp
 * @brief Definirea clasei Ghost pentru personajul Ghost din joc.
 * @author Cristian-Teodor Burduja
 * @year 2024
 */

/**
 * @class Ghost
 * @brief Clasa care reprezintă un Ghost din joc.
 * Permite crearea și manipularea obiectului Ghost.
 */
class Ghost {
    Point _position; ///< Poziția curentă a Ghost-ului.
public:
    /**
     * @brief Constructor implicit pentru Ghost.
     */
    Ghost();

    /**
     * @brief Constructor cu parametru pentru Ghost.
     * @param position Poziția inițială a Ghost-ului.
     */
    Ghost(const Point& position);

    /**
     * @brief Constructor de copiere pentru Ghost.
     * @param other Ghost-ul care va fi copiat.
     */
    Ghost(const Ghost& other);

    /**
     * @brief Operatorul de atribuire pentru Ghost.
     * @param other Ghost-ul care va fi copiat.
     * @return Referința către obiectul curent.
     */
    Ghost& operator=(const Ghost& other);

    /**
     * @brief Operatorul de comparație pentru Ghost.
     * @param other Ghost-ul cu care se compară obiectul curent.
     * @return True dacă obiectele sunt egale, altfel false.
     */
    bool operator==(const Ghost& other) const;

    /**
     * @brief Obține poziția curentă a Ghost-ului.
     * @return Poziția curentă a Ghost-ului.
     */
    Point GetPosition() const;

    /**
     * @brief Mută Ghost-ul la o nouă poziție.
     * @param dx Modificarea pe axa X.
     * @param dy Modificarea pe axa Y.
     */
    void Move(int dx, int dy);

    /**
     * @brief Supraincarcă operatorul de citire pentru Ghost.
     * @param in Fluxul de intrare.
     * @param ghost Obiectul de tip Ghost care va fi citit.
     * @return Fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, Ghost& ghost);

    /**
     * @brief Supraincarcă operatorul de scriere pentru Ghost.
     * @param out Fluxul de ieșire.
     * @param ghost Obiectul de tip Ghost care va fi scris.
     * @return Fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Ghost& ghost);
};
