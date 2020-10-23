/*
** EPITECH PROJECT, 2020
** rostring
** File description:
** space
*/

#include "rostring.h"

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