/*
** EPITECH PROJECT, 2019
** Bistro-matic: check_base_ops
** File description:
** a function that check ops in the base
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

int check_base_ops(char const *ops, char *ops_res)
{
    for (int i = 0; ops[i] != '\0'; i++) {
        for (int j = 0; ops_res[j] != '\0'; j++) {
            if (ops[i] != ops_res[j]) {
                my_putstr("base error: value isn't in the base");
                return (EXIT_BASE);
            }
        }
    }
}
