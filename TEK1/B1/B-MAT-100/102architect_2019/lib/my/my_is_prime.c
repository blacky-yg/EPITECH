/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** my_is_prime
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    int i;
    int div;

    for (i = 1; i <= nb; i++) {
        if (nb % i == 0)
            div++;
    }
    if (div == 2)
        return (1);
    return (0);
}
