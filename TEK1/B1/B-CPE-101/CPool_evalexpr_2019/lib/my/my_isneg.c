/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** N if < 0 && P if >= 0
*/

#include "../../include/my.h"

int my_isneg(int nb)
{
    int neg = 'N';
    int pos = 'P';

    if (nb < 0)
        my_putchar(neg);
    else
        my_putchar(pos);
    return (0);
}
