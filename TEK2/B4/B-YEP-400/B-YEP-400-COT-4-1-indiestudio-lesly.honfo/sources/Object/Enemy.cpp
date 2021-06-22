/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Enemy
*/

#include "Engine.hpp"

Enemy::Enemy(const char *path)
{
    _path = path;
}

Enemy::~Enemy()
{
}

void Enemy::init(int posX, int posY, int height, int width)
{
    setPos(posX, posY);
    setRect(posX, posY, height, width);
    setTexture();
}

void Enemy::setTexture()
{
    _image = LoadImage(_path);
    _texture = LoadTextureFromImage(_image);
    UnloadImage(_image);
}

void Enemy::setPos(float posX, float posY)
{
    _pos.x = posX;
    _pos.y = posY;
}

struct Vector2 Enemy::getPos()
{
    return _pos;
}

void Enemy::setRect(int posX, int posY, int height, int width)
{
    _rec.x = static_cast<float>(posX * 0);
    _rec.y = static_cast<float>(128);
    _rec.width = static_cast<float>(width);
    _rec.height = static_cast<float>(height);
}

Rectangle Enemy::getRect()
{
    return _rec;
}

void Enemy::draw(int posX, int posY)
{
    set_action();
    DrawTextureRec(_texture, _rec, _pos, RED);
}

void Enemy::destroy()
{
    UnloadTexture(_texture);
}

bool Enemy::set_action()
{
    if (IsKeyDown(KEY_W))
        move_backward();
    else if (IsKeyDown(KEY_S))
        move_forward();
    else if (IsKeyDown(KEY_D))
        move_right();
    else if (IsKeyDown(KEY_A))
        move_left();
    else
        return false;
    return true;
}

void Enemy::move_right()
{
    if (_pos.x <= 1190)
    {
        _rec.y = static_cast<float>(0.0);
        if (_rec.x == 512)
            _rec.x = 0.0f;
        _rec.x += static_cast<float>(_texture.width / 8);
        _pos.x += 5;
    }
}

void Enemy::move_left()
{
    if (_pos.x >= 0)
    {
        _rec.y = static_cast<float>(128);
        if (_rec.x == 512)
            _rec.x = 0.0f;
        _rec.x += static_cast<float>(_texture.width / 8);
        _pos.x -= 5;
    }
}

void Enemy::move_forward()
{
    if (_pos.y <= 590)
    {
        _rec.y = static_cast<float>((_texture.height / 4) * 2);
        if (_rec.x == 512)
            _rec.x = 0.0f;
        _rec.x += static_cast<float>(_texture.width / 8);
        _pos.y += 5;
    }
}

void Enemy::move_backward()
{
    if (_pos.y >= 0)
    {
        _rec.y = static_cast<float>((_texture.height / 4) * 3);
        if (_rec.x == 512)
            _rec.x = 0.0f;
        _rec.x += static_cast<float>(_texture.width / 8);
        _pos.y -= 5;
    }
}

void Enemy::attack()
{
    //draw_bomb
}

void Enemy::death()
{
    //just stop drawing
    _life = 0;
}

void Enemy::take_hit()
{
    _life -= 1;
    //don't know what to draw, je peux juste faire clignoter mais faudra canger bcq de choses
}

int Enemy::getLife()
{
    return (_life);
}