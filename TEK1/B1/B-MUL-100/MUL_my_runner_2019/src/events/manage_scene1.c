/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** manage_scene1
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

void manage_scene1(game_t *game, int x, int y)
{
    if ((x >= 225 && x <= 385) && (y >= 245 && y <= 310))
        game->scene = 2;
    if ((x >= 225 && x <= 415) && (y >= 385 && y <= 445))
        sfRenderWindow_close(game->screen.window);
}