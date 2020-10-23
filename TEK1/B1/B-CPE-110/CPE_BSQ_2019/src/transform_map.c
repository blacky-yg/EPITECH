/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** transform_map
*/

#include "../include/bsq.h"
#include "../include/my.h"

void transform_map(bsq_t *bsq)
{
    for (int i = 0; i != bsq->rows; i++) {
        for (int j = 0; bsq->map[i][j] != '\n'; j++)
            if (bsq->map[i][j] == 'o')
                bsq->map[i][j] = 0 + '0';
            else if (bsq->map[i][j] == '.') {
                bsq->map[i][j] = 1 + '0';
                bsq->map[i][j] = set_level(bsq->map, i, j);
        }
    }
}