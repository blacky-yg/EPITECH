/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_compute_square_root
*/

#include "../../include/my.h"

int my_compute_square_root(int nb)
{
    int rt_sq = 1;

    if (nb < 0)
        return (0);
    for (; rt_sq * rt_sq < nb; rt_sq++);
    if (rt_sq * rt_sq == nb)
        return (rt_sq);
    return (0);
}