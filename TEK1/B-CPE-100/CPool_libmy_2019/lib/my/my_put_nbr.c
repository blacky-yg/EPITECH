/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_put_nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + '0');
    else if (nb < 0) {
        write(1, "-", 1);
        nb = nb * (-1);
        my_put_nbr(nb);
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}