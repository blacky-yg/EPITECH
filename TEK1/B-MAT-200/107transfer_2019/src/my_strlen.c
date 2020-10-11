/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** counts and returns the numbers of characters
*/

#include "../include/transfer.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}