/*
** EPITECH PROJECT, 2019
** Evaluating an Arithmetic Expression: Check_brackets
** File description:
** A function that check brackets
*/

#include "bistromatic.h"
#include "my.h"

char *check_brackets(char const *str, char *res)
{
    char *s1;

    while (*str == ' ')
        (str)++;
    if (*str == '(')
    {
        (str)++;
        s1 = summands(str, res);
        if (*str == ')')
        {
            (str)++;
            return (s1);
        }
    }
    return (get_num_in_char(str));
}
