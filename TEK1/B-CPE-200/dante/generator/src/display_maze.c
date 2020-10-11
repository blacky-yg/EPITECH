/*
** EPITECH PROJECT, 2020
** dante
** File description:
** display_maze
*/

#include "../include/generator.h"

void display_maze(maze_t *maze)
{
    for (int i = 0; i < maze->y; i++) {
        write(1, maze->map[i], maze->x);
        if (i != maze->y - 1)
            write(1, "\n", 1);
    }
}