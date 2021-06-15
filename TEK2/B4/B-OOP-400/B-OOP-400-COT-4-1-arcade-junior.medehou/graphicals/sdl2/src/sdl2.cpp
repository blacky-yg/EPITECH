/*
** EPITECH PROJECT, 2021
** sdl
** File description:
** func
*/

#include <SDL2/SDL.h>
#include <iostream>
#include "../include/sdl2.hpp"

LibSDL::LibSDL()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        exit(0);
    }

    this->_window = SDL_CreateWindow("SDL2 Window",
                                     SDL_WINDOWPOS_CENTERED,
                                     SDL_WINDOWPOS_CENTERED,
                                     680, 480,
                                     0);

    if (!this->_window)
    {
        exit(0);
    }
    this->_libName = "sdl2";
    this->_window_surface = SDL_GetWindowSurface(this->_window);
    this->_keep_window_open = true;
}

void LibSDL::setGame(IGame *game)
{
    _game = game;
}

void LibSDL::run()
{
    while (this->_keep_window_open)
    {

        while (SDL_PollEvent(&this->_e) > 0)
        {
            switch (this->_e.type)
            {
            case SDL_QUIT:
                this->_keep_window_open = false;
                break;
            }
            this->_game->play();
            SDL_UpdateWindowSurface(this->_window);
        }
    }
}

LibSDL::~LibSDL()
{
}

extern "C" {
    LibSDL *loadLib() {
        return new LibSDL();
    }
}