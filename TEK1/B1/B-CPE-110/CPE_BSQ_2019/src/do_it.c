/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** do_it
*/

#include "../include/bsq.h"
#include "../include/my.h"

void do_it(bsq_t *bsq)
{
    transform_map(bsq);
    find_and_set_max(bsq);
    retransform_map(bsq);
    display_map(bsq);
}