/*
** EPITECH PROJECT, 2019
** is_not_digit
** File description:
** is_not_digit
*/

#include "../../include/my.h"

int is_not_digit(char c)
{
    if (c < '0' || c > '9')
        return (1);
    return (0);
}