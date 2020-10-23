/*
** EPITECH PROJECT, 2019
** Recursivity: my_compute_square_root
** File description:
** A function that return the square root of the number.
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int result;

    if (nb <= 0)
        return (0);
    else {
        result = my_compute_power_rec(nb, 0.5);
        return (result);
    }
    return (0);
}
