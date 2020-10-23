/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays one-by-one the characters of a string
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int s = my_strlen(str);
    write(1, str, s);
    return (0);
}