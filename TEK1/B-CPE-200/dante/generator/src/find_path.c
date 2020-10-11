/*
** EPITECH PROJECT, 2020
** dante
** File description:
** find_path
*/

#include "../include/generator.h"

char **find_path(maze_t *maze)
{
    int j = 0, i = 1, x = 0, mid = (maze->x / 2) - 1;
    if (mid % 2 == 0)
        mid = mid + 1;
    for (; j < maze->y; j++) {
        for (x = 0; i < maze->x && x < mid && x < maze->x; x++, i++) {
            maze->map[j][i] = '*';
            if (x == mid)
                break;
        } if (x == mid) {
            for (x = 0; j < maze->y && x < maze->y && x < maze->y; x++, j++)
                maze->map[j][i] = '*';
            if (x == (maze->y - 1))
                break;
        }
    } if (j > (maze->y) && i < (maze->x - 1)) {
        for (;i < (maze->x - 1); i++)
            maze->map[j - 2][i] = '*';
    }
    return (maze->map);
}

char **re_find_path(maze_t *maze)
{
    int j = 0, i = 0;
    if (maze->x == 2 && maze->y == 2)
        maze->map[1][0] = 'X';
    if (maze->perfect == false)
        maze->map[1][0] = 'X';
    return (maze->map);
}
