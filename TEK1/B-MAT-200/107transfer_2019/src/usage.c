/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** usage
*/

#include "../include/transfer.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("    ./107transfer [num den]*\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("    num\t    polynomial numerator defined by its coefficients");
    write(1, "\n", 1);
    my_putstr("    den\t    polynomial denominator defined by its ");
    my_putstr("coefficients\n");
}