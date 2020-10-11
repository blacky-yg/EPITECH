/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_strcpy
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int letter = 0;

    for (; src[letter]; letter++)
        dest[letter] = src[letter];
    dest[letter] = '\0';
    return (dest);
}