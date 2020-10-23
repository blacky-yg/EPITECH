/*
** EPITECH PROJECT, 2019
** number
** File description:
** number
*/

#include "bistromatic.h"
#include "my.h"
#include <stdlib.h>

char *get_num_in_char(char const *str)
{
    int neg_nbr = 1;
    int i = 0;
    char *result;

    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            result[0] = '-';
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        //nbr = nbr * 10 + (*str[i] - 48);
        result[i] = str[i];
        (str)++;
    }
    return (result);
}
