/*
** EPITECH PROJECT, 2021
** main.cpp
** File description:
** main.cpp
*/

#include "../include/unsold.hpp"

int main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        usage();
    else if (error(ac, av) == 84)
        return (84);
    unsold(std::stoi(av[1]), std::stoi(av[2]));
    return (0);
}
