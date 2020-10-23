/*
** EPITECH PROJECT, 2019
** summands
** File description:
** summands
*/

#include "include/my.h"
#include "include/eval_expr.h"

int summands(char **str)
{
    int number1 = number(str);
    int number2 = 0;
    char sign;

    while (*(*str) != '\0') {
        if (*(*str) == '-' || *(*str) == '+')
            sign = *(*str);
        *(*str)++;
        number2 = number(str);
        if (sign == '-')
            number1 -= number2;
        if (sign == '+')
            number1 += number2;
    }
    return (number1);
}
