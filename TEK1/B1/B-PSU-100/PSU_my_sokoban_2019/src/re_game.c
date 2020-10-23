/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** re_game
*/

#include "../include/sokoban.h"
#include "../include/my.h"

void re_game(sokoban_t *sokoban)
{
    for (int i = 0; sokoban->map_dup[i] != '\0'; i++)
        sokoban->map[i] = sokoban->map_dup[i];
    get_map_info(sokoban);
}