/*
** EPITECH PROJECT, 2019
** 102architect
** File description:
** scaling
*/

#include "../include/my.h"
#include "../include/102architect.h"

void scaling(char *A, char *B, char *C, char *D, char *E)
{
    float m = atof(A);
    float n = atof(B);
    float p = atof(D);
    float q = atof(E);
    float x = m * p;
    float y = n * q;

    printf("Scaling by factors %.0f and %.0f\n", p, q);
    printf("%.2f   0.00    0.00\n", p);
    printf("0.00    %.2f    0.00\n", q);
    printf("0.00    0.00    1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", m, n, x, y);
}
