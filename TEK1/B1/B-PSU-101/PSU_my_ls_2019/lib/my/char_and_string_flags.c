/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** char_and_string_flags
*/

#include "../../include/my.h"

void char_and_string_flags(char *str, int counter, va_list ap)
{
    switch (str[counter + 1]) {
        case '%':
            write(1, "%", 1);
            break;
        case 'c':
            my_putchar(va_arg(ap, int));
            break;
        case 's':
            my_putstr(va_arg(ap, char *));
            break;
        default:
            break;
    }
    write(1, &str[counter], 0);
}