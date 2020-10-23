/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** get_str
*/

#include "../include/minishell1.h"

char *get_str(void)
{
    char *str = NULL;

    write(1, "<~~Blacky~~> ", 13);
    str = get_next_line(0);
    if (str == NULL)
        return (NULL);
    return (str);
}