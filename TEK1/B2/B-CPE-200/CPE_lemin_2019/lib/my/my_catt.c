/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_catt
*/

#include "../../include/my.h"

char *my_catt(char *dest, char *src)
{
    int j = 0;
    int k = 0;
    if (src == NULL) {
        dest = NULL;
        return (dest);
    }
    k = my_strlen(dest);
    for (; src[j] != '\0'; j++)
        dest[k + j] = src[j];
    dest[k + j] = '\0';
    return (dest);
}
