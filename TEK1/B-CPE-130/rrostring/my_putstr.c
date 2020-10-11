/*
** EPITECH PROJECT, 2020
** rrostring
** File description:
** my_putstr
*/

#include "rrostring.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);
}