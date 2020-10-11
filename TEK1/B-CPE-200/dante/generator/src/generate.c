/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generate
*/

#include "../include/generator.h"

int generate(int ac, char *av[], maze_t *maze)
{
    maze->x = my_getnbr(av[1]);
    maze->y = my_getnbr(av[2]);
    if (ac == 4) {
        if (!my_strcmp(av[3], "perfect"))
            maze->perfect = true;
        else
            return (1);
    } else
        maze->perfect = false;
    init_maze(maze);
    free_maze(maze);
    return (0);
}