/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** check_av
*/

#include "../include/transfer.h"

int check_av(int ac, char *av[])
{
    int len_str = 0;

    if (ac < 2 || ac % 2 == 0)
        return (1);
    for (int i = 1; i < ac; i++)
        for (int j = 0, len_str = my_strlen(av[i]) - 1; av[i][j]; j++) {
            if (is_not_digit(av[i][j]) && av[i][j] != '*' && av[i][j] != '-')
                return (1);
            if ((av[i][j] == '*' && av[i][j+1] == '*') || av[i][0] == '*')
                return (1);
            if (av[i][len_str] == '*' || av[i][len_str] == '-')
                return (1);
            if (len_str == 1 && !my_getnbr(av[i]))
                return (1);
            if ((av[i][j] == '-' && av[i][j+1] == '-') ||
                    (av[i][j] == '-' && av[i][j+1] == '*')  || av[i][0] == '*')
                return (1);
        }
    if (ac == 3 && !my_strcmp(av[2], "0"))
        return (1);
    if (ac == 5 && !my_strcmp(av[4], "0"))
        return (1);
    return (0);
}