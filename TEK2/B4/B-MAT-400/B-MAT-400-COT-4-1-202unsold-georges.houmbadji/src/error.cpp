/*
** EPITECH PROJECT, 2021
** error.cpp
** File description:
** error.cpp
*/

#include "../include/unsold.hpp"

int str_arg(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        for (int j = 0; j < strlen(av[i]); j++) {
            if (!std::isdigit(av[i][j]))
                return (84);
        }
    }
    return (0);
}

int less_arg(int ac, char **av)
{
    if (std::stoi(av[1]) <= 50 || std::stoi(av[2]) <= 50)
        return (84);
    return (0);
}

int error(int ac, char **av)
{
    if ((ac == 2 && strcmp(av[1], "-h") != 0) || ac != 3) {
        std::cerr << "You must pass two parameters to the programm" << std::endl;
        return (84);
    }
    if (str_arg(ac, av) == 84) {
        std::cerr << "You must enter only numbers" << std::endl;
        return (84);
    }
    if (less_arg(ac, av) == 84) {
        std::cerr << "The numbers must be greater than 50" << std::endl;
        return (84);
    }
    return (0);
}