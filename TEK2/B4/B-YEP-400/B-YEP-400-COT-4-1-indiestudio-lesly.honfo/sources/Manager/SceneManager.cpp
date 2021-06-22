/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** SceneManager
*/

#include "Engine.hpp"

SceneManager::SceneManager()
{
    _stop = 0;
    _scene_type = SPLASHSCREEN;
    _splashscreen = std::make_shared<SplashScreen>();
    _menu = std::make_shared<Menu>();
    _new_game = std::make_shared<NewGame>();
    _load_game = std::make_shared<Load>();
    _help = std::make_shared<Help>();
    _settings = std::make_shared<Settings>();
	_exit = std::make_shared<Exit>();
    _pause = std::make_shared<Pause>();
    _game_win = std::make_shared<GameWin>();
    _game_over = std::make_shared<GameOver>();
    _game_mode = std::make_shared<GameMode>();

}

SceneManager::~SceneManager()
{
}

void SceneManager::init_game()
{
    _splashscreen->init();
	_menu->init();
	_new_game->init();
	_load_game->init();
	_help->init();
	_settings->init();
	_exit->init();
	_pause->init();
	_game_win->init();
	_game_over->init();
    _game_mode->init();
}

int SceneManager::draw_game()
{
    if (_scene_type == SPLASHSCREEN)
        _splashscreen->draw();
    if (_scene_type == MENU)
	  	  _menu->draw();
    if (_scene_type == HELP)
  		  _help->draw();
    if (_scene_type == SETTINGS)
        _settings->draw();
    if (_stop == 1)
        _pause->draw();
    if (_scene_type == GAMEWIN)
        _game_win->draw();
    if (_scene_type == GAMEOVER)
        _game_over->draw();
    if (_scene_type == NEW_GAME) {
        _new_game->set_mode(_game_mode->get_mode());
        _new_game->draw();
    }
    if (_scene_type == LOAD_GAME)
        _load_game->draw();
    if (_scene_type == EXIT)
        return (84);
    if (_scene_type == GAME_MODE)
        _game_mode->draw();
   
    return (0);
}

void SceneManager::delete_game()
{
    _splashscreen->destroy();
    _menu->destroy();
    _new_game->destroy();
    _load_game->destroy();
    _help->destroy();
    _settings->destroy();
    _pause->destroy();
    _game_win->destroy();
    _game_over->destroy();
    _exit->destroy();
    _game_mode->destroy();
}

void SceneManager::set_pause(int pause)
{
    _stop = pause;
}

int SceneManager::get_pause()
{
    return _stop;
}