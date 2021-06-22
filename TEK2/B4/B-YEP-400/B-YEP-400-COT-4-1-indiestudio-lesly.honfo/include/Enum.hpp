/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Enum
*/

#pragma once

#include "Headers.hpp"

namespace studio {
    /**
     * @brief all the scene type of the game
     * 
     */
    typedef enum SCENE {
        SPLASHSCREEN,
        MENU,
        NEW_GAME,
        GAME_MODE,
        LOAD_GAME,
        HELP,
        SETTINGS,
        PAUSE,
        GAMEWIN,
        GAMEOVER,
        EXIT,
        PLAYER_MODE
    } SCENE;
};