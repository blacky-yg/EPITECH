/*
** EPITECH PROJECT, 2019
** my_put_nb
** File description:
** displays the numbers
*/

#include "../../include/my.h"

int my_putnbr(int nb)
{
    int rest;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        rest = nb % 10;
        nb = nb / 10;
        my_putnbr(nb);
        my_putchar(rest + 48);
    } else
        my_putchar(nb + 48);
    return (0);
}