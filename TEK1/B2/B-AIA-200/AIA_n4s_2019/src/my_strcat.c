/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatenate text
*/

#include "../include/n4s.h"
#include "../include/my.h"

char *my_strcat(char *dest, const char *src)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    for ( ; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}
