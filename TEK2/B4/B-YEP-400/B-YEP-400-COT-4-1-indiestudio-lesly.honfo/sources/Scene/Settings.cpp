/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Settings
*/

#include "Engine.hpp"

Settings::Settings()
{
    _scene_type = SETTINGS;
    _background = std::make_shared<Picture>(ASSETS_PATH"menu/back-setting.png");
    _title = std::make_shared<Picture>(ASSETS_PATH"buttons/options.png");
    _button_back = std::make_shared<Button>(ASSETS_PATH"buttons/back.png");
}

Settings::~Settings()
{
}

void Settings::init()
{
    _manager = SceneManager::getInstance();
    _background->init(1, 1, 1, 1);
    _title->init(450, 30, 1, 1);
    _button_back->init(1000, 520, 567, 1311);
}

void Settings::display_sounds()
{
    Vector2 mouse_pos = GetMousePosition();
    DrawText("Sounds", 190, 200, 50, RAYWHITE);
    DrawText("ON", 560, 200, 50, MAROON);
    DrawText("/", 650, 200, 50, RAYWHITE);
    DrawText("OFF", 700, 200, 50, YELLOW);

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) 
        && (mouse_pos.x >= 560 && mouse_pos.x <= 640)
            && (mouse_pos.y >= 200 && mouse_pos.y <= 250)) {
        std::cout << "sound on" << std::endl;
        //play music here
    } else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) 
        && (mouse_pos.x >= 700 && mouse_pos.x <= 780)
            && (mouse_pos.y >= 200 && mouse_pos.y <= 250)) {
        //stop playing music here
        std::cout << "sound off" << std::endl;
    }
}

void Settings::display_volume()
{
    Vector2 mouse_pos = GetMousePosition();
    DrawText("Volume", 190, 350, 50, RAYWHITE);
    DrawText("+", 560, 350, 70, MAROON);
    DrawText("/", 620, 350, 50, RAYWHITE);
    DrawText("-", 680, 350, 70, YELLOW);

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) 
        && (mouse_pos.x >= 560 && mouse_pos.x <= 620)
            && (mouse_pos.y >= 350 && mouse_pos.y <= 400)) {
        //play music here
        std::cout << "sound ++" << std::endl;
    }  else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) 
        && (mouse_pos.x >= 680 && mouse_pos.x <= 750)
            && (mouse_pos.y >= 350 && mouse_pos.y <= 400)) {
        //stop playing music here
        std::cout << "sound --" << std::endl;
    }

    _manager = SceneManager::getInstance();
}

void Settings::draw()
{
    _background->draw((int)_background->getPos().x, (int)_background->getPos().y);
    _button_back->draw((int)_button_back->getPos().x, (int)_button_back->getPos().y);
    _title->draw((int)_title->getPos().x, (int)_title->getPos().y);

    display_sounds();
    display_volume();
    if (_button_back->set_action() == true && _manager->_scene_type == SETTINGS)
        _manager->_scene_type = MENU;
}

void Settings::destroy()
{
    _title->destroy();
    _background->destroy();
    _button_back->destroy();
}

std::string Settings::return_player1()
{
    std::string name;
    return name;
}

std::string Settings::return_player2()
{
   std::string name;
    return name;
}

int Settings::get_mode()
{
    int mode = 0;
    return mode;
}

void Settings::set_mode(int mode)
{
}