/*
** EPITECH PROJECT, 2019
** Kind of Basic Calculator
** File description:
** Usage for help (-h)
*/

#include "my.h"
#include "bistromatic.h"

int usage(char **str)
{
    int eq_calc = my_strcmp(str[0], "./calc");
    int eq_h = my_strcmp(str[1], "-h");

    if (eq_calc == 0 && eq_h == 0) {
        my_putstr("USAGE\n");
        my_putstr("./calc base operators size_read\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("- base: all the symbols of the base\n");
        my_putstr("- operators: the symbols for the parentheses");
        my_putstr(" and the 5 operators\n");
        my_putstr("- size_read: number of characters to be read\n");
    }
}
