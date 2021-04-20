/*
** EPITECH PROJECT, 2021
** day02m
** File description:
** div
*/

#include "castmania.h"

int integer_div(int a, int b)
{
    if (b == 0)
        return (0);
    else
        return (a / b);
}

float decimale_div(int a, int b)
{
    float f = 0.0;

    if (b == 0)
        return (0.00);
    else {
        f = (float)a / (float)b;
        return (f);
    }
}

void exec_div(division_t *operation)
{
    integer_op_t *integer;
    decimale_op_t *decimal;

    if (operation->div_type == INTEGER) {
        integer = (integer_op_t *)operation->div_op;
        integer->res = integer_div(integer->a, integer->b);
    } else if (operation->div_type == DECIMALE) {
        decimal = (decimale_op_t *)operation->div_op;
        decimal->res = decimale_div(decimal->a, decimal->b);
    }
}