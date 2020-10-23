/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** matchstick
*/

#include "../include/matchstick.h"

int matchstick(char *av[])
{
    int i = my_getnbr(av[1]);
    int j = my_getnbr(av[2]);
    int nb_line = 0;
    int nb_col = 0;
    char **tab = NULL;

    if (j <= 0)
        return (84);
    nb_line = i + 3;
    nb_col = 2 * i + 3;
    tab = malloc_2d_array(tab, nb_line, nb_col);
    fill_tab(tab, nb_line, nb_col);
    game(tab, i, j);
    free_tab(tab, nb_line);
}