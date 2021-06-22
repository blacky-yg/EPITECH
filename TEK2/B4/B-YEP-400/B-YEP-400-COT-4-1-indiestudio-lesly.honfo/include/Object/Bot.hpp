/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Bot
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Bot : public IObject {
        public:
            /**
             * @brief Construct a new Bot object
             * 
             * @param path path of the asset
             */
            Bot(const char *path);

            /**
             * @brief Destroy the Bot object
             * 
             */
            ~Bot();

            /**
             * @brief init a new Button
             * 
             * @param posX 
             * @param posY 
             */
            virtual void init(int posX, int posY, int height, int width);

            /**
             * @brief Set the Pos object
             * 
             * @param posX abscisse postion
             * @param posY ordonne position
             */
            virtual void setPos(float posX, float posY);

            /**
             * @brief Get the Pos object
             * 
             * @return struct Vector2 
             */
            virtual struct Vector2 getPos();

            /**
             * @brief Set the Rect object
             * 
             * @param Rect Rectangle
             */
            virtual void setRect(int posX, int posY, int height, int width);

            /**
             * @brief Get the Rect object
             * 
             * @return Rectangle 
             */
            virtual Rectangle getRect();

            /**
             * @brief Set the action object
             * 
             * @return true 
             * @return false 
             */
            virtual bool set_action();

            /**
             * @brief Set the Texture object
             * 
             */
            virtual void setTexture();

            /**
             * @brief Draw the Picture object
             * 
             * @param posX 
             * @param posY 
             */
            virtual void draw(int posX, int posY);

            /**
             * @brief destroy all the necessary
             * 
             */
            void destroy();

            /**
             * @brief move player forward
             * 
             */
            void move_forward();

            /**
             * @brief move player backward
             * 
             */
            void move_backward();

            /**
             * @brief move player left
             * 
             */
            void move_left();

            /**
             * @brief move player right
             * 
             */
            void move_right();

            /**
             * @brief attack
             * 
             */
            void attack();

            /**
             * @brief death
             * 
             */
            void death();

            /**
             * @brief 
             * 
             */
            void take_hit();

        protected:
            /**
             * @brief Rectangle of the object
             * 
             */
            Rectangle _rect;

            /**
             * @brief background of the game
             * 
             */
            std::shared_ptr<IObject> _background;

            /**
             * @brief life
             * 
             */
            int _life;
    };
}