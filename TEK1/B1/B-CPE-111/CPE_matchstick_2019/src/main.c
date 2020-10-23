/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** main
*/

#include "../include/matchstick.h"

int main(int ac, char *av[])
{
    int nb_line = 0;

    if (ac != 3) {
        write(1, "Error: ./matchstick line stick_max\n", 35);
        return (84);
    } else {
        nb_line = my_getnbr(av[1]);
        if (nb_line <= 1 || nb_line >= 100) {
            write(1, "nb_line must be between 2 and 99\n", 33);
            return (84);
        } else
            matchstick(av);
    }
    return (0);
}