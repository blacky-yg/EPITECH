/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** ptr_flag
*/

#include "../../include/my.h"

int ptr_flag(va_list ap, int i, char *str)
{
    my_putstr("0x");
    my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
    return (i);
}
