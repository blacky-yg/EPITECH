/*
** EPITECH PROJECT, 2019
** library
** File description:
** display_array
*/

#include "../../include/my.h"

void display_array(char **array)
{
    for (int j = 0; array[j] != NULL; j++) {
        write(1, array[j], my_strlen(array[j]));
        write(1, "\n", 1);
    }
}