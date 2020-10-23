/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** solve
*/

#include "../include/lemin.h"

int solve_the_anthill(char **input)
{
    anthill ant[h_gal];
    if (return_value == 0)
        if (output(ant, input) == 84) {
            return_value = 84;
            display_input(input);
            return (0);
        }
    display_input(input);
    if (return_value != 0)
        return (1);
    my_putstr("#moves\n");
    for (int i = 0; moves[i][0] != '\0'; i++) {
        write(1, moves[i], my_strlen(moves[i]));
        write(1, "\n", 1);
    }
    free_anthill(ant);
    return (0);
}
