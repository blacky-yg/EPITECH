/*
** EPITECH PROJECT, 2019
** my_ls_bootstrap
** File description:
** main
*/

#include "info_file.h"

int main(int ac, char *av[])
{
    if (ac != 2)
        return (84);
    else
        info_file();
    return (0);
}
