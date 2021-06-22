/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Help
*/

#include "Engine.hpp"

Help::Help()
{
    _scene_type = HELP;
    _background = std::make_shared<Picture>(ASSETS_PATH"menu/enemy.png");
    _button_back = std::make_shared<Button>(ASSETS_PATH"buttons/back.png");
}

Help::~Help()
{
}

void Help::init()
{
    _manager = SceneManager::getInstance();
    _background->init(1, 1, 1, 1);
    _button_back->init(1090, 520, 567, 1311);
}

void Help::draw()
{
    _background->draw((int)_background->getPos().x, (int)_background->getPos().y);
    _button_back->draw((int)_button_back->getPos().x, (int)_button_back->getPos().y);
    if (_button_back->set_action() == true && _manager->_scene_type == HELP)
        _manager->_scene_type = MENU;
}

void Help::destroy()
{
    _background->destroy();
    _button_back->destroy();
}

std::string Help::return_player1()
{
    std::string name;
    return name;
}

std::string Help::return_player2()
{
   std::string name;
    return name;
}

int Help::get_mode()
{
    int mode = 0;
    return mode;
}

void Help::set_mode(int mode)
{
}