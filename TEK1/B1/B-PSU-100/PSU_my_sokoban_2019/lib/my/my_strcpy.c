/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copies a string into another
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int letter = 0;

    while (src[letter] != '\0') {
        dest[letter] = src[letter];
        letter++;
    }
    dest[letter] = '\0';
    return (dest);
}