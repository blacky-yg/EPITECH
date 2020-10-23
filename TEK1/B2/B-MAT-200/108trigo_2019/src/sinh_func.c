/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** sinh_func
*/

#include "../include/trigo.h"

void sinh_func(matrix_t *matrix)
{
    int k = 50, i = 1;
    double j = 0;

    matrix->result = matrix->arg_matrix;
    while (i < k) {
        j = 1.00 / (compute_factorial((2 * i) + 1));
        matrix->result = add(matrix->result, mul(j, power(matrix->arg_matrix, ((2 * i) + 1), matrix->size), matrix->size), matrix->size);
        i++;
    }
}
