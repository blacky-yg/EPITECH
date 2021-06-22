/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Play
*/

#include "Engine.hpp"
using namespace std::chrono_literals;

NewGame::NewGame()
{
    _scene_type = NEW_GAME;
    _player = std::make_shared<Player>(ASSETS_PATH"player/whole_player.png");
    _map = std::make_shared<Map>(ASSETS_PATH"map/bedrock.png");
    _background = std::make_shared<Picture>(ASSETS_PATH"map/wall.png");
    _music = std::make_shared<Audio>(ASSETS_PATH"music/game_load.mp3");
    _enemy = std::make_shared<Enemy>(ASSETS_PATH"player/whole_player.png");
    _bot = std::make_shared<Bot>(ASSETS_PATH"enemy/Wizard/whole_wizard.png");
    _handle_player = std::make_shared<GameMode>();
}

NewGame::~NewGame()
{
}

void NewGame::init()
{
    _manager = SceneManager::getInstance();
    _music->init(0, 0, 0, 0);
    _bot->init(500.0f, 300.0f,  static_cast<float>(1200/8),  static_cast<float>(1200/8));
    _enemy->init(950.0f, 230.0f, static_cast<float>(512/4), static_cast<float>(512/8));
    _player->init(290.0f, 220.0f, static_cast<float>(512/4), static_cast<float>(512/8));
    _camera = {0,0,0,0,0,0,0,0,0,0,0};
    _camera.position.x = 1.74638f;
    _camera.position.y = 5.7735f;
    _camera.position.z = 14.0339f;
    _camera.position = (Vector3)(_camera.position);
    _camera.target.x = 0.0f;
    _camera.target.y = 0.0f;
    _camera.target.z = 0.0f;
    _camera.target = (Vector3)(_camera.target);
    _camera.up.x = 0.0f;
    _camera.up.y = 1.0f;
    _camera.up.z = 0.0f;
    _camera.up = (Vector3)(_camera.up);
    _camera.fovy = 45.0f;
    _camera.projection = CAMERA_PERSPECTIVE;         // Camera mode type
    _map->init(100, 100, 100, 100);
    _background->init(0, 0, 1, 1);
    _gametime = 00.30;
    _score = 0;
    _highScore = 0;
    _number_bomb = 5;
    _lives = 3;
    mode = 0;
}

void NewGame::draw_info()
{
    DrawText(TextFormat("Time: %02.02f", _gametime), 100, 20, 30, MAROON);
    DrawText(TextFormat("Score: %04i", _score), 300, 20, 30, DARKPURPLE);
    DrawText(TextFormat("Bombs: %02i", _number_bomb), 550, 20, 30, DARKBLUE);
    DrawText(_handle_player->return_player1().c_str(), 50, 20, 20, DARKBLUE);
    DrawText(TextFormat("Lives: %02i ", _lives), 750, 20, 30, ORANGE);
    DrawText(TextFormat("High Score: %04i ", _highScore), 950, 20, 30, DARKGREEN);
    _gametime = _gametime - 0.01;
    std::this_thread::sleep_for(1s);
}

void NewGame::draw()
{
    if (_manager->get_pause() == 0) {
       // UpdateCamera(&_camera);
        //_music->draw(0, 0);
       ClearBackground(RAYWHITE);

       BeginMode3D(_camera);
           _map->draw((int)_map->getPos().x, (int)_map->getPos().y);
       EndMode3D();
      // std::cout << "new game" << _handle_player->get_mode() << std::endl;
        if (mode == 1)
            _enemy->draw(700.0f, 500.0f);
        else
            _bot->draw(525.0f, 390.0f);
       _player->draw(350.0f, 280.0f);
       draw_info();
       if (IsKeyDown(KEY_P) == true) 
           _manager->set_pause(1);
       if (_gametime <= 00.00){
           _gametime = 00.20;
            _manager->_scene_type = GAMEOVER;
       }
    }
}

void NewGame::destroy()
{
    _player->destroy();
    _map->destroy();
    _music->destroy();
    _background->destroy();
    _enemy->destroy();
    _handle_player->destroy();
}

std::string NewGame::return_player1()
{
    std::string name;
    return name;
}

std::string NewGame::return_player2()
{
    std::string name;
    return name;
}

int NewGame::get_mode()
{
    int mode = 0;
    return mode;
}

void NewGame::set_mode(int modes)
{
    mode = modes;
}