/*
** EPITECH PROJECT, 2019
** reflection
** File description:
** reflection
*/

#include "../include/my.h"
#include "../include/102architect.h"

void reflection(char *A, char *B, char *C, char *D)
{
    float m = atof(A);
    float n = atof(B);
    float o = atof(D);
    double p = atof(D) * M_PI / 180;
    float x = (cos(2*p) * m) + (sin(2*p) * n);
    float y = (sin(2*p) * m) - (cos(2*p) * n);

    printf("Reflection over an axis with an inclination angle of %.0f"
           " degrees\n", o);
    printf("%.2f   %.2f    0.00\n", cos(2*p), sin(2*p));
    printf("%.2f    %.2f    0.00\n", sin(2*p), -cos(2*p));
    printf("0.00    0.00    1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", m, n, x, y);
}
