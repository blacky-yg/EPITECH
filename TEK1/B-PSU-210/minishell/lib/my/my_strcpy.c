/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copies a string into another
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}