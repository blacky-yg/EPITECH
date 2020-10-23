/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** wildcard_in_tab
*/

#include "../include/matchstick.h"

void wildcard_in_tab(char **tab, int nb_line, int nb_col)
{
    for (int i = 0; i < nb_col - 2; i++) {
        tab[0][i] = '*';
        tab[nb_line - 2][i] = '*';
    }
    for (int i = 0; i < nb_line - 2; i++) {
        tab[i][0] = '*';
        tab[i][nb_col - 3] = '*';
    }
}