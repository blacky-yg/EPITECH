/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** GameMode
*/

#include "Engine.hpp"

GameMode::GameMode()
{
    _scene_type = GAME_MODE;
    _background = std::make_shared<Picture>(ASSETS_PATH"menu/back_mode.png");
    _button_back = std::make_shared<Button>(ASSETS_PATH"buttons/back.png");
    _button_mode1 = std::make_shared<Button>(ASSETS_PATH"buttons/solo.png");
    _button_mode2 = std::make_shared<Button>(ASSETS_PATH"buttons/mode1.png");
    _mode =  std::make_shared<Button>(ASSETS_PATH"buttons/mode.png");
}

GameMode::~GameMode()
{
}

void GameMode::init()
{
    _manager = SceneManager::getInstance();
    _mode->init(470, 30, 1, 1);
    _background->init(1, 1, 1, 1);
    _button_back->init(1025, 550, 630, 1220);
    _button_mode1->init(100, 300, 379, 523);
    _button_mode2->init(650, 300, 395, 1103);
    _state = 0;
    letterCount = 0; 
    letterCount2 = 0;
    state_player = 0;
    mode = 0;
}


std::string GameMode::get_player_name()
{
   
    int  frame = 0;

    Rectangle textBox = {1350/2 - 100, 180, 225, 50 };
    bool mouseOnText = false;

     if (CheckCollisionPointRec(GetMousePosition(), textBox)) mouseOnText = true;
        else mouseOnText = false;

    if (mouseOnText){
        SetMouseCursor(MOUSE_CURSOR_IBEAM);
        int key = GetCharPressed();
        while (key > 0) {
            if ((key >= 32) && (key <= 125) && (letterCount < MAX_CHARS)) {
                _name1[letterCount] = (char)key;
                _name1[letterCount+1] = '\0';
                letterCount++;
            }
            key = GetCharPressed();  // Check next character in the queue
        }
        if (IsKeyPressed(KEY_BACKSPACE)) {
            letterCount--;
            if (letterCount < 0) letterCount = 0;
            _name1[letterCount] = '\0';
        }
        if (IsKeyPressed(KEY_ENTER)) {
            _manager->_scene_type = NEW_GAME;
            return _name1;
        }
    }
    else SetMouseCursor(MOUSE_CURSOR_DEFAULT);

    if (mouseOnText) frame++;
    else frame = 0;
    DrawRectangleRec(textBox, LIGHTGRAY);
    if (mouseOnText) DrawRectangleLines(textBox.x, textBox.y, textBox.width, textBox.height, RED);
    else DrawRectangleLines(textBox.x, textBox.y, textBox.width, textBox.height, DARKGRAY);

    DrawText(_name1, textBox.x + 5, textBox.y + 8, 40, MAROON);

    DrawText(TextFormat("Player 1 Name: %i/%i", letterCount, 9), 315, 200, 25, DARKGRAY);

    if (mouseOnText)
    {
        if (letterCount < MAX_CHARS) 
            if (((frame/20)%2) == 0) DrawText("_", textBox.x + 8 + MeasureText(_name1, 40), textBox.y + 12, 40, MAROON);
        else DrawText("Press BACKSPACE to delete chars...", 230, 300, 20, GRAY);
    }
    return _name1;
}

std::string GameMode::get_player1_name()
{
   
    int  frame = 0;

    Rectangle textBox = {1350/2 - 100, 180, 225, 50 };
    bool mouseOnText = false;

     if (CheckCollisionPointRec(GetMousePosition(), textBox)) mouseOnText = true;
        else mouseOnText = false;

    if (mouseOnText){
        SetMouseCursor(MOUSE_CURSOR_IBEAM);
        int key = GetCharPressed();
        while (key > 0) {
            if ((key >= 32) && (key <= 125) && (letterCount < MAX_CHARS)) {
               _name1[letterCount] = (char)key;
                _name1[letterCount+1] = '\0';
                letterCount++;
            }
            key = GetCharPressed();  // Check next character in the queue
        }
        if (IsKeyPressed(KEY_BACKSPACE)) {
            letterCount--;
            if (letterCount < 0) letterCount = 0;
            _name1[letterCount] = '\0';
        }
        if (IsKeyPressed(KEY_ENTER)) {
            state_player = 1;
            return (_name1);
        }
    }
    else SetMouseCursor(MOUSE_CURSOR_DEFAULT);

    if (mouseOnText) frame++;
    else frame = 0;
    DrawRectangleRec(textBox, LIGHTGRAY);
    if (mouseOnText) DrawRectangleLines(textBox.x, textBox.y, textBox.width, textBox.height, RED);
    else DrawRectangleLines(textBox.x, textBox.y, textBox.width, textBox.height, DARKGRAY);

    DrawText(_name1, textBox.x + 5, textBox.y + 8, 40, MAROON);

    DrawText(TextFormat("Player 1 Name: %i/%i", letterCount, 9), 315, 200, 25, DARKGRAY);

    if (mouseOnText)
    {
        if (letterCount < MAX_CHARS) 
            if (((frame/20)%2) == 0) DrawText("_", textBox.x + 8 + MeasureText(_name1, 40), textBox.y + 12, 40, MAROON);
        else DrawText("Press BACKSPACE to delete chars...", 230, 300, 20, GRAY);
    }
    return _name1;
}

