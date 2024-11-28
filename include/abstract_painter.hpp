#pragma once
#include "point.hpp"
#include <string>
#include <vector>

/**
 * @file abstract_painter.hpp
 * @brief Definirea interfeței pentru desenarea imaginii și scrierea textului.
 * @author Cristian-Teodor Burduja
 * @year 2024
 */

/**
 * @class AbstractPainter
 * @brief Clasa abstractă pentru desenarea imaginilor și scrierea textelor.
 * Clasa furnizează metode pentru desenarea imaginilor în diferite puncte și scrierea textului.
 */
struct AbstractPainter {
    /**
     * @brief Desenează o imagine pe o zonă definită de două puncte.
     * @param topLeft Punctul din colțul stânga sus al imaginii.
     * @param bottomRight Punctul din colțul dreapta jos al imaginii.
     * @param image Vector de șiruri care reprezintă imaginea.
     */
    virtual void DrawImage(Point topLeft, Point bottomRight, std::vector<std::string>& image) = 0;

    /**
     * @brief Scrie text la o poziție specificată.
     * @param position Poziția unde va fi scris textul.
     * @param text Textul care va fi scris.
     */
    virtual void WriteText(Point position, const std::string& text) = 0;
};
