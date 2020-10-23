/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** fill_array
*/

#include "../include/minishell1.h"

char **fill_array(char **array, char *str, int nb_of_words)
{
    int j = 0;

    for (int i = 0; i < nb_of_words; i++) {
        for (int k = 0; str[k]; k++) {
            if (str[k] == 32) {
                i++;
                j = 0;
            } else
                array[i][j] = str[k];
        }
    }
    return (array);
}