/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** duplicate a string
*/

#include "../../include/my.h"

char *my_strdup(char *src)
{
    char *str;
    int len = my_strlen(src) + 1;

    str = malloc(sizeof(char) * (len));
    if (str == NULL)
        return (NULL);
    str = my_strcpy(str, src);
    return (str);
}
