/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Audio
*/

#include "Engine.hpp"

Audio::Audio(const char *path)
{
    _path = path;
}

Audio::~Audio()
{
}

void Audio::init(int posX, int posY, int height, int width)
{
    _music = LoadMusicStream(_path);
}

void Audio::setTexture()
{
}

void Audio::draw(int posX, int posY)
{
    PlayMusicStream(_music);
    UpdateMusicStream(_music);
}

bool Audio::set_action()
{
    return (true);
}

void Audio::setPos(float posX, float posY)
{
}

struct Vector2 Audio::getPos()
{
    return (_pos);
}

void Audio::setRect(int posX, int posY, int height, int width)
{
    _rec.height = height;
    _rec.width = width;
    _rec.x = posX;
    _rec.y = posY;
}

Rectangle Audio::getRect()
{ 
    return (_rec);
}

void Audio::destroy()
{
    UnloadMusicStream(_music);
}

void Audio::move_right()
{
}

void Audio::move_left()
{
}

void Audio::move_forward()
{
}

void Audio::move_backward()
{
}

Texture2D Audio::getTexture()
{
    return _texture;
}