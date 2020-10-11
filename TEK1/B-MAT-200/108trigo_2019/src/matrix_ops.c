/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** matrix_ops
*/

#include "../include/trigo.h"

double **add(double **first, double **second, int size)
{
    double **result = malloc_matrix(result, size);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            result[i][j] = first[i][j] + second[i][j];
    return (result);
}

double **sous(double **first, double **second, int size)
{
    double **result = malloc_matrix(result, size);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            result[i][j] = first[i][j] - second[i][j];
    return (result);
}

double **multi(double **first, double **second, int size)
{
    double **result = malloc_matrix(result, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < size; k++)
                result[i][j] += first[i][j] * second[i][j];
        }
    }
    return (result);
}

double **divi(double **matrix, int size, double nb)
{
    double **result = malloc_matrix(result, size);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            result[i][j] = matrix[i][j] / nb;
    return (result);
}

double **power(double **matrix, int puiss ,int size)
{
    double **result = malloc_matrix(result, size);

    result = matrix;

    for (int i = 1; i < puiss; i++)
        result = multiplication(result, matrix, size);
    return (result);
}

double compute_factorial(double nb)
{
    double tmp = nb;
    double factorial = 1;

    for (int i = 1; i <= tmp; i++)
        factorial *= i;
    return (factorial);
}

double **multiplication(double **mat1, double **mat2, int size)
{
    int i = 0, j = 0, k = 0, f = 0;
    double **res = NULL;
    res = malloc(sizeof(double *) * (size));
    for (int x = 0; x < size; x++) {
        res[x] = malloc(sizeof(double) * (size));
    }
    if (res == NULL)
        return (NULL);
    res[i][j] = 0;
    for (i = 0; i < size; i++) {
        for (k = 0; k < size; k++) {
            for (j = 0; j < size; j++) {
                res[i][k] += (mat1[i][j] * mat2[j][k]);
            }
        }
    } return (res);
}

double **mul(double i, double **matrix, int size)
{
    int j = 0, k = 0;

    while (j < size) {
        while (k < size) {
            matrix[j][k] = i * matrix[j][k];
            k++;
        } if (k == size)
            k = 0;
        j++;
    } return (matrix);
}

int compare(double **mat, matrix_t *matrix)
{
    int i = 0, j = 0;

    while (i < matrix->size) {
        while (j < matrix->size) {
            if (mat[i][j] != matrix->nulle[i][j])
                return (84);
            j++;
        } if (j == matrix->size)
            j = 0;
        i++;
    } return (0);
}