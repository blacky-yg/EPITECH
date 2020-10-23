/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** init_bsq
*/

#include "../include/bsq.h"

bsq_t *init_bsq(bsq_t *bsq)
{
    struct stat info;

    stat(bsq->filepath, &info);
    bsq->map_size = info.st_size;
    bsq->buffer = malloc(sizeof(char) * bsq->map_size);
    bsq->rect_x = 0;
    bsq->rect_y = 0;
    bsq->rect_max = 0;
    bsq->rows = 0;
    bsq->cols = 0;
    bsq->first_line_size = 0;
    return (bsq);
}