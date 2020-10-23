/*
** EPITECH PROJECT, 2019
** library
** File description:
** free_array
*/

#include "../../include/my.h"

void free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}