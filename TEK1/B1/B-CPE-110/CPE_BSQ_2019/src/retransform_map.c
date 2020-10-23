/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** do_it
*/

#include "../include/bsq.h"
#include "../include/my.h"

void retransform_map(bsq_t *bsq)
{
    for (int i = 0; i < bsq->rows; i++) {
        for (int j = 0; j < bsq->cols; j++)
            if (bsq->map[i][j] == '0')
                bsq->map[i][j] = 'o';
            else if (bsq->map[i][j] != '\n')
                bsq->map[i][j] = '.';
    }
}