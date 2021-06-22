/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Menu
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Menu : public IScene {
        public:
            /**
             * @brief Construct a new Menu object
             * 
             */
            Menu();

            /**
             * @brief Destroy the Menu object
             * 
             */
            ~Menu();

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
             * @brief title of the game
             * 
             */
            std::shared_ptr<IObject> _title;

            /**
             * @brief background of the game
             * 
             */
            std::shared_ptr<IObject> _background;

            /**
             * @brief music for the scene
             * 
             */
            std::shared_ptr<IObject> _music;

            /**
             * @brief button new_game
             * 
             */
            std::shared_ptr<IObject> _button_new_game;

            /**
             * @brief button load_game
             * 
             */
            std::shared_ptr<IObject> _button_load_game;

            /**
             * @brief button help
             * 
             */
            std::shared_ptr<IObject> _button_help;

            /**
             * @brief button settings
             * 
             */
            std::shared_ptr<IObject> _button_settings;

            /**
             * @brief button exit
             * 
             */
            std::shared_ptr<IObject> _button_exit;
    };
}