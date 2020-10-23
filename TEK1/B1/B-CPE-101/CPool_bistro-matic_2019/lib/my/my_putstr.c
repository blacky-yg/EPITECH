/*
** EPITECH PROJECT, 2019
** Pointers : my_putstr
** File description:
** a function that displays, one-by-one, the characters of a string.
*/

#include "my.h"

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}
