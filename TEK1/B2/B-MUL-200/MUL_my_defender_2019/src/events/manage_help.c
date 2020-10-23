/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** manage_help
*/

#include "../../include/defender.h"

void manage_help(game_t *game, int x, int y)
{
    if ((x >= 40 && x <= 185) && (y >= 555 && y <= 610)) {
        sfSound_play(game->sound.back_click);
        game->scene = 1;
    }
}