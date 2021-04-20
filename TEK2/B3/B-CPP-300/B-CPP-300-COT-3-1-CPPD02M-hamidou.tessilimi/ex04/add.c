/*
** EPITECH PROJECT, 2021
** day02m
** File description:
** add
*/

#include "castmania.h"

int normal_add(int a, int b)
{
    return (a + b);
}

int absolute_add(int a, int b)
{
    return (abs(a) + abs(b));
}

void exec_add(addition_t *operation)
{
    integer_op_t *integer;

    integer = &operation->add_op;
    if (operation->add_type == NORMAL)
        integer->res = normal_add(integer->a, integer->b);
    else if (operation->add_type == ABSOLUTE)
        integer->res = absolute_add(integer->a, integer->b);
}