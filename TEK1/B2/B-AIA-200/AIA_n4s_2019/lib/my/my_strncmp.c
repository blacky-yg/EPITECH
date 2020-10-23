/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** compare n characters
*/

#include "../../include/my.h"

int my_strncmp(char *stra, char *strb, int nb)
{
    int x = 0, i = 0;
    for (; i < nb; i++)
        if (stra[i] == strb[i])
            x++;
    if (x == nb)
        return (0);
    else
        return (1);
}
