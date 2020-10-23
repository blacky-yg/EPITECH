/*
** EPITECH PROJECT, 2019
** is_digit
** File description:
** count_this
*/

#include "../../include/my.h"

int count_this(char *str, char d)
{
    int c = 0;
    if (str == NULL)
        return (0);
    for (int a = 0; str[a] != '\0'; a++)
        (str[a] == d) ? c++ : c;
    return (c);
}