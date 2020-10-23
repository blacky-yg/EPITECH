/*
** EPITECH PROJECT, 2020
** tab_len
** File description:
** return tab length
*/

#include "../include/minishell.h"

int tab_len(char **tab)
{
    int i = 0;

    if (tab == NULL)
        return (0);
    while (tab[i] != NULL)
        i++;
    return (i);
}
