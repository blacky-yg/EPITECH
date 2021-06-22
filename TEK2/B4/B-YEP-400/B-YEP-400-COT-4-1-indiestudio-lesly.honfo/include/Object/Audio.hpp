/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Audio
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Audio : public IObject {
        public:
            /**
             * @brief Construct a new Audio object
             * 
             * @param path path of the asset
             */
            Audio(const char *path);

            /**
             * @brief Destroy the Audio object
             * 
             */
            ~Audio();

            /**
             * @brief init a new Audio
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
             * @brief draw the Object
             * 
             * @param posX abscisse position
             * @param posY ordonne position
             */
            virtual void draw(int posX, int posY);

            /**
             * @brief Close audio device
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
             * @brief Get the Texture object
             * 
             * @return Texture2D 
             */
            virtual Texture2D getTexture();

      protected:
            /**
             * @brief music of the game
             * 
             */
            Music _music;
    };
}