/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** minishell
*/

#include "../include/n4s.h"

int count_tab(char **tab)
{
    int i = 0;
    for (;tab[i] != NULL; i++);
    return (i);
}
