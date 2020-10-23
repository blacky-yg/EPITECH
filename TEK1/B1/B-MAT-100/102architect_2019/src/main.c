/*
** EPITECH PROJECT, 2019
** 102architect
** File description:
** main
*/

#include "../include/my.h"
#include "../include/102architect.h"

int main(int ac, char *av[])
{
    if (ac == 2 || ac == 5 || ac == 6 || ac == 13) {
        if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
            usage();
            return (0);
        }
        if (ac == 5) {
            if (my_strcmp(av[3], "-r") == 0)
                rotation(av[1], av[2], av[3], av[4]);
            if (my_strcmp(av[3], "-s") == 0)
                reflection(av[1], av[2], av[3], av[4]);
            return (0);
        }
        if (ac == 6) {
            if (my_strcmp(av[3], "-t") == 0)
                translation(av[1], av[2], av[3], av[4], av[5]);
            if (my_strcmp(av[3], "-z") == 0)
                scaling(av[1], av[2], av[3], av[4], av[5]);
            return (0);
        }
        if (ac == 13)
            return (0);
    } else
        return (84);
}
