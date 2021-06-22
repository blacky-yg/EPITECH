/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** GameMode
*/

#pragma once

#include "Headers.hpp"

#define MAX_CHARS   9

namespace studio {
    class GameMode : public IScene {
        public:
            /**
             * @brief Construct a new GameMode object
             * 
             */
            GameMode();

            /**
             * @brief Destroy the GameMode object
             * 
             */
            ~GameMode();

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
             * @brief solo mode game
             * 
             */
            void solo_mode();
            /**
             * @brief double player mode
             * 
             */
            void player_mode();
            /**
             * @brief Get the player name solo mode object
             * 
             * @return std::sting 
             */
            std::string get_player_name();
            /**
             * @brief Get the player1 name object
             * 
             * @return std::string 
             */
            std::string get_player1_name();
            /**
             * @brief Get the player2 name object
             * 
             * @return std::string 
             */
            std::string get_player2_name();
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
             * @brief hold player 1 name
             * 
             */
            std::string _player1;
            /**
             * @brief hold player2 name
             * 
             */
            std::string _player2;
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
             * @brief button_backof the game
             * 
             */
            std::shared_ptr<IObject> _button_mode1;
            /**
             * @brief button_backof the game
             * 
             */
            std::shared_ptr<IObject> _button_mode2;
            /**
             * @brief button_backof the game
             * 
             */
            std::shared_ptr<IObject> _mode;
            /**
             * @brief state of the mode
             * 
             */
            int _state;
            /**
             * @brief char * to write in the player1
             * 
             */
            char _name1[MAX_CHARS];
            /**
             * @brief char * to write in the player2
             * 
             */
            char _name2[MAX_CHARS];
            /**
             * @brief count letter for player1
             * 
             */
            int letterCount;
            /**
             * @brief count letter for player2
             * 
             */
             int letterCount2;
            /**
             * @brief state between player one and two
             * 
             */
            int state_player;
            /**
             * @brief mode choose
             * 
             */
            int mode;
    };
}