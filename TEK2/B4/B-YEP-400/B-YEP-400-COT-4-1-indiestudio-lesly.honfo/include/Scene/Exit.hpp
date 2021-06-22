/*
** EPITECH PROJECT, 2021
** Exit
** File description:
** Exit
*/
#pragma once

#include "Headers.hpp"

namespace studio {
    class Exit : public IScene {
       public:
            /**
             * @brief Construct a new Menu object
             * 
             */
            Exit();

            /**
             * @brief Destroy the Menu object
             * 
             */
            ~Exit();

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
            virtual int get_mode();
             virtual void set_mode(int mode);
    };
}