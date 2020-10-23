/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** player_turn
*/

#include "../include/matchstick.h"

char **player_turn(char **tab, int i, int j)
{
    char *line = malloc(3);
    char *match = malloc(3);
    ssize_t len = 0;

    my_putstr("Line: ");
    if (getline(&line, &len, stdin) == -1)
        return (NULL);
    else {
        my_putstr("Matches: ");
        if (getline(&match, &len, stdin) == -1)
            return (NULL);
        else {
            my_putstr("Player removed ");
            my_put_nbr(my_getnbr(match));
            my_putstr(" match(es) from line ");
            my_put_nbr(my_getnbr(line));
            my_putchar('\n');
        }
    }
    return (tab);
}