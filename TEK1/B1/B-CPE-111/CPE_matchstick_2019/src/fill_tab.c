/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** fill_tab
*/

#include "../include/matchstick.h"

void fill_tab(char **tab, int nb_line, int nb_col)
{
    space_in_tab(tab, nb_line, nb_col);
    wildcard_in_tab(tab, nb_line, nb_col);
    pipe_in_tab(tab, nb_line, nb_col);
}