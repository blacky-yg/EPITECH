/*
** EPITECH PROJECT, 2020
** project
** File description:
** main
*/

#include "../include/solver.h"

int main(int ac, char **av)
{
    char **maze = NULL;
    char *tab = NULL;

    if (ac != 2)
        return (84);
    tab = open_and_read(av[1]);
    if (tab == NULL)
        return (84);
    maze = my_malloc(tab);
    maze = fill_tab(tab, maze);
    scan_map(maze, tab);
    maze = kill_the_game(maze, tab);
    show_maze(maze, tab);
    return (0);
}
