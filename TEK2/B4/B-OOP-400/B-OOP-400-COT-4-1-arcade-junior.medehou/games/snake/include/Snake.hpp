/*
** EPITECH PROJECT, 2021
** 04 Snake
** File description:
** Snake
*/

#ifndef SNAKE_HPP_
#define SNAKE_HPP_
    #include <SFML/Graphics.hpp>
    #include <time.h>
    #include "../../../include/IGame.hpp"

using namespace sf;

class Square
{
private:
    /* data */
public:
    int x, y;
};


class Snake : public IGame
{
public:
    enum Direction
    {
        UP,
        DOWN,
        LEFT,
        RIGTH
    };

    Snake();
    ~Snake();
    void eventManager() override;
    void display() override;
    void play() override;
    void setLib(ILib *lib) override;
    std::string getGameName() override;

protected:
private:
    int _currentDirection;
    int _startingNbrRect = 4;
    Square _snake[100];
    Square _obs;
    float _time;
    float _timer = 0, _delay = 0.1;
    
    int _N = 30, _M = 20;
    int _size = 25;
    
};

#endif /* !SNAKE_HPP_ */
