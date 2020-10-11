/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_compute_power_rec
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else {
        if (power == 1)
            return (nb);
        else
            return (nb * my_compute_power_rec(nb, power - 1));
    }
    return (0);
}