/*
** EPITECH PROJECT, 2019
** printf bootstrap
** File description:
** displays the arguments followed by \n
*/

#include "header.h"
#include <stdarg.h>

int disp_stdarg(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    while (*s != '\0') {
        if (*s == 'c')
            my_putchar(va_arg(ap, int));
        if (*s == 'i')
            my_put_nbr(va_arg(ap, int));
        if (*s == 's')
            my_putstr(va_arg(ap, char *));
        my_putchar('\n');
        s++;
    }
    va_end(ap);
    return (0);
}
