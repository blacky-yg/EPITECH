/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Pause
*/

#include "Engine.hpp"

Pause::Pause()
{
    _scene_type = PAUSE;
    _background = std::make_shared<Picture>(ASSETS_PATH"menu/back_pause.png");
    _back_game = std::make_shared<Button>(ASSETS_PATH"buttons/back_game.png");
    _save = std::make_shared<Button>(ASSETS_PATH"buttons/save.png");
    _quit = std::make_shared<Button>(ASSETS_PATH"buttons/quit.png");
}

Pause::~Pause()
{
}

void Pause::init()
{
    _manager = SceneManager::getInstance();
    _back_game->init(400, 150, 227, 922);
    _save->init(400, 350, 430, 945);
    _quit->init(450, 550, 630, 645);
    _background->init(1, 1, 1, 1);
}

void Pause::draw()
{
    _background->draw((int)_background->getPos().x, (int)_background->getPos().y);
    _back_game->draw((int)_back_game->getPos().x, (int)_back_game->getPos().y);
    _save->draw((int)_save->getPos().x, (int)_save->getPos().y);
    _quit->draw((int)_quit->getPos().x, (int)_quit->getPos().y);
    if (_back_game->set_action() == true)
       _manager->set_pause(0);
    if (_save->set_action() == true)
       _manager->_scene_type = EXIT;
    if (_quit->set_action() == true )
        _manager->_scene_type = EXIT;
}

void Pause::destroy()
{
    _background->destroy();
    _back_game->destroy();
    _save->destroy();
    _quit->destroy();

}

std::string Pause::return_player1()
{
    std::string name;
    return name;
}

std::string Pause::return_player2()
{
   std::string name;
    return name;
}

int Pause::get_mode()
{
    int mode = 0;
    return mode;
}

void Pause::set_mode(int mode)
{
}