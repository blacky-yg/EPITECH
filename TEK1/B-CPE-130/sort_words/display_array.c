/*
** EPITECH PROJECT, 2020
** sort_words
** File description:
** display_array
*/

#include "sort_words.h"

void display_array(char **array, int nb_of_words)
{
    for (int i = 0; i < nb_of_words; i++) {
        write(1, array[i], my_strlen(array[i]));
        (i < nb_of_words - 1) ? write(1, " ", 1) : write(1, "\n", 1);
    }
}