/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** manage_scene2
*/

#include "../include/my.h"
#include "../include/my_runner.h"

void manage_scene2(game_t *game, int x, int y)
{
    if ((x >= 1085 && x <= 1320) && (y >= 630 && y <= 715))
        game->scene = 1;
}