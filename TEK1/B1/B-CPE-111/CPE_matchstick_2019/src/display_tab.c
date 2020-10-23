/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** display_tab
*/

#include "../include/matchstick.h"

void display_tab(char **tab, int nb_line, int nb_col)
{
    for (int i = 0; i <= nb_line - 2; i++)
        for (int j = 0; j <= nb_col - 2; j++)
            write(1, &tab[i][j], 1);
}