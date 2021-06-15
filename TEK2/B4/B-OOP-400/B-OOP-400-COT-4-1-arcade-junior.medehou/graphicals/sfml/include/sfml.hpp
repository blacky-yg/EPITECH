/*
** EPITECH PROJECT, 2021
** Project
** File description:
** sfml
*/


#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "../../../include/ILib.hpp"


using namespace sf;

class  LibSFML : public ILib
{
private:
    Event _event;
    RenderWindow _window;
    RectangleShape _snakeRect;
    RectangleShape _obsRect;
    int _size = 25;
    int _N = 30, _M = 20; // N and M are relative to the number of square I want to display
    int _w = _size * _N; // Screen's width
    int _h = _size * _M; // Screen's heigth
    bool _isMenuShow = true;

public:
    LibSFML();
    void init() override;
    void run() override;
    void showMenu() override;
    void setGame(IGame *game) override;
    void drawSimpleRectOnWindow(int x, int y) override;
    void drawRedRectOnWindow(int x, int y) override;
    bool isKeyDownPressed() override;
    bool isKeyLeftPressed() override;
    bool isKeyRightPressed() override;
    bool isKeyUpPressed() override;
    void getPlayerName() override;
    void setPlayerName() override;
    bool isKeyEnterPressed() override;
    bool isKeyLibChangedPressed() override;
    ~LibSFML();
};
