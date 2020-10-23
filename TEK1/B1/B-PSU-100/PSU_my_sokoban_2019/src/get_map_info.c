/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** get_map_info
*/

#include "../include/sokoban.h"
#include "../include/my.h"

void get_map_info(sokoban_t *sokoban)
{
    int i = 0;
    int counter = 0;

    for (sokoban->cols = 0; sokoban->map[sokoban->cols] != '\n';
            sokoban->cols++);
    sokoban->cols++;
    sokoban->nb_of_x = 0;
    sokoban->p_pos = 0;
    for (; sokoban->map[counter] != '\0'; counter++) {
        if (sokoban->map[counter] == '\n')
            i++;
        if (sokoban->map[counter] == 'X')
            sokoban->nb_of_x++;
        if (sokoban->map[counter] == 'P')
            sokoban->p_pos = counter;
    }
    sokoban->rows = i;
    sokoban->cols_dup = sokoban->cols;
    sokoban->rows_dup = sokoban->rows;
}