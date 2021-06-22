/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** IObject
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class IObject {
        public:
            /**
             * @brief Default Constructor for a new IObject object
             *
             */
            IObject() {};

            /**
             * @brief Construct a new IObject object
             * 
             * @param path path to the asset
             */
            IObject(const char *path) {};

            /**
             * @brief Destroy the IObject object
             * 
             */
            virtual ~IObject() {};

            /**
             * @brief init a new Object
             * 
             * @param posX abscisse postion
             * @param posY ordonne position
             */
            virtual void init(int posX, int posY, int height, int width) = 0;

            /**
             * @brief Set the Pos object
             * 
             * @param posX abscisse position
             * @param posY ordonne position
             */
            virtual void setPos(float posX, float posY) = 0;

            /**
             * @brief Get the Pos object
             * 
             * @return struct Vector2 
             */
            virtual struct Vector2 getPos() = 0;

            /**
             * @brief Set the Rect object
             * 
             * @param Rect rectangle
             */
            virtual void setRect(int posX, int posY, int height, int width) = 0;

            /**
             * @brief Get the Rect object
             * 
             * @return Rectangle 
             */
            virtual Rectangle getRect() = 0;

            /**
             * @brief Set the Texture object
             * 
             */
            virtual void setTexture() = 0;

            /**
             * @brief Set the action object
             * 
             * @return true 
             * @return false 
             */
            virtual bool set_action() = 0;

            /**
             * @brief draw the Object
             * 
             * @param posX abscisse position
             * @param posY ordonne position
             */
            virtual void draw(int posX, int posY) = 0;


            /**
             * @brief Destroy all the necessary of the object
             * 
             */
            virtual void destroy() = 0;

            /**
             * @brief 
             * 
             */
            virtual void move_forward() = 0;

            /**
             * @brief move player backward
             * 
             */
            virtual void move_backward() = 0;

            /**
             * @brief move player left
             * 
             */
            virtual void move_left() = 0;

            /**
             * @brief move player right
             * 
             */
            virtual void move_right() = 0;

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
             * @brief map
             * 
             */
            std::string _map;
    };
}