/*
** EPITECH PROJECT, 2020
** dante
** File description:
** init_maze
*/

#include "../include/generator.h"

void init_maze(maze_t *maze)
{
    maze->map = malloc_maze(maze);
    if (maze->perfect == true) {
        maze->map = fill_maze_perfect(maze);
        maze->map = find_path(maze);
        maze->map = re_find_path(maze);
        display_maze(maze);
    } else {
        maze->map = fill_maze_imperfect(maze);
        maze->map = find_path(maze);
        maze->map = re_find_path(maze);
        display_maze(maze);
    }
}
