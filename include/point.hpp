#pragma once
#include <iostream>

/**
 * @file point.hpp
 * @brief Definirea structurii Point pentru a reprezenta o poziție 2D.
 * @author Cristian-Teodor Burduja
 * @year 2024
 */

/**
 * @struct Point
 * @brief Structura care reprezintă un punct în spațiul 2D.
 * Conține coordonatele X și Y.
 */
struct Point {
    int x; ///< Coordonata pe axa X.
    int y; ///< Coordonata pe axa Y.

    /**
     * @brief Constructor cu parametrii pentru un punct 2D.
     * @param _x Coordonata X a punctului.
     * @param _y Coordonata Y a punctului.
     */
    Point(int _x = 0, int _y = 0);

    /**
     * @brief Constructor de copiere pentru Point.
     * @param other Punctul care va fi copiat.
     */
    Point(const Point& other);

    /**
     * @brief Operatorul de atribuire pentru Point.
     * @param other Punctul care va fi copiat.
     * @return Referința către obiectul curent.
     */
    Point& operator=(const Point& other);

    /**
     * @brief Operatorul de comparație pentru Point.
     * @param other Punctul cu care se compară obiectul curent.
     * @return True dacă punctele sunt egale, altfel false.
     */
    bool operator==(const Point& other) const;

    /**
     * @brief Supraincarcă operatorul de citire pentru Point.
     * @param in Fluxul de intrare.
     * @param point Punctul care va fi citit.
     * @return Fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, Point& point);

    /**
     * @brief Supraincarcă operatorul de scriere pentru Point.
     * @param out Fluxul de ieșire.
     * @param point Punctul care va fi scris.
     * @return Fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Point& point);
};
