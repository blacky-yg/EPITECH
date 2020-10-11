/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char *src)
{
    char *s = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    int i = 0;

    if (src == NULL)
        return (NULL);
    for (int j = 0; dest[j] != '\0'; j++, i++)
        s[i] = dest[j];
    for (int j = 0; src[j] != '\0'; j++, i++)
        s[i] = src[j];
    s[i] = '\0';
    return (s);
}
