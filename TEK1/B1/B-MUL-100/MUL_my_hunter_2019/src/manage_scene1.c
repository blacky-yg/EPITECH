/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** manage_scene1
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void manage_scene1(game_t *game, int x, int y)
{
    if ((x >= 30 && x <= 170) && (y >= 260 && y <= 330))
        game->scene = 2;
    if ((x >= 30 && x <= 170) && (y >= 360 && y <= 430))
        game->scene = 3;
    if ((x >= 30 && x <= 160) && (y >= 460 && y <= 530))
        sfRenderWindow_close(game->screen.window);
}