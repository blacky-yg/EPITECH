/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** loose
*/

#include "../include/sokoban.h"
#include "../include/my.h"

int loose(sokoban_t *sokoban)
{
    int i = 0;
    int you_loose = sokoban->loose;

    for (int i = 0; sokoban->map_dup[i] != '\0'; i++) {
        if (sokoban->map[i] == 'X' &&
            (sokoban->map[i + sokoban->cols] == 'X' ||
            sokoban->map[i - sokoban->cols] == 'X' ||
            sokoban->map_dup[i + sokoban->cols] == '#' ||
            sokoban->map_dup[i - sokoban->cols] == '#') &&
            (sokoban->map[i + 1] == 'X' ||
            sokoban->map[i - 1] == 'X' ||
            sokoban->map_dup[i + 1] == '#' ||
            sokoban->map_dup[i - 1] == '#'))
            sokoban->loose++;
    }
    if (sokoban->loose == you_loose)
        return (1);
    sokoban->loose = 0;
    return (0);
}