/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** init_sokoban
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void init_sokoban(sokoban_t *sokoban, char **av)
{
    sokoban->map = load_map(av[1]);
    sokoban->map_dup = load_map(av[1]);
    check_map(sokoban->map);
    get_map_info(sokoban);
}