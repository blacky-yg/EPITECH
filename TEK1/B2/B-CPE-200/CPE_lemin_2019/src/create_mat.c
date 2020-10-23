/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** create_mat
*/

#include "../include/lemin.h"

int check_mat(void)
{
    int a = 0;
    for (int y = nb_gal - 1; y >= 0; y--)
        if (mat[y][nb_gal - 1] == 1)
            a++;
    if (a == 0)
        return (84);
    a = 0;
    for (int y = nb_gal - 1; y >= 0; y--)
        if (mat[0][y] == 1)
            a++;
    if (a == 0)
        return (84);
    return (0);
}

int **create_mat(char **input, anthill ant[])
{
    int x = 0, h = 0, d = 0;
    mat = malloc(sizeof(int *) * nb_gal);
    for (int k = 0; k < nb_gal; k++)
        mat[k] = malloc(sizeof(int) * nb_gal);
    for (int i = 0; i < nb_gal; i++)
        for (int j = 0; j < nb_gal; j++) {
            if (i != j)
                mat[i][j] = are_there_related(ant, i, ant[j].name);
            else
                mat[i][j] = 0;
        }
    return (mat);
}
