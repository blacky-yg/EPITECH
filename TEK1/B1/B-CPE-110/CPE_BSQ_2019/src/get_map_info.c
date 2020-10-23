/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** get_map_info
*/

#include "../include/bsq.h"
#include "../include/my.h"

void get_map_info(bsq_t *bsq)
{
    int i = 0;
    char first_line[BUFSIZ];

    for (i = 0; bsq->buffer[i] != '\n'; i++)
        first_line[i] = bsq->buffer[i];
    i++;
    bsq->rows = my_getnbr(first_line);
    bsq->first_line_size = i;
    for (; bsq->buffer[i] != '\n'; i++);
    bsq->cols = i - bsq->first_line_size + 1;
}