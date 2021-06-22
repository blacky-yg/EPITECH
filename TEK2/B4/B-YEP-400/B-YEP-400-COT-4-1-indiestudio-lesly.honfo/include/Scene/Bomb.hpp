/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Help
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    class Bomb : public IObject {
        public:
            /**
             * @brief Construct a new Bomb object
             * 
             */
            Bomb(const char *path);

            /**
             * @brief Destroy the Bomb object
             * 
             */
            ~Bomb();

        //     /**
        //      * @brief 
        //      * 
        //      * @param posX 
        //      * @param posY 
        //      * @param height 
        //      * @param width 
        //      */
        //     virtual void init(int posX, int posY, int height, int width);

        //     /**
        //      * @brief Set the Pos object
        //      * 
        //      * @param posX 
        //      * @param posY 
        //      */
        //    virtual void setPos(float posX, float posY);

        //    /**
        //     * @brief Get the Pos object
        //     * 
        //     * @return struct Vector2 
        //     */
        //     virtual struct Vector2 getPos();

        //     /**
        //      * @brief Set the Rect object
        //      * 
        //      * @param posX 
        //      * @param posY 
        //      * @param height 
        //      * @param width 
        //      */
        //     virtual void setRect(int posX, int posY, int height, int width);

        //     /**
        //      * @brief Get the Rect object
        //      * 
        //      * @return Rectangle 
        //      */
        //     virtual Rectangle getRect();

        //     /**
        //      * @brief Set the Texture object
        //      * 
        //      */
        //     virtual void setTexture();

        //     /**
        //      * @brief Set the action object
        //      * 
        //      * @return true 
        //      * @return false 
        //      */
        //     virtual bool set_action();

        //     /**
        //      * @brief 
        //      * 
        //      * @param posX 
        //      * @param posY 
        //      */
        //     virtual void draw(int posX, int posY);

        //     /**
        //      * @brief destroy the object
        //      * 
        //      */
        //     void destroy();

        //      /**
        //    * @brief move player forward
        //    * 
        //    */
        //   void move_forward();

        //   /**
        //    * @brief move player backward
        //    * 
        //    */
        //   void move_backward();

        //   /**
        //    * @brief move player left
        //    * 
        //    */
        //   void move_left();

        //   /**
        //    * @brief move player right
        //    * 
        //    */
        //   void move_right();

        //     /**
        //      * @brief store unique Manager instance 
        //      * 
        //      */
        //     std::shared_ptr<SceneManager> _manager;
                virtual int get_mode();
                virtual void set_mode(int mode);
        // protected:

        //     /**
        //      * @brief background of the game
        //      * 
        //      */
        //     std::shared_ptr<IObject> _background;
            
        //     /**
        //      * @brief path to the asset
        //      * 
        //      */
        //     const char *_path;

        //     /**
        //      * @brief Vector2d position of the Object
        //      * 
        //      */
        //     struct Vector2 _pos;

        //     /**
        //      * @brief image
        //      * 
        //      */
        //     Image _image;
            
        //     /**
        //      * @brief Texture2D of the object
        //      * 
        //      */
        //     Texture2D _texture;

        //     /**
        //      * @brief Sound of the object
        //      * 
        //      */
        //     std::string _sound;

        //     /**
        //      * @brief rect for object
        //      * 
        //      */
        //     Rectangle _rec;

    };
}