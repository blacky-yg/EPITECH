/*
** EPITECH PROJECT, 2019
** Bistro-matic: check_base_num
** File description:
** a function that check num in base
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

int check_base_num(char const *expr, char *expr_res)
{
    for (int i = 0; expr[i] != '\0'; i++) {
        for (int j = 0; expr_res[j] != '\0'; j++) {
            if (expr[i] != expr_res[j]) {
                my_putstr("base error: value isn't in the base");
                return (EXIT_BASE);
            }
        }
    }
}
