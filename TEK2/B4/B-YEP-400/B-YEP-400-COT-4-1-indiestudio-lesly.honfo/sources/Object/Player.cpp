/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Player
*/

#include "Engine.hpp"

Player::Player(const char *path)
{
    _path = path;
}

Player::~Player()
{
}

void Player::init(int posX, int posY, int height, int width)
{
    setPos(posX, posY);
    setRect(posX, posY, height, width);
    setTexture();
    _life = 3;
}

void Player::setTexture()
{
    _image = LoadImage(_path);
    _texture = LoadTextureFromImage(_image);
    UnloadImage(_image);
}

void Player::setPos(float posX, float posY)
{
    _pos.x = posX;
    _pos.y = posY;
}

struct Vector2 Player::getPos()
{
    return _pos;
}

void Player::setRect(int posX, int posY, int height, int width)
{
    _rec.x = static_cast<float>(posX * 0);
    _rec.y = static_cast<float>(posY * 0);
    _rec.width = static_cast<float>(width);
    _rec.height = static_cast<float>(height);
}

Rectangle Player::getRect()
{
    return _rec;
}

void Player::draw(int posX, int posY)
{
    set_action();
    DrawTextureRec(_texture, _rec, _pos, WHITE);
}

void Player::destroy()
{
    UnloadTexture(_texture);
}

bool Player::set_action()
{
    if (IsKeyDown(KEY_UP))
        move_backward();
    else if (IsKeyDown(KEY_DOWN))
        move_forward();
    else if (IsKeyDown(KEY_RIGHT))
        move_right();
    else if (IsKeyDown(KEY_LEFT))
        move_left();
    else
        return false;
    return true;
}

void Player::move_right()
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

void Player::move_left()
{
    if (_pos.x >= 0)
    {
        _rec.y = static_cast<float>(_texture.height / 4);
        if (_rec.x == 512)
            _rec.x = 0.0f;
        _rec.x += static_cast<float>(_texture.width / 8);
        _pos.x -= 5;
    }
}

void Player::move_forward()
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

void Player::move_backward()
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

void Player::attack()
{
    //draw_bomb
}

void Player::death()
{
    //just stop drawing
    _life = 0;
}

void Player::take_hit()
{
    _life -= 1;
    //don't know what to draw, je peux juste faire clignoter mais faudra canger bcq de choses
}

int Player::getLife()
{
    return (_life);
}