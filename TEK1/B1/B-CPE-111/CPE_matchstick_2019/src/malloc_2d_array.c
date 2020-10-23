/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** malloc_2d_array
*/

#include "../include/matchstick.h"

char **malloc_2d_array(char **array, int nb_line, int nb_col)
{
    array = malloc(sizeof(char *) * nb_line);
    for (int i = 0; i < nb_line - 1; i++)
        array[i] = malloc(sizeof(char) * nb_col);
    array[nb_line - 1] = NULL;
    return (array);
}