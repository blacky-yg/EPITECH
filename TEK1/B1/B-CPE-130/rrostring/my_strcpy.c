/*
** EPITECH PROJECT, 2020
** rrostring
** File description:
** my_strcpy
*/

#include "rrostring.h"

char *my_strcpy(char *dest, char *src)
{
    int j = 0;

    for (int i = 0; src[i]; j++) {
        for (; src[i] && is_not_space(src, i); i++, j++)
            dest[j] = src[i];
        for (; is_space(src, i); i++);
        dest[j] = 32;
    }
    dest[j + 1] = '\0';
    return (dest);
}