/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** trigo.h
*/

#ifndef _TRIGO_H_
#define _TRIGO_H_

#include "my.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

typedef struct matrix_s
{
    int ac;
    char **av;
    int size;
    double **arg_matrix;
    double **identity;
    double **nulle;
    double **result;
} matrix_t;

// error and usage
void usage(void);
int is_digit(char c);
int is_not_digit(char c);
int check_av(int ac, char *av[]);

//matrix
double **malloc_matrix(double **matrix, int size);
double **identity_matrix(int size);
void display_matrix(double **matrix, int size);
double **fill_matrix(double **matrix, char *av[], int size);
double **get_matrix(int ac, char *av[], int size);
double **nulle_matrix(int size);

//matrix_ops
double **add(double **first, double **second, int size);
double **sous(double **first, double **second, int size);
double **multi(double **first, double **second, int size);
double **divi(double **matrix, int size, double nb);
double **power(double **matrix, int puiss ,int size);
double compute_factorial(double nb);
double **mul(double i, double **matrix, int size);
int find_k(matrix_t *matrix);
int compare(double **mat,matrix_t *matrix);
double **multiplication(double **mat1, double **mat2, int size);

//108trigo
void init_struct(matrix_t *matrix, int ac, char *av[]);
void trigo(matrix_t *matrix);
void exp_func(matrix_t *matrix);
void sin_func(matrix_t *matrix);
void cos_func(matrix_t *matrix);
void cosh_func(matrix_t *matrix);
void sinh_func(matrix_t *matrix);
void free_all(matrix_t *matrix);

#endif /* !_TRIGO_H_ */
