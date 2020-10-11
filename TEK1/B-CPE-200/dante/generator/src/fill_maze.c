/*
** EPITECH PROJECT, 2020
** dante
** File description:
** fill_maze
*/

#include "../include/generator.h"

char **fill_maze_perfect(maze_t *maze)
{
    int i = 0, j = 0, pce = 0;

    for (; j < maze->y; j++) {
        for (i = 0; i < maze->x; i++) {
            if (i % 2 == 0)
                maze->map[j][i] = '*';
            else if (i % 2 != 0)
                maze->map[j][i] = 'X';
        }
        maze->map[j][i] = '\0';
    }
    maze->map[0][0] = '*';
    maze->map[maze->y - 1][maze->x - 1] = '*';
    return (maze->map);
}

void go_everywhere(maze_t *maze, int j, int i)
{
    if (j % 2 != 0 && i % 2 != 0)
        maze->map[j][i] = '*';
    if (j % 2 == 0 && i % 2 == 0)
        maze->map[j][i] = 'X';
    else
        maze->map[j][i] = '*';
}

char **fill_maze_imperfect(maze_t *maze)
{
    int i = 0, j = 0, pce = 0;

    for (; j < maze->y; j++) {
        for (i = 0; i < maze->x; i++)
            go_everywhere(maze, j, i);
        maze->map[j][i] = '\0';
    }
    maze->map[0][0] = '*';
    maze->map[maze->y - 1][maze->x - 1] = '*';
    return (maze->map);
}
