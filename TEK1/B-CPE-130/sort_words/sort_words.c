/*
** EPITECH PROJECT, 2020
** sort_words
** File description:
** sort_words
*/

#include "sort_words.h"

void sort_words(char **array, int nb_of_words)
{
    char *tmp = NULL;

    for (int i = 0; i < nb_of_words; i++)
        for (int j = i + 1; j < nb_of_words; j++) {
            if (my_strcmp(array[i], array[j]) > 0) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
}