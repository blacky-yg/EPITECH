/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** init_struct
*/

#include "../include/bombyx.h"

void init_struct(int ac, char *av[], bombyx_t *bombyx)
{
    bombyx->n = atoi(av[1]);
    if (ac == 3) {
        bombyx->flag = 0;
        bombyx->k = atof(av[2]);
    } else {
        bombyx->flag = 1;
        bombyx->begin = atof(av[2]);
        bombyx->end = atof(av[3]);
    }
}