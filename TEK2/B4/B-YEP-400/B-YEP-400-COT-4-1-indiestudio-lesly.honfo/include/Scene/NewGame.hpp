/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** NewGame
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class NewGame : public IScene {
        public:
            /**
            * @brief Construct a new NewGame object
            * 
            */
            NewGame();

            /**
            * @brief Destroy the NewGame object
            * 
            */
            ~NewGame();

            /**
            * @brief init the different assets and tools for the scne
            * 
            */
            virtual void init();
            /*    
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
            * @brief draw score info
            * 
            */
            void draw_info();

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
             * @brief game time
             * 
             */
            float _gametime;
            /**
             * @brief number of bomb
             * 
             */
            int _number_bomb;
            /**
             * @brief score of player
             * 
             */
            int _score;
            /**
             * @brief highscore
             * 
             * @return std::string 
             */
            int _highScore;      
            /**
             * @brief return player2 name
             * 
             * @return std::string 
             */
            int _lives;
            /**
             * @brief Get the mode object
             * 
             * @return int 
             */
            virtual int get_mode();
             virtual void set_mode(int mode);
        private:

            /**
             * @brief camera view
             * 
             */
            Camera3D _camera;

            /**
            * @brief button exit
            * 
            */
            std::shared_ptr<IObject> _map;

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
            * @brief 
            * 
            */
            std::shared_ptr<IObject> _player;

            /**
            * @brief player of the game
            * 
            */
            std::shared_ptr<IObject> _enemy;

            /**
            * @brief player of the game
            * 
            */
            std::shared_ptr<IObject> _bot;

            /**
             * @brief 
             * 
             */
            std::shared_ptr<IScene> _handle_player;
            int mode;
    };
}