/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** displays all the digits in ascending order
*/

#include <unistd.h>

int my_print_digits(void)
{
    for (int digit = 48; digit <= 57; digit++)
        my_putchar(digit);
}
