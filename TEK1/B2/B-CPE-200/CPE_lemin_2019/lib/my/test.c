/*
** EPITECH PROJECT, 2019
** test
** File description:
** test
*/

#include "../../include/my.h"

int my_flag1(int nb, int limit)
{
    int i = 0;
    if (nb > -2147483648) {
        if (nb < 0) {
            my_putchar('-');
            nb = nb * (-1);
        }
        if (limit < 0) {
            limit *= (-1);
            my_put_nbr(nb);
            for (; i < (limit - count_nbr(nb)); i++)
                my_putchar(' ');
            return (0);
        }
        for (; i < (limit - count_nbr(nb)); i++)
            my_putchar(' ');
    }
    my_put_nbr(nb);
    return (0);
}

int ent(char const *format)
{
    int i = 0, entier = 0, j = 0, k = 0, w = 0;
    for (; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            k++;
            for (; format[i] == ' '; i++) {
            }
            if (format[i] == '-') {
                i++;
                w++;
            }
            for (; format[i] >= 48 && format[i] <= 57; i++, j++)
                entier = (entier + (format[i] - '0')) * 10;
            if (w != 0)
                entier *= (-1);
            entier = entier / 10;
        }
    }
    return (entier);
}

int kk(char const *format)
{
    int i = 0, entier = 0, j = 0, k = 0, w = 0;
    for (; format[i] != '\0'; i++) {
        if (format[i] == '%')
            i++;
        if (format[i - 1] == '-') {
            i++;
            w++;
            k++;
        }
        for (; format[i] >= 48 && format[i] <= 57; i++) {
            k++;
            entier += format[i] - '0';
            if (format[i + 1] >= 48 && format[i + 1] <= 57)
                entier *= 10;
            if (w != 0)
                entier *= (-1);
        }
    }
    return (k);
}