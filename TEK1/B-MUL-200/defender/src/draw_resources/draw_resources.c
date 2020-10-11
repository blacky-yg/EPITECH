/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** draw_resources
*/

#include "../../include/defender.h"

void draw_resources(game_t *game)
{
    if (game->scene == 1)
        menu(game);
    if (game->scene == 2)
        play(game);
    if (game->scene == 3)
        help(game);
    if (game->scene == 4)
        resume(game);
}