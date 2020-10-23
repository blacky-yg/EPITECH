/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** ls_command
*/

#include "../include/my_ls.h"

void ls_command(int ac, char *av[])
{
    int j = 2;
    char *tmp = NULL;

    for (int i = 1; i < ac; i++, j++) {
        if (ac == 2 && !my_strcmp(av[1], "-d"))
            my_printf(".\n");
        if (ac > 2 && my_strcmp(av[1], "-l") && my_strcmp(av[1], "-d")) {
            tmp = av[i];
            my_printf("%s:\n", tmp);
            my_simple_ls(tmp);
            write(1, "\n", 1);
        }
        ls_command2(ac, av, i, j);
    }
}