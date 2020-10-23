/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_str_to_word_array
*/

#include "../include/minishell1.h"

int words_nb(char *str)
{
    int nb_of_words = 0;

    if (my_strlen(str) >= 1)
        nb_of_words++;
    for (int i = 0; str[i]; i++)
        if (str[i] == 32)
            nb_of_words++;
    return (nb_of_words);
}

char **my_str_to_word_array(char *str)
{
    char **array = malloc(sizeof(char *) * my_strlen(str));
    int i = 0;
    int j = 0;
    int pos = 0;

    array[0] = malloc(my_strlen(str));
    for (; str[pos] != '\0'; pos++) {
        if (is_not_space(str, pos)) {
            array[i][j] = str[pos];
            j++;
        } else {
            i++;
            array[i] = malloc(my_strlen(str));
            j = 0;
        }
    }
    return (array);
}