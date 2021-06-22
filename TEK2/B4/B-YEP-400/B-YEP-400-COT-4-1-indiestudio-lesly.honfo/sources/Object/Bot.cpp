/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Bot
*/

#include "Engine.hpp"
using namespace std::chrono_literals;

Bot::Bot(const char *path)
{
    _path = path;
}

Bot::~Bot()
{
}

void Bot::init(int posX, int posY, int height, int width)
{
    setPos(posX, posY);
    setRect(posX, posY, height, width);
    setTexture();
    _life = 3;
}

void Bot::setTexture()
{
    _image = LoadImage(_path);
    _texture = LoadTextureFromImage(_image);
    UnloadImage(_image);
}

void Bot::setPos(float posX, float posY)
{
    _pos.x = posX;
    _pos.y = posY;
}

struct Vector2 Bot::getPos()
{
    return _pos;
}

void Bot::setRect(int posX, int posY, int height, int width)
{
    _rec.x = static_cast<float>(posX * 0);
    _rec.y = static_cast<float>(posY * 0);
    _rec.width = static_cast<float>(width);
    _rec.height = static_cast<float>(height);
}

Rectangle Bot::getRect()
{
    return _rec;
}

void Bot::draw(int posX, int posY)
{
    set_action();
    DrawTextureRec(_texture, _rec, _pos, YELLOW);
}

void Bot::destroy()
{
    UnloadTexture(_texture);
}

int gen_way()
{
    int nb = 0;
    for (size_t i = 0; i < 100; i++)
    {
         std::this_thread::sleep_for(2s);
        nb = rand() % 3;
        printf("nb = %d\n", nb);
    }
    return 0;
    return nb;
}

bool Bot::set_action()
{
    int nb = 0;

    for(size_t i = 0; i < 50; ++i) {
          std::this_thread::sleep_for(1s);
        nb = rand() % 5;
        switch(nb) {
            case 0:
                for (int j = 0; j < 5; j++)
                    attack();
                break;
            case 1:
                for (int j = 0; j < 5; j++)
                    move_left();
                break;
            case 2:
                for (int j = 0; j < 5; j++)
                    move_right();
                break;
            case 3:
                _pos.y += 2;
                for (int j = 0; j < 5; j++)
                    move_right();
                break;
            case 4:
                _pos.y -= 2;
                for (int j = 0; j < 5; j++)
                    move_left();
                break;
            default: return (false);
        }
    }
    return true;
}

void Bot::move_forward()
{
}

void Bot::move_backward()
{
}

void Bot::move_right()
{
    if (_pos.x <= 1190)
    {
        _rec.y = static_cast<float>(0.0);
        if (_rec.x == 1200.0f)
            _rec.x = 0.0f;
        _rec.x += static_cast<float>(_texture.width / 8);
        _pos.x += 1;
    }
}

void Bot::move_left()
{
    if (_pos.x >= 0)
    {
        _rec.y = static_cast<float>(_texture.height / 8);
        if (_rec.x == 1200.0f)
            _rec.x = 0.0f;
        _rec.x += static_cast<float>(_texture.width / 8);
        _pos.x -= 1;
    }
}

void Bot::attack()
{
    if (_rec.y == static_cast<float>(0.0))
        _rec.y = static_cast<float>((_texture.height / 8) * 4);
    else if (_rec.y == static_cast<float>(_texture.height / 8))
        _rec.y = static_cast<float>((_texture.height / 8) * 5);
    if (_rec.x == 1200.0f)
        _rec.x = 0.0f;
    _rec.x += static_cast<float>(_texture.width / 8);
}

void Bot::take_hit()
{
    _rec.y = static_cast<float>((_texture.height / 8) * 2);
    if (_rec.x == 600.0f)
        _rec.x = 0.0f;
    while (_rec.x != 600.0f)
        _rec.x += static_cast<float>(_texture.width / 8);
    _life -= 1;
}

void Bot::death()
{
    if (_rec.y == static_cast<float>(0.0))
        _rec.y = static_cast<float>((_texture.height / 8) * 6);
    else if (_rec.y == static_cast<float>(_texture.height / 8))
        _rec.y = static_cast<float>((_texture.height / 8) * 7);
    if (_rec.x == 600.0f)
        _rec.x = 0.0f;
    while (_rec.x != 600.0f)
        _rec.x += static_cast<float>(_texture.width / 8);
    _life = 0;
}