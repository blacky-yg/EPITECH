/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** get unsigned int
*/

#include "../include/my_printf.h"

int get_unsigned_int(int nb)
{
    if (nb < 0)
        return (nb + 4294967295 / 2);
    else
        return (nb);
}