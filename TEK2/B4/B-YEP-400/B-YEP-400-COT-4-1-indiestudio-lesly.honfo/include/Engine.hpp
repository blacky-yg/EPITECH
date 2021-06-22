/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Engine
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Engine {
        public:
            /**
             * @brief Construct a new Engine object
             * 
             * @param width 
             * @param height 
             */
            Engine(int width, int height);

            /**
             * @brief Destroy the Engine object
             * 
             */
            ~Engine();

            /**
             * @brief launch the engine
             * 
             */
            void launch();

            /**
             * @brief store unique Manager instance 
             * 
             */
            std::shared_ptr<SceneManager> _manager = SceneManager::getInstance();
    };
}

using namespace studio;