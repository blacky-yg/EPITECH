/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** my_putstr
*/

#include "../include/matchstick.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);
}