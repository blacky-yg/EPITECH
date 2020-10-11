/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** get_double
*/

#include "../include/transfer.h"

double get_double(char *str)
{
    int i = 0;
    int k = 1;
    double nbr = 0;

    if (str[i] == '-') {
        k *= -1;
        i++;
    }
    for (; is_digit(str[i]); i++)
        nbr = nbr * 10 + (str[i] - 48);
    return (nbr * k);
}
