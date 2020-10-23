/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** is_not_digit
*/

#include "../include/transfer.h"

int is_not_digit(char c)
{
    if (c < '0' || c > '9')
        return (1);
    return (0);
}