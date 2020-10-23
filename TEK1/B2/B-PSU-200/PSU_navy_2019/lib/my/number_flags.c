/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** number_flags
*/

#include "../../include/my.h"

void number_flags(char *str, int counter, va_list ap)
{
    switch (str[counter + 1]) {
        case 'd':
            my_put_nbr(va_arg(ap, int));
            break;
        case 'i':
            my_put_nbr(va_arg(ap, int));
            break;
        default:
            write(1, &str[counter], 1);
            break;
    }
    write(1, &str[counter], 0);
}