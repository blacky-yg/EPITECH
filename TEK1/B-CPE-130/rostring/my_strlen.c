/*
** EPITECH PROJECT, 2020
** rostring
** File description:
** my_strlen
*/

#include "rostring.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}