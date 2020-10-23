/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** equalize
*/

#include "../include/lemin.h"

int h_equalize(int *a, int *b, int *x, int *y)
{
    *a = *x;
    *b = *y;
    int h = *y, d = *x, y_y = *b;
    for (h = nb_gal - 1; h != y_y && mat[d][h] != 1; h--);
    h = (h == y_y) ? get_h(d, h) : h;
    return (h);
}

int d_equalize(int *a, int *b, int *x, int *y)
{
    *a = *x;
    *b = *y;
    int h = *y, d = *x, x_x = *a;
    for (d = nb_gal - 1; d != x_x && mat[d][h] != 1; d--);
    d = (d == x_x) ? get_d(d, h) : d;
    return (d);
}