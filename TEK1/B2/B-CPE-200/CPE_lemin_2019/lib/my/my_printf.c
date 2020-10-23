/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../../include/my.h"

int mauvais_char(char const *format, int i)
{
    int k = 0;
    if ((format[i + 1] == 'b' || format[i + 1] == 'p' || format[i + 1] == 'd'
    || format[i + 1] == 'i' || format[i + 1] == 's' || format[i + 1] == 'S'
    || format[i + 1] == 'c' || format[i + 1] == 'u' || format[i + 1] == 'o'
    || format[i + 1] == 'X' || format[i + 1] == 'x') && format[i] == '%')
        k++;
    if ((format[i + 1] == 'b' || format[i + 1] == 'p' || format[i + 1] == 'd'
    || format[i + 1] == 'i' || format[i + 1] == 's' || format[i + 1] == 'S'
    || format[i + 1] == 'c' || format[i + 1] == 'u' || format[i + 1] == 'o'
    || format[i + 1] == 'X' || format[i + 1] == 'x') && (format[i] == '#'
    && format[i - 1] == '%'))
        k++;
    if ((format[i + 2] == 'b' || format[i + 2] == 'p' || format[i + 2] == 'd'
    || format[i + 2] == 'i' || format[i + 2] == 's' || format[i + 2] == 'S'
    || format[i + 2] == 'c' || format[i + 2] == 'u' || format[i + 2] == 'o'
    || format[i + 2] == 'X' || format[i + 2] == 'x') && (format[i + 1] == '#'
    && format[i] == '%'))
        k++;
    return (k);
}

int mauv_char(char const *format, int i)
{
    int k = 0, j = kk(format);
    if ((format[i] == 'b' || format[i] == 'p' || format[i] == 'd'
    || format[i] == 'i' || format[i] == 's' || format[i] == 'S'
    || format[i] == 'c' || format[i] == 'u' || format[i] == 'o'
    || format[i] == 'X' || format[i] == 'x' || format[i] == '%')
    && format[i - 1] == '%')
        k++;
    if ((format[i] == 'b' || format[i] == 'p' || format[i] == 'd'
    || format[i] == 'i' || format[i] == 's' || format[i] == 'S'
    || format[i] == 'c' || format[i] == 'u' || format[i] == 'o'
    || format[i] == 'X' || format[i] == 'x') && format[i - 1] == '#'
    && format[i - 2] == '%')
        k++;
    if (k != 0)
        return (1);
    return (0);
}

int mv_char(char const *format, int i, int j)
{
    int k = 0;
    if (((format[i + 1] >= 48 && format[i + 1] <= 57) || format[i + 1] == '-')
    && format[i] == '%') {
        k++;
        j++;
    }
    if (((format[i] >= 48 && format[i] <= 57) || format[i] == '-') && j != 0)
        k++;
    if ((format[i - 1] >= 48 && format[i - 1] <= 57) && (format[i] == 'b'
    || format[i] == 'p' || format[i] == 'd' || format[i] == 'i'
    || format[i] == 's' || format[i] == 'S' || format[i] == 'c'
    || format[i] == 'u' || format[i] == 'o' || format[i] == 'X'
    || format[i] == 'x') && j != 0)
        k++;
    if (k != 0)
        return (1);
    return (0);
}

int *retunr_me_j(char const *format, int i, int *j)
{
    if (((format[i + 1] >= 48 && format[i + 1] <= 57) ||
        format[i + 1] == '-') && format[i] == '%')
        *j++;
    return (j);
}

int my_printf(char const *format, ...)
{
    va_list ap;
    int i = 0, entier = 0, j = 0, k = 0, w = 0;
    va_start(ap, format);
    for (; format[i] != '\0'; i++) {
        entier = ent(format);
        k = kk(format);
        retunr_me_j(format, i, &j);
        if ((format[i] == 'd' || format[i] == 'i')
            && ((format[i - 1] == '%') || (format[i - 1] == '#'
            && format[i - 2] == '%') ||
            (format[i - 1] >= 48 && format[i - 1] <= 57 && j > 0)))
            my_flag1(va_arg(ap, int), entier);
        if (format[i] == 's' && format[i - 1] == '%')
            my_putstr(va_arg(ap, char *));
        if (mauvais_char(format, i) == 0 && mauv_char(format, i) == 0
        && mv_char(format, i, j) == 0)
            my_putchar(format[i]);
    }
    va_end(ap);
    return (0);
}
