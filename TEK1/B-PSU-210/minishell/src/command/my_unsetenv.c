/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** my_unsetenv
*/

#include "../../include/minishell2.h"

void my_unsetenv(mini_t *mini, char **cmd)
{
    if (cmd[1] == NULL)
        my_putstr("unsetenv: Too few arguments.\n");
    else
        my_putstr("var set\n");
}