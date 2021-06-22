/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Splashscreen
*/

#include "Engine.hpp"

SplashScreen::SplashScreen()
{
    _width = 1350;
    _height = 690;
    _music = std::make_shared<Audio>(ASSETS_PATH"music/splash_music.mp3");
    _boy = std::make_shared<Picture>(ASSETS_PATH"menu/man1.png");
    _girl = std::make_shared<Picture>(ASSETS_PATH"menu/man2.png");
}

SplashScreen::~SplashScreen()
{
}

void SplashScreen::init()
{
    _manager = SceneManager::getInstance();
    _music->init(0, 0, 0, 0);
    HideCursor();
    _frame = 0;
    _counter = 0;
    _girl->init(50, 50, 600, 200);
    _boy->init(1000, 50, 600, 200);
}

void SplashScreen::draw()
{
    _counter += GetTime();
    _frame++;
    const char message[128] = "WELCOME TO OUR BOMBERMAN SPONSORISED BY EPITECH BENIN\nENJOY . . .";
    _music->draw(0, 0);
    if(_counter < 6000) {
        DrawText("BOMBERWOMAN", 500, 100, 50, MAROON);
        DrawText(TextSubtext(message, 0, _frame/10), 100, 300, 35, YELLOW);
    }
    else if (_counter >= 6000 && _counter < 10000) {
        _girl->draw((int)_girl->getPos().x, (int)_girl->getPos().y);
        _boy->draw((int)_boy->getPos().x, (int)_boy->getPos().y);
         DrawText("Copyright Basilia Hamidou Lesly Nery Florian Randall @EPITECH2021", 300, 600, 20, BLACK);
        if ((_frame/25)%2) DrawText(TextSubtext("LOADING ... GET READY ...", 0, _frame/10), 450, 300, 35, DARKBLUE);
    } 
    else
        _manager->_scene_type = MENU;

}

void SplashScreen::destroy()
{
    _boy->destroy();
    _girl->destroy();
     _music->destroy();
}

SCENE SplashScreen::get_scene_type()
{
    return _scene_type;
}

std::string SplashScreen::return_player1()
{
    std::string name;
    return name;
}

std::string SplashScreen::return_player2()
{
   std::string name;
    return name;
}

int SplashScreen::get_mode()
{
    int mode = 0;
    return mode;
}

void SplashScreen::set_mode(int mode)
{
}