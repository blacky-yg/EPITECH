/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** find_and_set_max
*/

#include "../include/bsq.h"
#include "../include/my.h"

void find_and_set_max(bsq_t *bsq)
{
    bsq->rect_max = bsq->map[0][0] - '0';
    for (int i = 0; i < bsq->rows; i++) {
        for (int j = 0; j < bsq->cols; j++)
            if (bsq->rect_max < bsq->map[i][j] - '0') {
                bsq->rect_max = bsq->map[i][j] - '0';
                bsq->rect_x = i;
                bsq->rect_y = j;
            }
    }
}