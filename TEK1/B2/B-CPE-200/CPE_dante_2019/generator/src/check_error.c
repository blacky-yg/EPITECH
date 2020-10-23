/*
** EPITECH PROJECT, 2020
** dante
** File description:
** check_error
*/

#include "../include/generator.h"

int check_size(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 48 || str[i] > 57)
            return (1);
    return (0);
}

int check_error(char *av[])
{
    int x = my_getnbr(av[1]);
    int y = my_getnbr(av[2]);

    for (int i = 1; i < 3; i++)
        if (check_size(av[i]))
            return (1);
    if (x == 0 || y == 0)
        return (1);
    return (0);
}