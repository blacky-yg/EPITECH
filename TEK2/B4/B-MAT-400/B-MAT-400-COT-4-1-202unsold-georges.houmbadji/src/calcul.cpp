/*
** EPITECH PROJECT, 2021
** calcul.cpp
** File description:
** calcul.cpp
*/

#include "../include/unsold.hpp"

double probxy(int x, int y, int a, int b)
{
    double res = (double)((a - x) * (b - y)) / (((5*a) - 150) * ((5*b) - 150));
    return (res);
}

double my_round(double d)
{
    int a = (int)(d * 10000), b = 0;

    b = (int)(a / 10);
    if (a % 10 > 5) {
        ++b;
    }
    return ((double)b / 1000);
}
