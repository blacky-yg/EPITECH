/*
** EPITECH PROJECT, 2020
** rrostring
** File description:
** display_array
*/

#include "rrostring.h"

void display_array(char **array, int nb_of_words)
{
    write(1, array[nb_of_words - 1], my_strlen(array[nb_of_words - 1]));
    for (int i = 0; i < nb_of_words - 1; i++) {
        (i < nb_of_words - 1) ? write(1, " ", 1) : 1;
        write(1, array[i], my_strlen(array[i]));
    }
}