/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** check_str_flags
*/

#include "../../include/my.h"

int check_str_flags(char c)
{
    int i = 0;
    char *flags = "cspS%\0";

    while (flags[i] != '\0') {
        if (flags[i] == c)
            return (0);
        i++;
    }
    return (-1);
}
