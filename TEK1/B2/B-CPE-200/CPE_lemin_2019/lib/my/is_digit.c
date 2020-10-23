/*
** EPITECH PROJECT, 2019
** is_digit
** File description:
** is_digit
*/

#include "../../include/my.h"

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}