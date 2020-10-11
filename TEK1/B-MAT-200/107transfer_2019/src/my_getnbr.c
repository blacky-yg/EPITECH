/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** return the number send to the fct as a string
*/

#include "../include/transfer.h"

int my_getnbr(char const *str)
{
    int neg = 1;
    int i = 0;
    int result = 0;

    for (i = 0; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            neg *= -1;
    }
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (result);
        if ((result < 214748364) || (result == 214748364 && str[i] <= '7'))
        {
            result = (result * 10) + (str[i] - 48);
        } else
            return (0);
        i++;
    }
    return (result * neg);
}