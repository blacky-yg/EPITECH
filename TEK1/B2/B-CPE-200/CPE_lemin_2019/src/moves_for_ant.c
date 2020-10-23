/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** moves_for_ant
*/

#include "../include/lemin.h"

int nbb_gal(lem_t lem)
{
    int z = 0;
    for (int i = 0; lem.rooms[i].name != NULL
        && lem.rooms[i].name[0] != '\0'; i++, z++);
    for (int i = 0; lem.start[i].name != NULL
        && lem.start[i].name[0] != '\0'; i++, z++);
    for (int i = 0; lem.end[i].name != NULL
        && lem.end[i].name[0] != '\0'; i++, z++);
    for (int i = 0; lem.tunnels[i] != NULL; i++, z++);
    return (z + 1);
}

int moves_for_ant(anthill ant[], char **input)
{
    int j = 0, c = 0;
    ant_to_move = 1;
    c = create_the_anthill(input, ant);
    if (c == 84)
        return (84);
    mat = create_mat(input, ant);
    if (check_mat() == 84)
        return (84);
    if (free_some_ant(ant, input) == 84)
        return (84);
    return (0);
}
