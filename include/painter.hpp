#pragma once
#include "abstract_painter.hpp"
#include <vector>
#include <string>

/**
 * @file painter.hpp
 * @brief Definirea clasei Painter pentru desenarea imaginii.
 * @author Cristian-Teodor Burduja
 * @year 2024
 */

/**
 * @class Painter
 * @brief Clasa care implementează interfața AbstractPainter.
 * Permite desenarea imaginii și scrierea textului pe ecran.
 */
class Painter : public AbstractPainter {
public:
    /**
     * @brief Desenează o imagine pe o zonă definită de două puncte.
     * @param topLeft Punctul din colțul stânga sus al imaginii.
     * @param bottomRight Punctul din colțul dreapta jos al imaginii.
     * @param image Vector de șiruri care reprezintă imaginea.
     */
    virtual void DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image);

    /**
     * @brief Scrie text la o poziție specificată.
     * @param position Poziția unde va fi scris textul.
     * @param text Textul care va fi scris.
     */
    virtual void WriteText(Point position, const std::string& text);
};
