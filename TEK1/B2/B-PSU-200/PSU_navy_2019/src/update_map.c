/*
** EPITECH PROJECT, 2020
** navy
** File description:
** update_map
*/

#include "../include/navy.h"

void update_map(GAME *game, int hit, char *move)
{
    char to_put = 0;
    int row = move[1] - 48;
    int col = move[0] - 64;

    if (hit == TOUCHED)
        to_put = 'x';
    else if (hit == MISSED)
        to_put = 'o';
    game->map[row][col] = to_put;
    game->map2[row][col] = to_put;
}