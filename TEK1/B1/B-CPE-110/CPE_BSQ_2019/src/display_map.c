/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** display_map
*/

#include "../include/bsq.h"
#include "../include/my.h"

void display_map(bsq_t *bsq)
{
    int cote_x = bsq->rect_x;
    int cote_y = bsq->rect_y;
    int max_size = bsq->rect_max;

    for (int i = cote_x; i > cote_x - max_size; i--)
        for (int j = cote_y; j > cote_y - max_size; j--)
            bsq->map[i][j] = 'x';
    for (int y = 0; y != bsq->rows; y++)
        write(1, bsq->map[y], bsq->cols);
}