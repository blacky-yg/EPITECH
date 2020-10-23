/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** check_map
*/

#include "../include/sokoban.h"
#include "../include/my.h"

int check_map(char *av)
{
    int nb_of_o = 0;
    int nb_of_x = 0;

    for (int i = 0; av[i] != '\0'; i++) {
        if (av[i] != 'P' && av[i] != 'X' && av[i] != ' ' &&
            av[i] != 'O' && av[i] != '\n' && av[i] != '#')
            exit(84);
        if (av[i] == 'X')
            nb_of_x++;
        if (av[i] == 'O')
            nb_of_o++;
    }
    if (nb_of_o != nb_of_x)
        exit(84);
    return (0);
}