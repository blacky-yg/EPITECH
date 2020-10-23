/*
** EPITECH PROJECT, 2019
** my_strtol
** File description:
** my_strtol
*/

#include "include/my.h"
#include <stddef.h>

int my_strtol(char *str, char **endptr)
{
    int nb = 0;
    int sign = 1;
    char c;

    while (*str == '-') {
        sign *= -1;
        str++;
    }
    while (*str == ' ')
        str++;
    c = *str;
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
        str++;
    while (*str >= '0' && *str <= '9') {
        nb = nb * 10 + *str - '0';
        str++;
    }
    if (endptr != NULL)
        *endptr = str;
    if (c == '-')
       nb = -nb;
    return (nb * sign);
}
