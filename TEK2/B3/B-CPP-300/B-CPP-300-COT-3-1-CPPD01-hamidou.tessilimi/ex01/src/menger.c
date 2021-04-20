/*
** EPITECH PROJECT, 2021
** day01
** File description:
** menger.c
*/

#include "../include/menger.h"

void menger(int x, int y, int size, int lv)
{
    int square_size = size / 3;
    int coord_x = square_size + x;
    int coord_y = square_size + y;

    if (lv > 0)
        printf("%03d %03d %03d\n", square_size, coord_x, coord_y);
    if (lv > 1)
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                (i != 1 || j != 1) ? menger(i * square_size + x,
                        j * square_size + y, square_size, lv - 1) : 1;
}