/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** check_number_flags
*/

#include "../include/my_printf.h"

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