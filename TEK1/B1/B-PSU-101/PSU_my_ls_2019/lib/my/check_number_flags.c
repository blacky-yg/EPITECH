/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** check_number_flags
*/

#include "../../include/my.h"

int check_number_flags(char c)
{
    int i = 0;
    char *flags = "duboxXi%\0";

    while (flags[i] != '\0') {
        if (flags[i] == c)
            return (0);
        i++;
    }
    return (-1);
}
