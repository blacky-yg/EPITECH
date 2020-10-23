/*
** EPITECH PROJECT, 2019
** Evaluating an Arithmetic Expression: summands
** File description:
** a function that returns the sum of the expression given as parameter.
*/

#include "bistromatic.h"
#include "my.h"

char *summands(char const *str, char *res)
{
    char *s1;
    char *s2;
    char sign;

    s1 = check_brackets(str, res);
    //s1 = factors(str, res);
    while (*str) {
        while (*str == ' ')
            (str)++;
        sign = *str;
        if (sign != '+' && sign != '-')
            return (s1);
        (str)++;
        //s2 = factors(str);
        s2 = check_brackets(str, res);
        if (sign == '+')
            res = add_operation(s1, s2, res);
        else
            res = sub_operation(s1, s2, res);
    }
    return (res);
}
