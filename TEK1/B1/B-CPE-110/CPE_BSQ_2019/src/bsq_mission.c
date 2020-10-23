/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** prepare_map
*/

#include "../include/bsq.h"
#include "../include/my.h"

void bsq_mission(bsq_t *bsq, int fd)
{
    read(fd, bsq->buffer, bsq->map_size);
    get_map_info(bsq);
    bsq->map = malloc(sizeof(char *) * bsq->rows);
    fd = open(bsq->filepath, O_RDONLY);
    read(fd, bsq->buffer, bsq->first_line_size);
    for (int i = 0; i != bsq->rows; i++) {
        read(fd, bsq->buffer, bsq->cols);
        bsq->map[i] = fill_map(bsq);
    }
    do_it(bsq);
    destroy_all(bsq);
}