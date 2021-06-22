/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Load
*/

#include "Engine.hpp"

Load::Load()
{
    _scene_type = LOAD_GAME;
    _background = std::make_shared<Picture>(ASSETS_PATH"menu/coming.png");
     _button_back = std::make_shared<Button>(ASSETS_PATH"buttons/back.png");
}

Load::~Load()
{
}

void Load::init()
{
    _manager = SceneManager::getInstance();
    _background->init(1, 1, 1, 1);
    _button_back->init(1000, 520, 567, 1311);
}

void Load::draw()
{
    _background->draw((int)_background->getPos().x, (int)_background->getPos().y);
    _button_back->draw((int)_button_back->getPos().x, (int)_button_back->getPos().y);
    
    if (_button_back->set_action() == true)
        _manager->_scene_type = MENU;
}

void Load::destroy()
{
    _background->destroy();
    _button_back->destroy();
}

std::string Load::return_player1()
{
    std::string name;
    return name;
}

std::string Load::return_player2()
{
   std::string name;
    return name;
}

int Load::get_mode()
{
    int mode = 0;
    return mode;
}

void Load::set_mode(int mode)
{
}