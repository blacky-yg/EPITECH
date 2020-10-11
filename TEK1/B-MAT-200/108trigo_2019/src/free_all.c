/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** free_all
*/

#include "../include/trigo.h"

void free_all(matrix_t *matrix)
{
    for (int i = 0; i < matrix->size; i++) {
        free(matrix->arg_matrix[i]);
        free(matrix->nulle[i]);
        free(matrix->result[i]);
        free(matrix->identity[i]);
    }
    free(matrix->arg_matrix);
    free(matrix->nulle);
    free(matrix->identity);
    free(matrix->result);
}