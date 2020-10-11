/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_putstr
*/

#include "../../include/my.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);
}