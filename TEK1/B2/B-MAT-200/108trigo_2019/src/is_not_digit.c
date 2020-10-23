/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** is_not_digit
*/

#include "../include/trigo.h"

int is_not_digit(char c)
{
    if (c < '0' || c > '9')
        return (1);
    return (0);
}