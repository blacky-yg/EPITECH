/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my_putnbr_base
*/

#include "../../include/my.h"

int my_putnbr_base(int nb, char *base)
{
    int base_length = my_strlen(base);
    int result = 0;
    int div = 1;

    if (nb == -1) {
        write(1, "FFFFFFFF", 8);
        return (0);
    }
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    while (nb / div >= base_length)
        div *= base_length;
    while (div > 0) {
        result = (nb / div) % base_length;
        write(1, &base[result], 1);
        div /= base_length;
    }
    return (1);
}
