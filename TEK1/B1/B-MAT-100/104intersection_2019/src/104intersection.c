/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** 104intersection
*/

#include "../include/my.h"

void intersection(char **av)
{
    float opt = atof(av[1]);
    float xp = atof(av[2]);
    float yp = atof(av[3]);
    float zp = atof(av[4]);
    float xv = atof(av[5]);
    float yv = atof(av[6]);
    float zv = atof(av[7]);
    int p = atof(av[8]);
    float a, b, c;
    float disc;
    float sol;
    float sol_1;
    float sol_2;
    float angle;
    angle = M_PI / 2;
    angle = angle - (p * M_PI) / 180;

    if (opt == 1) {
        printf("Sphere of radius %d\n", p);
        printf("Line passing through the point (%.f, %.f, %.f) and parallel to the vector (%.f, %.f, %.f)\n", xp, yp, zp, xv, yv, zv);
        a = pow(xv, 2) + pow(yv, 2) + pow(zv, 2);
        b = (2 * xp * xv) + (2 * yp * yv) + (2 * zp * zv);
        c = (pow(xp, 2) + pow(yp, 2) + pow(zp, 2)) - pow(p , 2);
    } else if (opt == 2) {
        printf("Cylinder of radius %d\n", p);
        printf("Line passing through the point (%.f, %.f, %.f) and parallel to the vector (%.f, %.f, %.f)\n", xp, yp, zp, xv, yv, zv);
        a = pow(xv, 2) + pow(yv, 2);
        b = (2 * xp * xv) + (2 * yp * yv);
        c = (pow(xp, 2) + pow(yp, 2)) - pow(p , 2);
    } else if (opt == 3) {
        printf("Cone with a %d degree angle\n", p);
        printf("Line passing through the point (%.f, %.f, %.f) and parallel to the vector (%.f, %.f, %.f)\n", xp, yp, zp, xv, yv, zv);
        a = (pow(tan(angle), 2) * (pow(xv ,2) + pow(yv, 2))) - pow(zv, 2);
        b = (pow(tan(angle), 2) * (2 * xp * xv + 2 * yp * yv)) - (2 * zp * zv);
        c = (pow(tan(angle), 2) * (pow(xp ,2) + pow(yp, 2))) - pow(zp, 2);
    }
    disc = pow(b, 2) - (4 * a * c);
    if (angle < 0 || angle > 2 * M_PI)
        exit(84);
    if (xv == 0 && yv == 0 && zv == 0)
        exit(84);
    else if (a == 0 && b != 0 && c != 0)
        exit(84);
    else if (a == 0 && b == 0 && c == 0)
        printf("There is an infinite number of intersection points.\n");
    else if (disc == 0) {
        printf("1 intersection point:\n");
        sol = -b / (2 * a);
        printf("(%.3f, %.3f, %.3f)\n", a, yp + (sol * yv), zp + (sol * zv));
    } else if (disc > 0) {
        printf("2 intersection points:\n");
        sol_1 = (-b - sqrt(disc)) / (2 * a);
        sol_2 = (-b + sqrt(disc)) / (2 * a);
        printf("(%.3f, %.3f, %.3f)\n", xp + (sol_2 * xv), yp + (sol_2 * yv), zp + (sol_2 * zv));
        printf("(%.3f, %.3f, %.3f)\n", xp + (sol_1 * xv), yp + (sol_1 * yv), zp + (sol_1 * zv));

    } else
        printf("No intersection point.\n");
}