/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** pipe_in_tab
*/

#include "../include/matchstick.h"

void pipe_in_tab(char **tab, int nb_line, int nb_col)
{
    int middle = (nb_col / 2) - 1;
    int pipe = 1;
    int mid = pipe;

    for (int i = 1; i < nb_line - 2; i++, pipe += 2, middle--) {
        mid = pipe;
        for (int j = middle; mid > 0; j++, mid--)
            tab[i][j] = '|';
    }
}