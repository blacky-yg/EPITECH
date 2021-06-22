/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Wall
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Wall {
        public:
            /**
             * @brief Construct a new Wall object
             * 
             * @param path path of the asset
             */
            Wall(const char *path);

            /**
             * @brief Destroy the Wall object
             * 
             */
            ~Wall();

        protected:
    };
}