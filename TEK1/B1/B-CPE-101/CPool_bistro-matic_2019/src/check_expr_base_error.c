/*
** EPITECH PROJECT, 2019
** Bistro-matic: check_expr_base_error
** File description:
** a function that check the repetition of number
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

int check_expr_base_error(char const *expr)
{
    for (int i = 0; i <= my_strlen(expr); i++) {
        for (int j = 0; j <= my_strlen(expr); j++) {
            if (expr[i] == expr[j]) {
                my_putstr("base error: repetition of number");
                return (EXIT_BASE);
            }
        }
    }
}
