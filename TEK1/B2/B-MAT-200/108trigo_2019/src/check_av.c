/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** check_av
*/

#include "../include/trigo.h"

int check_av(int ac, char *av[])
{
    int ai = ac - 2;

    if (ac == 1)
        return (1);
    if (my_strcmp(av[1], "EXP") && my_strcmp(av[1], "COS") &&
        my_strcmp(av[1], "SIN") && my_strcmp(av[1], "COSH") &&
            my_strcmp(av[1], "SINH"))
            return (1);
    for (int i = 2; i < ac; i++)
        for (int j = 0; av[i][j]; j++)
            if (is_not_digit(av[i][j]) && av[i][j] != '-')
                return (1);
    if (ai != 1 && ai != 4 && ai != 9 &&
            ai != 16 && ai != 25)
        return (1);
    return (0);
}