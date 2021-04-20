/*
** EPITECH PROJECT, 2021
** day01
** File description:
** check_arg
*/

#include "../include/menger.h"

int check_arg(int ac, char *av1, char *av2)
{
    if (ac != 3)
        return (1);
    else
        if (atoi(av1) == 0 || atoi(av1) % 3 != 0 || atoi(av2) < 1)
            return (1);
    return (0);
}