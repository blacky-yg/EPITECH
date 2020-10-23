/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** main
*/

#include "../include/my_ls.h"

int main(int ac, char  *av[])
{
    if (ac == 1)
        my_simple_ls(".");
    else if (ac == 2 && (!my_strcmp(av[1], "-h") ||
                !my_strcmp(av[1], "--help")))
        usage();
    else
        ls_command(ac, av);
    return (0);
}