/*
** EPITECH PROJECT, 2020
** library
** File description:
** my_strcat
*/

#include "../../include/my.h"

char *my_str_concat(char *first, char *second)
{
    int len1 = my_strlen(first);
    int len2 = my_strlen(second);
    char *final = malloc(sizeof(char) * (len1 + len2 + 1));
    int j = 0;

    for (int i = 0; first[i] != '\0'; i++, j++)
        final[j] = first[i];
    for (int i = 0; second[i] != '\0'; i++, j++)
        final[j] = second[i];
    final[j] = '\0';
    return (final);
}

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int dest_len = my_strlen(dest);
    char *final = malloc(sizeof(char) * (dest_len + my_strlen(src) + 1));

    for (; dest[i]; i++)
        final[i] = dest[i];
    final[i++] = '/';
    for (int j = 0; src[j]; i++, j++)
        final[i] = src[j];
    final[i] = '\0';
    return (final);
}