/*
** EPITECH PROJECT, 2019
** my_put_nb
** File description:
** displays the numbers
*/

#include "../include/my_printf.h"

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + '0');
    else if (nb < 0) {
        if (nb == -2147483648) {
            my_putchar('-');
            my_putchar('2');
            my_put_nbr(147483648);
        } else {
            my_putchar('-');
            nb = nb * (-1);
            my_put_nbr(nb);
        }
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}