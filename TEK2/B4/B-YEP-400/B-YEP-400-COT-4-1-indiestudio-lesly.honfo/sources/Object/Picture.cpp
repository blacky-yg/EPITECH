/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Picture
*/

#include "Engine.hpp"

Picture::Picture(const char *path)
{
    _path = path;
}

Picture::~Picture()
{
}

void Picture::init(int posX, int posY, int height, int width)
{
    setPos(posX, posY);
    setRect(posX, posY, height, width);
    setTexture();
}

void Picture::setTexture()
{
    _image = LoadImage(_path);
    _texture = LoadTextureFromImage(_image);
    UnloadImage(_image);
}

void Picture::draw(int posX, int posY)
{
    DrawTexture(_texture, posX, posY, WHITE);
}

bool Picture::set_action()
{
    Vector2 mouse_pos = GetMousePosition();
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) &&
            (mouse_pos.x >= this->_pos.x && mouse_pos.y >= this->_pos.y)) {
        std::cout << "pos x = "<< mouse_pos.x <<std::endl;
        std::cout << "pos y = "<< mouse_pos.y <<std::endl;
        return true;
    } else
        return false;
}

void Picture::setRect(int posX, int posY, int height, int width)
{
    _rec.height = height;
    _rec.width = width;
    _rec.x = posX;
    _rec.y = posY;
}

Rectangle Picture::getRect()
{
    Rectangle rect;
    rect.height = 0;
    rect.width = 0;
    rect.x = 0;
    rect.y = 0;
    return (rect);
}

void Picture::setPos(float posX, float posY)
{
    this->_pos.x = posX;
    this->_pos.y = posY;
}

struct Vector2 Picture::getPos()
{
    return this->_pos;
}

Texture2D Picture::getTexture()
{
    return _texture;
}


void Picture::destroy()
{
    UnloadTexture(_texture);
}

void Picture::move_right()
{
}

void Picture::move_left()
{
}

void Picture::move_forward()
{
}

void Picture::move_backward()
{
}