/*
** EPITECH PROJECT, 2020
** dante
** File description:
** main
*/

#include "../include/generator.h"

int main(int ac, char **av)
{
    maze_t *maze = (maze_t *)malloc(sizeof(*maze));
    if (ac < 3 || ac > 4)
        return (84);
    else {
        if (check_error(av)) {
            free(maze);
            return (84);
        }
        if (generate(ac, av, maze)) {
            free(maze);
            return (84);
        }
        free(maze);
    }
    return (0);
}