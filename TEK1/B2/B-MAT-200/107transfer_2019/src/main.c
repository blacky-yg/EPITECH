/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** main
*/

#include "../include/transfer.h"

int main(int ac, char *av[])
{
    if (ac == 2 && !my_strcmp(av[1], "-h"))
        usage();
    else if (check_av(ac, av)) {
        my_putstr("Bad statements.\nType ./107transfer -h for help\n");
        return (84);
    } else
        if (transfer(ac, av))
            return (84);
    return (0);
}