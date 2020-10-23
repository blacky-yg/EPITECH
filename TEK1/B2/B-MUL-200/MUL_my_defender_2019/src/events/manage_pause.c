/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** manage_pause
*/

#include "../../include/defender.h"

void manage_pause(game_t *game, int x, int y)
{
    if ((x >= 500 && x <= 870) && (y >= 365 && y <= 430)) {
        sfSound_play(game->sound.back_click);
        game->scene = 1;
    }
    if ((x >= 550 && x <= 885) && (y >= 225 && y <= 290)) {
        sfSound_play(game->sound.click);
        game->scene = 2;
    }
    if ((x >= 590 && x <= 765) && (y >= 500 && y <= 570)) {
        sfSound_play(game->sound.back_click);
        sfRenderWindow_close(game->screen.window);
    }
}