/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** array
*/

#include "../include/tetris.h"

char **fill_space(int nb_rows, int nb_cols)
{
    char **map = mem_alloc_2d_array(nb_rows, nb_cols);

    for (int i = 0, j = 0; map[i] != NULL; i++) {
        for (j = 0; j < nb_cols; j++)
            map[i][j] = ' ';
        map[i][j] = '\0';
    }
    return (map);
}

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **arr = NULL;

    arr = malloc(sizeof(char *) * (nb_rows + 1));
    for (int i = 0; i < nb_rows; i++) {
        arr[i] = malloc(sizeof(char) * (nb_cols + 1));
        arr[i][0] = '\0';
    }
    arr[nb_rows] = NULL;
    return (arr);
}

void mem_free_2d_array(char ** arr, int x)
{
    for (int i = 0; i < x; i++)
        free(arr[i]);
    free(arr);
}