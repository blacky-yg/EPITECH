/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** display_array
*/

#include "../include/minishell1.h"

void display_array(char **array, int nb_of_words)
{
    for (int i = 0; i < nb_of_words; i++)
        write(1, array[i], my_strlen(array[i]));
}