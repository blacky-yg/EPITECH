/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Menu
*/

#include "Engine.hpp"

Menu::Menu()
{
    _scene_type = MENU;
    _width = 1350;
    _height = 690;
    _music = std::make_shared<Audio>(ASSETS_PATH"music/menu_music.mp3");
    _background = std::make_shared<Picture>(ASSETS_PATH"menu/back.png");
    _title = std::make_shared<Picture>(ASSETS_PATH"menu/title2.png");
    _button_new_game = std::make_shared<Button>(ASSETS_PATH"buttons/newgame.png");
    _button_load_game = std::make_shared<Button>(ASSETS_PATH"buttons/loadgame.png");
    _button_help = std::make_shared<Button>(ASSETS_PATH"buttons/controls.png");
    _button_settings = std::make_shared<Button>(ASSETS_PATH"buttons/options.png");
    _button_exit = std::make_shared<Button>(ASSETS_PATH"buttons/exit.png");
}

Menu::~Menu()
{
}

void Menu::init()
{
    _manager = SceneManager::getInstance();
    ShowCursor();
    _music->init(0, 0, 0, 0);
    _background->init(1, 1, 1, 1);
    _title->init(300, 10, 1, 1);
    _button_new_game->init(100, 227, 283, 438);
    _button_load_game->init(100, 329, 384, 462);
    _button_help->init(100, 435, 482, 437);
    _button_settings->init(100, 531,  578, 411);
    _button_exit->init(100, 627, 681, 317);
}

void Menu::draw()
{
    _background->draw((int)_background->getPos().x, (int)_background->getPos().y);
    _music->draw(0, 0);
    _title->draw((int)_title->getPos().x, (int)_title->getPos().y);
    _button_new_game->draw((int)_button_new_game->getPos().x, (int)_button_new_game->getPos().y);
    _button_load_game->draw((int)_button_load_game->getPos().x, (int)_button_load_game->getPos().y);
    _button_help->draw((int)_button_help->getPos().x, (int)_button_help->getPos().y);
    _button_settings->draw((int)_button_settings->getPos().x, (int)_button_settings->getPos().y);
    _button_exit->draw((int)_button_exit->getPos().x, (int)_button_exit->getPos().y);
    if (_button_new_game->set_action() == true)
       _manager->_scene_type = GAME_MODE;
    if (_button_load_game->set_action() == true)
       _manager->_scene_type = LOAD_GAME;
    if (_button_settings->set_action() == true )
        _manager->_scene_type = SETTINGS;
    if (_button_help->set_action() == true)
        _manager->_scene_type = HELP;
    if (_button_exit->set_action() == true)
        _manager->_scene_type = EXIT;
}

void Menu::destroy()
{
    _music->destroy();
    _background->destroy();
    _title->destroy();
    _button_new_game->destroy();
    _button_load_game->destroy();
    _button_help->destroy();
    _button_settings->destroy();
    _button_exit->destroy();
}

std::string Menu::return_player1()
{
    std::string name;
    return name;
}

std::string Menu::return_player2()
{
   std::string name;
    return name;
}

int Menu::get_mode()
{
    int mode = 0;
    return mode;
}

void Menu::set_mode(int mode)
{
}