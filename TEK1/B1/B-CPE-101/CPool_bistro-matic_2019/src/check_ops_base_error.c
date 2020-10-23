/*
** EPITECH PROJECT, 2019
** Bistro-matic: check_ops_base_error
** File description:
** a function that check the repetition of operator
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

int check_ops_base_error(char const *ops)
{
    for (int i = 0; i <= my_strlen(ops); i++) {
        for (int j = 0; j <= my_strlen(ops); j++) {
            if (ops[i] == ops[j]) {
                my_putstr("base error: repetition of operator");
                return (EXIT_OPS);
            }
        }
    }
}
