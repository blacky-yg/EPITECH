/*
** EPITECH PROJECT, 2020
** navy
** File description:
** display map
*/

#include "../include/navy.h"

void display_map(char **map)
{
    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int i = 1; i <= 8; i++) {
        my_printf("%d|", i);
        for (int j = 1; j <= 8; j++) {
            my_printf("%c", map[i][j]);
            if (j < 8)
                my_printf(" ");
        } my_printf("\n");
    } my_printf("\n");
}