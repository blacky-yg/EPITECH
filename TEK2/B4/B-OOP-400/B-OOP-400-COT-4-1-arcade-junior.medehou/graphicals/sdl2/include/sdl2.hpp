/*
** EPITECH PROJECT, 2021
** Project
** File description:
** sdl2
*/

#ifndef SDL2_HPP_
#define SDL2_HPP_
#include <SDL2/SDL.h>
#include "../../../include/ILib.hpp"

class  LibSDL : public ILib
{
private:
    SDL_Window *_window;
    SDL_Surface *_window_surface;
    bool _keep_window_open;
    SDL_Event _e;

public:
    LibSDL();
    void init() override;
    void run() override;
    void setGame(IGame *game) override;
    void drawSimpleRectOnWindow(int x, int y) override;
    void drawRedRectOnWindow(int x, int y) override;
    bool isKeyDownPressed() override;
    bool isKeyLeftPressed() override;
    bool isKeyRightPressed() override;
    bool isKeyUpPressed() override;
    bool isKeyEnterPressed() override;
    void getPlayerName() override;
    void setPlayerName() override;
    bool isKeyLibChangedPressed() override;
    void showMenu() override;
    ~LibSDL();
};

#endif /* !SDL2_HPP_ */
