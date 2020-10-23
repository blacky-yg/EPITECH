/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** win
*/

#include "../include/sokoban.h"
#include "../include/my.h"

int win(sokoban_t *sokoban)
{
    for (int i = 0; sokoban->map_dup[i] != '\0'; i++)
        if (sokoban->map_dup[i] == '0' && sokoban->map[i] != 'X')
            return (0);
    return (1);
}