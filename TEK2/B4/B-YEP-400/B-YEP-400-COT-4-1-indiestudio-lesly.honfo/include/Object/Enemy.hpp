/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Enemy
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Enemy : public IObject {
        public:
            /**
             * @brief Construct a new Enemy object
             * 
             * @param path path of the asset
             */
            Enemy(const char *path);

            /**
             * @brief Destroy the Enemy object
             * 
             */
            ~Enemy();

            /**
             * @brief  INit the player object
             * 
             * @param posX 
             * @param posY 
             * @param height 
             * @param width 
             */
            virtual void init(int posX, int posY, int height, int width);

            /**
             * @brief Set the Pos object
             * 
             * @param posX 
             * @param posY 
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
             * @param Rect rectangle
             */
            virtual void setRect(int posX, int posY, int height, int width);

            /**
             * @brief Get the Rect object
             * 
             * @return Rectangle 
             */
            virtual Rectangle getRect();

            /**
             * @brief Set the Texture object
             * 
             */
            virtual void setTexture();

            /**
             * @brief Set the action object
             * 
             * @return true 
             * @return false 
             */
            virtual bool set_action();

            /**
             * @brief 
             * 
             * @param posX 
             * @param posY 
             */
            virtual void draw(int posX, int posY);

            /**
             * @brief 
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
             * @brief 
             * 
             */
            void attack();

            /**
             * @brief 
             * 
             */
            void take_hit();

            /**
             * @brief Get the Life object
             * 
             * @return int 
             */
            int getLife();

            /**
             * @brief 
             * 
             */
            void death();

        protected:
            /**
             * @brief path to the asset
             * 
             */
            const char *_path;

            /**
             * @brief Vector2d position of the Object
             * 
             */
            struct Vector2 _pos;

            /**
             * @brief Image
             * 
             */
            Image _image;

            /**
             * @brief Texture2D of the object
             * 
             */
            Texture2D _texture;

            /**
             * @brief Sound of the object
             * 
             */
            std::string _sound;

            /**
             * @brief rect for object
             * 
             */
            Rectangle _rec;

            /**
             * @brief 
             * 
             */
            int _life;
    };
}