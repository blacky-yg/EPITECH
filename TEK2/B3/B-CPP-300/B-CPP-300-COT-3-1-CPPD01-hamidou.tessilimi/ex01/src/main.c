/*
** EPITECH PROJECT, 2021
** day01
** File description:
** main
*/

#include "../include/menger.h"

int main(int ac, char **av)
{
    if (check_arg(ac, av[1], av[2]))
        return (84);
    else
        menger(0, 0, atoi(av[1]), atoi(av[2]));
    return (0);
}