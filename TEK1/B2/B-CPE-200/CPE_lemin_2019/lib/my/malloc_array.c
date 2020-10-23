/*
** EPITECH PROJECT, 2019
** library
** File description:
** malloc_array
*/

#include "../../include/my.h"

char **malloc_array(int x, int y)
{
    char **array = malloc(sizeof(char *) * (y + 1));
    for (int i = 0; i < y; i++) {
        array[i] = malloc(sizeof(char) * (x + 1));
        array[i][0] = '\0';
    }
    return (array);
}