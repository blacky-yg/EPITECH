/*
** EPITECH PROJECT, 2020
** sort_words
** File description:
** space
*/

#include "sort_words.h"

int is_space(char *str, int i)
{
    if (str[i] == 32 || str[i] == 9)
        return (1);
    return (0);
}

int is_not_space(char *str, int i)
{
    if (str[i] != 32 && str[i] != 9)
        return (1);
    return (0);
}