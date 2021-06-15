/*
** EPITECH PROJECT, 2021
** 04 Snake
** File description:
** Snake
*/

#include "../include/Snake.hpp"

//TODO: Improve content

Snake::Snake()
{
    _nameGame = "Snake";
    std::cout << "Snake is running" << std::endl;
}

void Snake::eventManager()
{
    for (int i = _startingNbrRect; i > 0; --i)
    {
        _snake[i].x = _snake[i - 1].x;
        _snake[i].y = _snake[i - 1].y;
    }

    switch (_currentDirection)
    {
    case DOWN:
        _snake[0].y += 1;
        break;
    case LEFT:
        _snake[0].x -= 1;
        break;
    case RIGTH:
        _snake[0].x += 1;
        break;
    case UP:
        _snake[0].y -= 1;
        break;
    default:
        break;
    }
    srand(time(0));

    if ((_snake[0].x == _obs.x) && (_snake[0].y == _obs.y))
    {
        _startingNbrRect++;
        _obs.x = rand() % _N;
        _obs.y = rand() % _M;
    }

    if (_snake[0].x > _N)
        _snake[0].x = 0;
    if (_snake[0].x < 0)
        _snake[0].x = _N;
    if (_snake[0].y > _M)
        _snake[0].y = 0;
    if (_snake[0].y < 0)
        _snake[0].y = _M;

    for (int i = 1; i < _startingNbrRect; i++)
        if (_snake[0].x == _snake[i].x && _snake[0].y == _snake[i].y)
            _startingNbrRect = i;
}

void Snake::setLib(ILib *lib)
{
    this->_graphicLib = lib;
    
}

std::string Snake::getGameName()
{
    return _nameGame;
}

void Snake::display()
{
    for (int i = 0; i < _N; i++)
        for (int j = 0; j < _M; j++) {
            _graphicLib->drawRedRectOnWindow(i * _size, j * _size);
        }

    for (int i = 0; i < _startingNbrRect; i++) {
        _graphicLib->drawSimpleRectOnWindow(_snake[i].x * _size, _snake[i].y * _size);
    }
    _graphicLib->drawSimpleRectOnWindow(_obs.x * _size, _obs.y * _size);
}

void Snake::play()
{
    _obs.x = 10;
    _obs.y = 10;

    _timer += 100;
    if (_graphicLib->isKeyLeftPressed())
        _currentDirection = LEFT;
    if (_graphicLib->isKeyRightPressed())
        _currentDirection = RIGTH;
    if (_graphicLib->isKeyUpPressed())
        _currentDirection = UP;
    if (_graphicLib->isKeyDownPressed())
        _currentDirection = DOWN;

    if (_graphicLib->isKeyLibChangedPressed())
        this->_graphicLib = NULL;
    if (_timer / 100000 > _delay)
    {
        _timer = 0;
        this->eventManager();
    }
    this->display();
}

Snake::~Snake()
{
}

extern "C"
{
    Snake *loadGame()
    {
        return new Snake;
    }
}