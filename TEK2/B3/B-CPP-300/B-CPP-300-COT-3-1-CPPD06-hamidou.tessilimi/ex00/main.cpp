/*
** EPITECH PROJECT, 2021
** day03
** File description:
** main
*/

#include "my_cat.hpp"

int main(int ac, char *av[])
{
    if (ac == 1)
        my_cat(0, NULL);
    else
        for (int i = 1; i < ac; i++)
            my_cat(i, av[i]);
    return (0);
}