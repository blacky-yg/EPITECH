/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** ls_command2
*/

#include "../include/my_ls.h"

int ls_command2(int ac, char *av[], int i, int j)
{
    if (ac == 2 && !my_strcmp(av[1], "-l"))
        ls_l(".");
    if (ac == 2 && my_strcmp(av[1], "-l") && my_strcmp(av[1], "-d"))
        my_simple_ls(av[1]);
}