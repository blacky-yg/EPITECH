/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays one-by-one the characters of a string
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        *str++;
    }
    return (0);
}
