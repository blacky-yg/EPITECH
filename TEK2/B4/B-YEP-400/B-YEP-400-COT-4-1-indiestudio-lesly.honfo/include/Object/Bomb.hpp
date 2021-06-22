/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Bomb
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Bomb {
        public:
            /**
             * @brief Construct a new Bomb object
             * 
             * @param path path of the asset
             */
            Bomb(const char *path);

            /**
             * @brief Destroy the Bomb object
             * 
             */
            ~Bomb();

        protected:
    };
}