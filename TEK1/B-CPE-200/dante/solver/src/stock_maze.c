/*
** EPITECH PROJECT, 2020
** project
** File description:
** main
*/

#include "../include/solver.h"

int find_x(char *tab)
{
    int i = 0;
    int x = 0;
    while (tab[i] != '\n') {
        x = x + 1;
        i++;
    }
    return (x);
}

int find_y(char *tab)
{
    int i = 0;
    int y = 0;
    for (; tab[i] != '\0'; i++) {
        if (tab[i] == '\n')
            y = y + 1;
    }
    return (y);
}

char **my_malloc(char *tab)
{
    char **maze = NULL;
    int x = find_x(tab);
    int y = find_y(tab);
    int k = 0;

    maze = malloc(sizeof(char *) * (y + 1));
    for (k = 0; k < y; k++)
        maze[k] = malloc(sizeof(char) * (x + 2));
    maze[k] = NULL;
    return (maze);
}

char **fill_tab(char *tab, char **maze)
{
    int x = find_x(tab);
    int y = find_y(tab);
    int k = 0;
    int j = 0;

    for (int i = 0; i < y; i++) {
        for (j = 0; j < x && tab[k] != '\n'; j++, k++)
            maze[i][j] = tab[k];
        k++;
        maze[i][j] = '\n';
    }
    return (maze);
}

void show_maze(char **maze, char *tab)
{
    int y = find_y(tab);
    for (int i = 0; i < y; i++)
        my_putstr(maze[i]);
}
