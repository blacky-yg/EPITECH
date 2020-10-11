/*
** EPITECH PROJECT, 2020
** library
** File description:
** is_not_space
*/

#include "../../include/my.h"

int is_not_space(char *str, int i)
{
    if (str[i] != 32 && str[i] != 9)
        return (1);
    return (0);
}