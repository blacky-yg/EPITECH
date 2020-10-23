/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** copy n characters
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int nb)
{
    int i = 0;

    for (i = 0; i < nb && src[i] != '\0'; i++)
        dest[i] = src[i];
    while ( i < nb ) {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
