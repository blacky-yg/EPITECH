/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** init_struct
*/

#include "../include/lemin.h"

void init_struct(lem_t *lemin, char **lines)
{
    int s = nb_start(lines, lemin), e = nb_end(lines, lemin);
    int t = nb_tunnels(lines, lemin), r = nb_rooms(lines, lemin);
    lemin->ants = my_getnbr(lines[0]);
}

int parse_info_n_print(char **input)
{
    anthill ant[h_gal];
    if (return_value == 0)
        if (output(ant, input) == 84) {
            return_value = 84;
            display_input(input);
            return (0);
        }
    display_input(input);
    free_anthill(ant);
    return (0);
}
