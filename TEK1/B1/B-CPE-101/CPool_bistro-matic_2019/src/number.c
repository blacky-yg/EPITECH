/*
** EPITECH PROJECT, 2019
** number
** File description:
** number2
*/

#include "bistromatic.h"
#include "my.h"

int number(char *str)
{
    int nbr = 0;
    int neg_nbr = 1;
    int i = 0;

    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            neg_nbr *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nbr = nbr * 10 + (str[i] - 48);
        (str)++;
    }
    return (nbr * neg_nbr);
}
