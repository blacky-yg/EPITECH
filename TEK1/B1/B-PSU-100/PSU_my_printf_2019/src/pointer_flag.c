/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** ptr_flag
*/

#include "../include/my_printf.h"

int ptr_flag(va_list ap, int i, char *str)
{
    my_putstr("0x");
    my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
    return (i);
}