/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** matrix
*/

#include "../include/trigo.h"

double **malloc_matrix(double **matrix, int size)
{
    matrix = (double **)malloc(sizeof(double *) * size);
    for (int i = 0; i < size; i++)
        matrix[i] = (double *)malloc(sizeof(double) * size);
    return (matrix);
}

double **identity_matrix(int size)
{
    double **identity = malloc_matrix(identity, size);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (i == j)
                identity[i][j] = 1;
            else
                identity[i][j] = 0;
    return (identity);
}

double **nulle_matrix(int size)
{
    double **nulle = malloc_matrix(nulle, size);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            nulle[i][j] = 0;
    return (nulle);
}

double **fill_matrix(double **matrix, char *av[], int size)
{
    int row = 0, col = 0;
    for (int i = 0; av[i + 2] != NULL; i++) {
        matrix[row][col] = my_getnbr(av[i + 2]);
        col++;
        if (col == size) {
            col = 0;
            row++;
        }
    }
    return (matrix);
}

double **get_matrix(int ac, char *av[], int size)
{
    double **matrix = malloc_matrix(matrix, size);
    matrix = fill_matrix(matrix, av, size);
    return (matrix);
}

void display_matrix(double **matrix, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (j < size - 1)
                printf("%.2f\t", matrix[i][j]);
            else
                printf("%.2f\n", matrix[i][j]);
}