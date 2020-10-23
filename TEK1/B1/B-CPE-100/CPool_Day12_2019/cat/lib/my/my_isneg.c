/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** N if < 0 && P if >= 0
*/

#include <unistd.h>

int my_isneg(int n)
{
    int negative = 78;
    int positive = 80;

    if (n < 0)
        my_putchar(negative);
    else
        my_putchar(positive);
}
