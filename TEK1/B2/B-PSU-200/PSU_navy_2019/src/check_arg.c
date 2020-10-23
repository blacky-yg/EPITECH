/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check_arg
*/

#include "../include/navy.h"

int check_arg(int ac, char **av)
{
    if (ac < 2 || ac > 3)
        return (1);
    if (ac == 2) {
        if (check_file(av[1]) != 0)
            return (1);
    } if (ac == 3) {
        if (!my_str_isnum(av[1]))
            return (1);
        if (check_file(av[2]) != 0)
            return (1);
    } return (0);
}