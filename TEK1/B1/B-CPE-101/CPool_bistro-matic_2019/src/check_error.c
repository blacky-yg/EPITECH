/*
** EPITECH PROJECT, 2019
** Bistro-matic: check_error
** File description:
** a function that permit to check all input error
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

int check_error(char const *base, char const *ops, char const *expr)
{
    int check_value;
    char *ops_res;
    char *expr_res;

    ops_res = malloc(sizeof(*ops_res) + 1);
    expr_res = malloc(sizeof(*expr_res) + 1);
    get_value(expr, base, ops_res, expr_res);
    if ((check_value = check_expr_base_error(expr) == EXIT_BASE))
        return (check_value);
    else if ((check_value = check_ops_base_error(ops)) == EXIT_OPS)
        return (check_value);
    else if ((check_value = check_base_num(expr, expr_res)) == EXIT_BASE)
        return (check_value);
    else if ((check_value = check_base_ops(ops, ops_res)) == EXIT_BASE)
        return (check_value);
}
