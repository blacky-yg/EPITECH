/*
** EPITECH PROJECT, 2019
** rotation
** File description:
** rotation
*/

#include "../include/my.h"
#include "../include/102architect.h"

void rotation(char *A, char *B, char *C, char *D)
{
    float m = atof(A);
    float n = atof(B);
    float p = atof(D);
    double o = (atof(D) * M_PI) / 180;
    float x = (cos(o) * m) + (-sin(o) * n);
    float y = (sin(o) * m) + (cos(o) * n);

    printf("Rotation by a %.0f degree angle\n", p);
    printf("%.2f    %.2f     0.00\n", cos(o), -sin(o));
    printf("%.2f    %.2f      0.00\n", sin(o), cos(o));
    printf("0.00    0.00      1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", m, n, x, y);
}
