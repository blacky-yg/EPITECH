/*
** EPITECH PROJECT, 2021
** day01
** File description:
** z
*/

#include "../include/z.h"

int is_hexa(char *str)
{
    for (int i = 2; str[i];)
        if (isxdigit(str[i]))
            i++;
        else
            return (1);
    return (0);
}