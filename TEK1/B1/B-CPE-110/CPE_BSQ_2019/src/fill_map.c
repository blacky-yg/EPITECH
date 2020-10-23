/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** fill_map
*/

#include "../include/bsq.h"
#include "../include/my.h"

char *fill_map(bsq_t *bsq)
{
    char *map = malloc(sizeof(char) * bsq->cols);

    for (int i = 0; i != bsq->cols; i++)
        map[i] = bsq->buffer[i];
    return (map);
}