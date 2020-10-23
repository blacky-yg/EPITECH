/*
** EPITECH PROJECT, 2020
** countwords
** File description:
** my_strlen
*/

#include "countwords.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; *str; *str++, i++);
    return (i);
}