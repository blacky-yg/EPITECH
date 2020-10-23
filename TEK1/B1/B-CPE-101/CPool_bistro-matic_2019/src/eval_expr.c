/*
** EPITECH PROJECT, 2019
** Evaluating an Arithmetic Expression: Eval_expr
** File description:
** eval_expr
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

char *eval_expr(char const *base, char const *ops,
                char const *expr, unsigned int size)
{
    int len;
    char *res;

    len = my_strlen(expr);
    res = malloc(len + 1);
    summands(expr, res);
    return (res);
}