std::string GameMode::get_player2_name()
{
   
    int  frame = 0;
    Rectangle textBox = {1350/2 - 100, 180, 225, 50 };
    bool mouseOnText = false;

     if (CheckCollisionPointRec(GetMousePosition(), textBox)) mouseOnText = true;
        else mouseOnText = false;

    if (mouseOnText){
        SetMouseCursor(MOUSE_CURSOR_IBEAM);
        int key = GetCharPressed();
        while (key > 0) {
            if ((key >= 32) && (key <= 125) && (letterCount2 < MAX_CHARS)) {
                _name2[letterCount2] = (char)key;
                _name2[letterCount2+1] = '\0';
                letterCount2++;
            }
            key = GetCharPressed();  // Check next character in the queue
        }
        if (IsKeyPressed(KEY_BACKSPACE)) {
            letterCount2--;
            if (letterCount2 < 0) letterCount2 = 0;
            _name2[letterCount2] = '\0';
        }
        if (IsKeyPressed(KEY_ENTER)) {
            _manager->_scene_type = NEW_GAME;
            return _name2;
        }
    }
    else SetMouseCursor(MOUSE_CURSOR_DEFAULT);

    if (mouseOnText) frame++;
    else frame = 0;
    DrawRectangleRec(textBox, LIGHTGRAY);
    if (mouseOnText) DrawRectangleLines(textBox.x, textBox.y, textBox.width, textBox.height, RED);
    else DrawRectangleLines(textBox.x, textBox.y, textBox.width, textBox.height, DARKGRAY);

    DrawText(_name2, textBox.x + 5, textBox.y + 8, 40, MAROON);

    DrawText(TextFormat("Player 2 Name: %i/%i", letterCount2, 9), 315, 200, 25, DARKGRAY);

    if (mouseOnText)
    {
        if (letterCount2 < MAX_CHARS) 
            if (((frame/20)%2) == 0) DrawText("_", textBox.x + 8 + MeasureText(_name2, 40), textBox.y + 12, 40, MAROON);
        else DrawText("Press BACKSPACE to delete chars...", 230, 300, 20, GRAY);
    }
    return _name2;
}

void GameMode::player_mode()
{
    if (state_player == 0)
        _player1 = get_player1_name() ;
    else
        _player2 = get_player2_name();
}

void GameMode::solo_mode()
{
 _player1 = get_player_name() ;
}

void GameMode::draw()
{
    _background->draw((int)_background->getPos().x, (int)_background->getPos().y);
    _button_back->draw((int)_button_back->getPos().x, (int)_button_back->getPos().y);
    _button_mode1->draw((int)_button_mode1->getPos().x, (int)_button_mode1->getPos().y);
    _button_mode2->draw((int)_button_mode2->getPos().x, (int)_button_mode2->getPos().y);
    _mode->draw((int)_mode->getPos().x, (int)_mode->getPos().y);
    
    if (_button_back->set_action() == true)
        _manager->_scene_type = MENU;
    if (_button_mode1->set_action() == true) 
        _state = 1;
    if (_button_mode2->set_action() == true)
        _state = 2;
    if (_state == 1)
        solo_mode();
    if (_state == 2) {
        player_mode();
        mode = 1;
    }
}

std::string GameMode::return_player1()
{
    return _player1;
}

std::string GameMode::return_player2()
{
    return _player2;
}

void GameMode::destroy()
{
    _background->destroy();
    _button_back->destroy();
    _button_mode1->destroy();
    _button_mode2->destroy();
    _mode->destroy();
}

int GameMode::get_mode()
{
    return mode;
}

void GameMode::set_mode(int modes)
{
    mode = modes;
}