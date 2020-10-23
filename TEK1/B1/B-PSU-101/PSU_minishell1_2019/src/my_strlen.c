/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_strlen
*/

#include "../include/minishell1.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}