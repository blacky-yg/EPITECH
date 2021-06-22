/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Button
*/

#include "Engine.hpp"

Button::Button(const char *path)
{
    _path = path;
}

Button::~Button()
{
}

void Button::init(int posX, int posY, int height, int width)
{
    setPos(posX, posY);
    setRect(posX, posY, height, width);
    setTexture();
    _sound = LoadSound(ASSETS_PATH"sounds/button_sound.wav");
}

void Button::setTexture()
{
   _image = LoadImage(_path);
    _texture = LoadTextureFromImage(_image);
    UnloadImage(_image);
}

void Button::draw(int posX, int posY)
{
    DrawTexture(_texture, posX, posY, WHITE);
}

bool Button::set_action()
{
    Vector2 mouse_pos = GetMousePosition();
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)
    && (mouse_pos.x >= _rec.x && mouse_pos.x <= _rec.width)
        && (mouse_pos.y >= _rec.y && mouse_pos.y <= _rec.height)) {
        PlaySound(_sound);
        return (true);
    }
    return (false);
}

void Button::setPos(float posX, float posY)
{
    _pos.x = posX;
    _pos.y = posY;
}

struct Vector2 Button::getPos()
{
    return (_pos);
}

void Button::setRect(int posX, int posY, int height, int width)
{
    _rec.height = height;
    _rec.width = width;
    _rec.x = posX;
    _rec.y = posY;
}

Rectangle Button::getRect()
{
    return (_rec);
}

Texture2D Button::getTexture()
{
    return _texture;
}

void Button::destroy()
{
    UnloadTexture(_texture);
    UnloadSound(_sound);
}

void Button::move_right()
{
}

void Button::move_left()
{
}

void Button::move_forward()
{
}

void Button::move_backward()
{
}