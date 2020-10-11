/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_is_prime
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    int i = 1;
    int div = 0;

    for (; i <= nb; i++)
        if (nb % i == 0)
            div++;
    if (div == 2)
        return (1);
    return (0);
}