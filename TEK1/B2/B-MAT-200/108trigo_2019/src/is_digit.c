/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** is_digit
*/

#include "../include/trigo.h"

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}