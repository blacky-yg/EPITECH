/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** GameOver
*/

#include "Engine.hpp"

GameOver::GameOver()
{
    _scene_type = GAMEOVER;
    _background = std::make_shared<Picture>(ASSETS_PATH"menu/gameover.png");
    _button_back = std::make_shared<Button>(ASSETS_PATH"buttons/back.png");
    _music = std::make_shared<Audio>(ASSETS_PATH"sounds/lose.mp3");
}

GameOver::~GameOver()
{
}

void GameOver::init()
{
    _manager = SceneManager::getInstance();
     _music->init(0, 0, 0, 0);
    _background->init(1, 1, 1, 1);
    _button_back->init(1000, 520, 567, 1311);
}

void GameOver::draw()
{
    _background->draw((int)_background->getPos().x, (int)_background->getPos().y);
    _button_back->draw((int)_button_back->getPos().x, (int)_button_back->getPos().y);
    _music->draw(0,0);
    if (_button_back->set_action() == true)
        _manager->_scene_type = MENU;
}

void GameOver::destroy()
{
    _music->destroy();
    _background->destroy();
    _button_back->destroy();
}

std::string GameOver::return_player1()
{
    std::string name;
    return name;
}

std::string GameOver::return_player2()
{
   std::string name;
    return name;
}

int GameOver::get_mode()
{
    int mode = 0;
    return mode;
}

void GameOver::set_mode(int mode)
{
}