/*
** EPITECH PROJECT, 2019
** summands
** File description:
** summands
*/

#include "include/my.h"
#include "include/eval_expr.h"

int factors_and_summands(char **str)
{
    char *endptr;
    int number = my_strtol(*str, &endptr);

    while (endptr[0] == '+' || endptr[0] == '-') {
        *str = endptr;
        if (endptr[0] == '+')
            number += my_strtol(*str, &endptr);
        if (endptr[0] == '-')
            number -= -(my_strtol(*str, &endptr));
    }
    return (number);
}
