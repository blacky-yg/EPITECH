/*
** EPITECH PROJECT, 2019
** number
** File description:
** number
*/

#include "include/my.h"
#include "include/eval_expr.h"

int number(char **str)
{
    int nbr = 0;
    int sign = 1;

    while (*(*str) == '-') {
        sign *= -1;
        *(*str)++;
        }
    while (*(*str) == '+') {
        sign *= 1;
        *(*str)++;
    }
    while (*(*str) >= '0' && *(*str) <= '9') {
        nbr = nbr * 10 + (*(*str) - '0');
        *(*str)++;
    }
    return (sign * nbr);
}
