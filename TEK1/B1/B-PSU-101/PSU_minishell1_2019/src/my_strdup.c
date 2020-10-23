/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_strdup
*/

#include "../include/minishell1.h"

char *my_strdup(char *str)
{
    char *cpy_str = malloc(my_strlen(str) + 2);
    int i = 0;

    if (cpy_str == NULL)
        return (NULL);
    cpy_str = my_strcpy(cpy_str, str);
    free(str);
    return (cpy_str);
}
