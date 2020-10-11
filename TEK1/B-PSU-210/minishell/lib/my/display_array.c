/*
** EPITECH PROJECT, 2020
** library
** File description:
** display_array
*/

#include "../../include/my.h"

void display_array(char **array)
{
    for (int i = 0; array[i]; i++) {
        my_putstr(array[i]);
        write(1, "\n", 1);
    }
}