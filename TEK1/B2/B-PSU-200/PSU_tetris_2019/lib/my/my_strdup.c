/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_strdup
*/

#include "../../include/my.h"

char *my_strcpy1(char *dest, char *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i + 1] = '\0';
    return (dest);
}

char *my_strdup(char *str)
{
    char *cpy_str = malloc(my_strlen(str) + 2);

    if (cpy_str == NULL)
        return (NULL);
    cpy_str = my_strcpy1(cpy_str, str);
    free(str);
    return (cpy_str);
}
