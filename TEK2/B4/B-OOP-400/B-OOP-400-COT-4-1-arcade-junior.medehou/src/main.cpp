/*
** EPITECH PROJECT, 2021
** main
** File description:
** core
*/

#include "../include/Core.hpp"

int main(int ac, char **av)
{
    try {
        if (ac != 2)
            throw CoreException("You must pass a dynamic library as argument");
        Core core(av[1]);
        core.init();
        
        core.run();
        return (0);
    } catch(std::exception const &e) {
        std::cerr << e.what() << std::endl;
        return (84);
    }
}