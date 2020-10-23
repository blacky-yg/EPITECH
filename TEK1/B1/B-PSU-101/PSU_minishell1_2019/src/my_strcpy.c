/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_strcpy
*/

#include "../include/minishell1.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i + 1] = '\0';
    return (dest);
}