/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_strncpy
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int nb)
{
    int i = 0;

    for (i = 0; i < nb && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < nb; i++)
        dest[i] = '\0';
    return (dest);
}