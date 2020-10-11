/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** sin_func
*/

#include "../include/trigo.h"

void sin_func(matrix_t *matrix)
{
    int k = 50, i = 1;
    double j = 0;

    matrix->result = matrix->identity;
    while (i < k) {
        j = (pow((-1.00), i) / (compute_factorial((2 * i) + 1)));
        matrix->result = add(matrix->result, mul(j, power(matrix->arg_matrix, ((2 * i) + 1), matrix->size), matrix->size), matrix->size);
        i++;
    }
}