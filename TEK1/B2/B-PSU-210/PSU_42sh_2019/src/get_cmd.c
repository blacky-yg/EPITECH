/*
** EPITECH PROJECT, 2020
** get_cmd
** File description:
** Get command line
*/

#include "../include/minishell.h"

char *get_cmd(void)
{
    int rd;
    size_t size = 4;
    char *str;

    str = malloc(sizeof(char) * size);
    rd = getline (&str, &size, stdin);
    if (rd == -1)
        return (NULL);
    else {
        str[rd - 1] = '\0';
        return (str);
    }
}
