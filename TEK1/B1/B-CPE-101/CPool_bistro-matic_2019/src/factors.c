/*
** EPITECH PROJECT, 2019
** Evaluating an Arithmetic Expression: factors
** File description:
** a function that returns the product of the expression given as parameter.
*/

#include "bistromatic.h"
#include "my.h"

char *factors(char const *str, char *res)
{
    char *s1;
    char *s2;
    char sign;

    s1 = check_brackets(str, res);
    while (*str) {
        while (*str == ' ')
            (str)++;
        sign = *str;
        if (sign != '/' && sign != '*' && sign != '%')
            return (s1);
        (str)++;
        s2 = check_brackets(str, res);
        if (sign == '*')
            s1 = mult_operation(s1, s2, res);
        else if (sign == '/')
            s1 = div_operation(s1, s2, res);
        else if (sign == '%')
            s1 = mod_operation(s1, s2, res);
    }
    return (s1);
}
