/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** number_flags
*/

#include "../include/my_printf.h"

void number_flags(char *str, int counter, va_list ap)
{
    switch (str[counter + 1])
    {
        case 'd':
            my_put_nbr(va_arg(ap, int));
            break;
        case 'i':
            my_put_nbr(va_arg(ap, int));
            break;
        case 'o':
            my_putnbr_base(va_arg(ap, int), "01234567");
            break;
        case 'b':
            my_putnbr_base(va_arg(ap, int), "01");
            break;
        case 'u':
            my_put_nbr(get_unsigned_int(va_arg(ap, int)));
            break;
        case 'x':
            my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
            break;
        case 'X':
            my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
            break;
        default:
            write(1, &str[counter], 1);
            break;
    }
    write(1, &str[counter], 0);
}