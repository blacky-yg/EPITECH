/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** free_tab
*/

#include "../include/matchstick.h"

void free_tab(char **array, int nb_line)
{
    for (int i = 0; i < nb_line; i++)
        free(array[i]);
    free(array);
}
