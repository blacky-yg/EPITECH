/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** resume
*/

#include "../../include/defender.h"

void resume(game_t *game)
{
    sfRenderWindow_clear(game->screen.window, sfBlack);
    draw_pause_text(game);
    sfRenderWindow_display(game->screen.window);
}