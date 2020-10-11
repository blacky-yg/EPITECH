/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** init_struct
*/

#include "../include/trigo.h"

void init_struct(matrix_t *matrix, int ac, char *av[])
{
    matrix->ac = ac;
    matrix->av = av;
    matrix->size = sqrt(ac - 2);
    matrix->arg_matrix = get_matrix(ac, av, matrix->size);
    matrix->identity = identity_matrix(matrix->size);
    matrix->nulle = nulle_matrix(matrix->size);
    matrix->result = malloc_matrix(matrix->result, matrix->size);
}