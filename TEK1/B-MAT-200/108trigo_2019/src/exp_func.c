/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** exp_func
*/

#include "../include/trigo.h"

void exp_func(matrix_t *matrix)
{
    int k = 50, i = 2;
    double j = 0;

    matrix->result = add(matrix->arg_matrix, matrix->identity, matrix->size);
    while (i < k) {
        j = 1.00 / (compute_factorial(i));
        matrix->result = add(matrix->result, mul(j, power(matrix->arg_matrix, i, matrix->size), matrix->size), matrix->size);
        i++;
    }
}