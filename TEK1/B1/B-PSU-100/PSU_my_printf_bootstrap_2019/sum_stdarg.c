/*
** EPITECH PROJECT, 2019
** printf bootstrap
** File description:
** sum of the size of the last nb character
*/

#include "header.h"

int sum_stdarg(int i, int nb, ...)
{
    va_list ap;
    int sum = 0;

    va_start(ap, nb);
    if (i == 0) {
        while (nb > 0) {
            sum += va_arg(ap, int);
            nb--;
        }
    } else if (i == 1) {
        while (nb > 0) {
            sum += my_strlen(va_arg(ap, char*));
            nb--;
        }
    }
    va_end(ap);
    return (sum);
}
