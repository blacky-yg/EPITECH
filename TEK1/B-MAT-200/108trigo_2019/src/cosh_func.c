/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** cosh_func
*/

#include "../include/trigo.h"

void cosh_func(matrix_t *matrix)
{
    int k = 50, i = 1;
    double j = 0;

    matrix->result = matrix->identity;
    while (i < k) {
        j = 1.00 / (compute_factorial(2 * i));
        matrix->result = add(matrix->result, mul(j, power(matrix->arg_matrix, (2 * i), matrix->size), matrix->size), matrix->size);
        i++;
    }
}
