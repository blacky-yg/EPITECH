/*
** EPITECH PROJECT, 2020
** project
** File description:
** main
*/

#include "../include/solver.h"

int scan_map(char **maze, char *tab)
{
    int x = find_x(tab);
    int y = find_y(tab);

    if (maze[0][0] != '*' || maze[y - 1][x - 1] != '*')
        exit(84);
    for (int i = 0; tab[i] != '\0'; i++) {
        if (tab[i] != '*' && tab[i] != 'X' && tab[i] != '\n')
            return (22);
    }
    return (0);
}

char **kill_the_game(char **maze, char *tab)
{
    int x = find_x(tab);
    int y = find_y(tab);
    int i = 0;
    int j = 0;

    for (; i < y; i++) {
        for (; maze[i][j] == '*'; j++)
            maze[i][j] = 'o';
        if (maze[i][j + 1] == 'X') {
            for (; maze[i][j] != 'X'; i++)
                maze[i][j] = 'o';
        }
    }
    return (maze);
}
