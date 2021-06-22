/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** SceneManager
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class SceneManager {
        private:
            /**
             * @brief allow only one SceneManager instance in the game
             * 
             */
            static std::shared_ptr<SceneManager> _manager;

            /**
             * @brief Construct a new Scene Manager object
             * 
             */
            SceneManager();
            
            /**
             * @brief menu scene
             * 
             */
            std::shared_ptr<IScene> _menu;

            /**
             * @brief play scene
             * 
             */
            std::shared_ptr<IScene> _new_game;

            /**
             * @brief load_game scene
             * 
             */
            std::shared_ptr<IScene> _load_game;

            /**
             * @brief help scene
             * 
             */
            std::shared_ptr<IScene> _help;

            /**
             * @brief settings scene
             * 
             */
            std::shared_ptr<IScene> _settings;

            /**
             * @brief exit
             * 
             */
            std::shared_ptr<IScene> _exit;

            /**
             * @brief pause
             * 
             */
            std::shared_ptr<IScene> _pause;
             /**
             * @brief menu scene
             * 
             */
            std::shared_ptr<IScene> _splashscreen;
            
          

            /**
             * @brief gamewin scene
             * 
             */
            std::shared_ptr<IScene> _game_win;

            /**
             * @brief gamewin scene
             * 
             */
            std::shared_ptr<IScene> _game_over;

            /**
             * @brief current scene
             * 
             */
            std::shared_ptr<IScene> _current;
            /**
             * @brief current scene
             * 
             */
            std::shared_ptr<IScene> _game_mode;

        public:
            /**
             * @brief Set the pause object
             * 
             * @param pause 
             */
            void set_pause(int pause);
            /**
             * @brief Get the pause object
             * 
             * @param pause 
             * @return int 
             */
            int get_pause();
            /**
             * @brief booleen 
             * 
             */
            bool _stop;
            /**
             * @brief Destroy the Scene Manager object
             * 
             */
            virtual ~SceneManager();

            /**
             * @brief init all the necessary for the game
             * 
             */
            void init_game();

            /**
             * @brief draw all the necessary in the game
             * 
             */
            int draw_game();

            /**
             * @brief delete all the resources of the game
             * 
             */
            void delete_game();

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

            /**
             * @brief scene type (ENUM)
             * 
             */
            SCENE _scene_type;

            /**
             * @brief Get the instance object (Scene Manager)
             * 
             * @return SceneManager* unique sceneManager of the game
             */
            static std::shared_ptr<SceneManager> getInstance()
            {
                if (_manager == nullptr)
                    _manager = std::make_shared<SceneManager>(*(new SceneManager()));
                return (_manager);
            }
    };
}