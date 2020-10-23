/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** duplicate a file
*/

#include "../../include/my.h"

char *my_strdup(char *str)
{
    char *cpy_str = malloc(my_strlen(str) + 1);
    if (cpy_str == NULL)
        return (NULL);
    cpy_str = my_strcpy(cpy_str, str);
    return (cpy_str);
}