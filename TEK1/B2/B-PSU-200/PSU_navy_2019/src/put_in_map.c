/*
** EPITECH PROJECT, 2020
** navy
** File description:
** put_in map
*/

#include "../include/navy.h"

extern GLOBAL DOALL;

int put_on_map(char *pos, GAME *game)
{
    int i = 0;
    COORD map;

    map.to_put = pos[0];
    map.col1 = pos[2] - 64;
    map.row1 = pos[3] - 48;
    map.col2 = pos[5] - 64;
    map.row2 = pos[6] - 48;
    if (map.col1 == map.col2) {
        if ((map.row2 - map.row1) + 1 != (pos[0] - 48))
            return (1);
        for (i = map.row1; i <= map.row2; i++)
            game->map[i][map.col1] = map.to_put;
    } else if (map.row1 == map.row2) {
        if ((map.col2 - map.col1) + 1 != (pos[0] - 48))
            return (1);
        for (i = map.col1; i <= map.col2; i++)
            game->map[map.row1][i] = map.to_put;
    }
    return (0);
}