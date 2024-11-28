#pragma once

/**
 * @file direction.hpp
 * @brief Definirea enum-ului Direction pentru mișcarea personajelor.
 * @author Cristian-Teodor Burduja
 * @year 2024
 */

/**
 * @enum Direction
 * @brief Enum care reprezintă direcțiile în care se poate mișca Pacman sau Ghost.
 */
enum class Direction {
    Up, ///< Direcția în sus.
    Left, ///< Direcția spre stânga.
    Right, ///< Direcția spre dreapta.
    Down ///< Direcția în jos.
};
