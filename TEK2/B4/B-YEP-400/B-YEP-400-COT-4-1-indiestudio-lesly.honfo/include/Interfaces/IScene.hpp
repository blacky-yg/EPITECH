/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** IScene
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class IScene {
        public:
            /**
             * @brief Destroy the IScene object
             * 
             */
            virtual ~IScene() = default;

            /**
             * @brief init the different assets and tools for the scene
             * 
             */
            virtual void init() = 0;

            /**
             * @brief draw all the necessary resources in the scene
             * 
             */
            virtual void draw() = 0;

            /**
             * @brief destroy all the resources in the scene
             * 
             */
            virtual void destroy() = 0;

            /**
             * @brief Get the scene type object
             * 
             * @return SCENE 
             */
            virtual SCENE get_scene_type() = 0;
            /**
             * @brief return player1 name
             * 
             * @return std::string 
             */
            virtual std::string return_player1() = 0;
            /**
             * @brief return player2 name
             * 
             * @return std::string 
             */
            virtual std::string return_player2() = 0;
            virtual int get_mode() = 0; 
            virtual void set_mode(int mode) = 0;

        protected:
            /**
             * @brief scene type from manager
             * 
             */
            SCENE _scene_type;

            /**
             * @brief width of the screen
             * 
             */
            int _width;

            /**
             * @brief height of the screen
             * 
             */
            int _height;
    };
}