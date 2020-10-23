/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** space_in_tab
*/

#include "../include/matchstick.h"

void space_in_tab(char **tab, int nb_line, int nb_col)
{
    for (int i = 0; i <= nb_line - 2; i++)
        for (int j = 0; j <= nb_col - 3; j++)
            tab[i][j] = ' ';
    for (int i = 0; i < nb_line - 1; i++) {
        tab[i][nb_col - 2] = '\n';
        tab[i][nb_col - 1] = '\0';
    }
}