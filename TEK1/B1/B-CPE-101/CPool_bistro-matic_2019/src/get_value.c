/*
** EPITECH PROJECT, 2019
** Bistro-matic: get_value
** File description:
** a function that get value of expr
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

void get_value(char const *expr, char const *av, char *ops_res, char *expr_res)
{
    for (int i = 0; expr[i] != '\0'; i++) {
        for (int j = 0; av[j] != '\0'; j++) {
            if (expr[i] != av[j])
                ops_res[i] = expr[i];
            else
                expr_res[i] = expr[i];
        }
    }
}
