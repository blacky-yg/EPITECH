/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** manage_menu
*/

#include "../../include/defender.h"

void manage_menu(game_t *game, int x, int y)
{
    if ((x >= 60 && x <= 245) && (y >= 220 && y <= 270)) {
        sfSound_play(game->sound.click);
        game->scene = 2;
    }
    if ((x >= 65 && x <= 380) && (y >= 350 && y <= 410)) {
        sfSound_play(game->sound.click);
        game->scene = 3;
    }
    if ((x >= 60 && x <= 175) && (y >= 500 && y <= 550)) {
        sfSound_play(game->sound.click);
        sfRenderWindow_close(game->screen.window);
    }
}