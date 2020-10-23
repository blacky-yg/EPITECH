/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** destroy_all
*/

#include "../include/bsq.h"
#include "../include/my.h"

void destroy_all(bsq_t *bsq)
{
    for (int i = 0; i != bsq->rows; i++)
        free(bsq->map[i]);
    free(bsq->buffer);
    free(bsq->map);
}