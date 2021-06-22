/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Engine
*/

#include "Engine.hpp"

Engine::Engine(int width, int height)
{
    _manager->_width = width;
    _manager->_height = height;
}

Engine::~Engine()
{
}

void Engine::launch()
{
    InitWindow(1350, 690, "Bomberman");
    InitAudioDevice();
    SetTargetFPS(60);

    this->_manager->init_game();

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(ORANGE);
        if (_manager->draw_game() == 84)
            break;
        EndDrawing();
    }   
    this->_manager->delete_game();
    CloseAudioDevice(); 
    CloseWindow();
}