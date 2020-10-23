/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_str_isprintable
*/

#include "../../include/my.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 32 && str[i] <= 126)
            return (1);
        else
            return (0);
    }
    return (0);
}