/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** game
*/

#include "../include/matchstick.h"

void game(char **tab, int i, int j)
{
    int nb_line = i + 3;
    int nb_col = 2 * i + 3;

    display_tab(tab, nb_line, nb_col);
    my_putstr("\n");
    my_putstr("Your turn:\n");
    tab = player_turn(tab, i, j);
}