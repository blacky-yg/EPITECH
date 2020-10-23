/*
** EPITECH PROJECT, 2019
** C Programming my_put_nbr
** File description:
** a function that displays the number given as a parameter
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int nb_2;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }

    if (nb >= 10) {
        nb_2 = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(nb_2 + 48);
    }
    else
        my_putchar(nb + 48);
    return (0);
}
