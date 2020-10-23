/*
** EPITECH PROJECT, 2020
** dante
** File description:
** free_maze
*/

#include "../include/generator.h"

void free_maze(maze_t *maze)
{
    for (int i = 0; i < maze->y; i++)
        free(maze->map[i]);
    free(maze->map);
}