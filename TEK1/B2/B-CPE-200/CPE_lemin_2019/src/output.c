/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** output
*/

#include "../include/lemin.h"

int how_much(void)
{
    int i = h_tun * 2;
    i *= ants;
    i += 1;
    if (i < 0)
        i = 100000;
    return (i);
}

void malloc_moves(void)
{
    int a = 0, n = how_much();
    moves = malloc(sizeof(char *) * (n + 1));
    for (int l = 0; l < n; l++) {
        moves[l] = malloc(sizeof(char) * 100000);
        moves[l][0] = '\0';
        moves[l + 1] = NULL;
    }
    bank = malloc(sizeof(char *) * (n + 1));
    for (int l = 0; l < n; l++) {
        bank[l] = malloc(sizeof(char) * 100000);
        bank[l][0] = '\0';
        bank[l + 1] = NULL;
    }
}

int output(anthill ant[], char **input)
{
    malloc_moves();
    if (moves_for_ant(ant, input) == 84)
        return (84);
    return (0);
}
