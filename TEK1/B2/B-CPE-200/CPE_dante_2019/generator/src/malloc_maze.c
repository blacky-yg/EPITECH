/*
** EPITECH PROJECT, 2020
** dante
** File description:
** malloc_maze
*/

#include "../include/generator.h"

char **malloc_maze(maze_t *maze)
{
    int i = 0;

    maze->map = (char **)malloc(sizeof(char *) * (maze->y + 1));
    if (maze->map == NULL)
        exit(84);
    for (; i < maze->y; i++) {
        maze->map[i] = (char *)malloc(sizeof(char) * (maze->x + 1));
        if (maze->map[i] == NULL)
            exit(84);
    }
    maze->map[i] = NULL;
    return (maze->map);
}