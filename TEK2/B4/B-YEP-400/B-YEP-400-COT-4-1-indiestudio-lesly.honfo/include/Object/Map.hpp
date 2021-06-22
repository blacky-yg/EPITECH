/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Map
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Map : public IObject {
        public:
            /**
             * @brief Construct a new Map object
             * 
             * @param path path of the asset
             */
            Map(const char *path);

            /**
             * @brief Destroy the Map object
             * 
             */
            ~Map();

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
             * @brief 
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
            * @brief Get the texture object
            * 
            * @return Texture2D 
            */
            virtual Texture2D getTexture();
            std::string get_map_from_file();
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
           * @brief store cube positions
           * 
           */
          std::vector<Vector3> _map_box;
          /**
           * @brief Get the box positions object
           * 
           * @return std::vector<Vector3> 
           */
          std::vector<Vector3> get_box_positions();
        protected:
            /**
             * @brief Rectangle of the object
             * 
             */
            Rectangle _rect;
    };
}