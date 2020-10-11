/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** trigo
*/

#include "../include/trigo.h"

void trigo(matrix_t *matrix)
{
    if (!my_strcmp(matrix->av[1], "EXP"))
        exp_func(matrix);
    if (!my_strcmp(matrix->av[1], "SIN"))
        sin_func(matrix);
    if (!my_strcmp(matrix->av[1], "COS"))
        cos_func(matrix);
    if (!my_strcmp(matrix->av[1], "COSH"))
        cosh_func(matrix);
    if (!my_strcmp(matrix->av[1], "SINH"))
        sinh_func(matrix);
    display_matrix(matrix->result, matrix->size);
}