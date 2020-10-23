/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** my_strncat
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int dest_len = my_strlen(dest);

    for (i = 0; src[i] != '\0' && i < nb; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
