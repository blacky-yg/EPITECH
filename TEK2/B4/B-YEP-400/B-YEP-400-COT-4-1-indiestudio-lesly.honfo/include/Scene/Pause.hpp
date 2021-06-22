/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Pause
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Pause : public IScene {
        public:
            /**
             * @brief Construct a new Pause object
             * 
             */
            Pause();

            /**
             * @brief Destroy the Pause object
             * 
             */
            ~Pause();

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
             * @brief button saveof the game
             * 
             */
            std::shared_ptr<IObject> _save;
            /**
             * @brief button back_game of the game
             * 
             */
            std::shared_ptr<IObject> _back_game;
            /**
             * @brief button quit of the game
             * 
             */
            std::shared_ptr<IObject> _quit;
    };
}