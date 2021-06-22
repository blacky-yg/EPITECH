/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** SplashScreen
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class SplashScreen: public IScene {
        public:
            /**
             * @brief Construct a new SplashScreen object
             * 
             * 
             */
            SplashScreen();

            /**
             * @brief Destroy the SplashScreen object
             * 
             */
            ~SplashScreen();

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
            virtual SCENE get_scene_type();

            /**
             * @brief store unique Manager instance 
             * 
             */
            std::shared_ptr<SceneManager> _manager;
             /**
             * @brief music for the scene
             * 
             */
            std::shared_ptr<IObject> _music;
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
        protected:
            int _frame;
            int _counter;
            /**
             * @brief boy sprite
             * 
             */
            std::shared_ptr<IObject> _boy;
             /**
             * @brief boy sprite
             * 
             */
            std::shared_ptr<IObject> _girl;
    };
}