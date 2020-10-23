/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** manage_return_menu
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void manage_return_menu(game_t *game, int x, int y)
{
    if ((x >= 650 && x <= 785) && (y >= 630 && y <= 690)) {
        game->score = 0;
        game->bird.pos_x = 0;
        game->bird.pos_y = 0;
        game->scene = 1;
        my_putstr("New Game\n");
    }
}