/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** GameOver
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class GameOver : public IScene {
        public:
            /**
             * @brief Construct a new GameOver object
             * 
             */
            GameOver();

            /**
             * @brief Destroy the Game Over object
             * 
             */
            ~GameOver();

            /**
             * @brief init the different assets and tools for the scne
             * 
             */
            virtual void init();

            /**
             * @brief draw all the necessary resources in the scene
             * 
             */
            virtual void draw();

            /**
             * @brief Destroy all the resources in the scene
             * 
             */
            virtual void destroy();

            /**
             * @brief Get the scene type object
             * 
             * @return SCENE 
             */
            virtual SCENE get_scene_type() { return (_scene_type); }

            /**
             * @brief store unique Manager instance 
             * 
             */
            std::shared_ptr<SceneManager> _manager;
            /**
             * @brief return player1 name
             * 
             * @return std::string 
             */
            virtual std::string return_player1();
            /**
             * @brief return player2 name
             * 
             * @return std::string 
             */
            virtual std::string return_player2();
            /**
             * @brief Get the mode object
             * 
             * @return int 
             */
            virtual int get_mode();
             virtual void set_mode(int mode);
        private:
             /**
             * @brief background of the game
             * 
             */
            std::shared_ptr<IObject> _background;
             /**
             * @brief button_backof the game
             * 
             */
            std::shared_ptr<IObject> _button_back;
             /**
             * @brief music for the scene
             * 
             */
            std::shared_ptr<IObject> _music;

    };
}