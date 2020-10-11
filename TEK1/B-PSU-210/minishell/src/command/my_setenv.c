/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** my_setenv
*/

#include "../../include/minishell2.h"

void my_setenv(mini_t *mini, char **cmd)
{
    char **env;
    char *tmp;
    int i = 0;

    if (cmd[1] == NULL)
        display_array(mini->env);
    else {
        if (cmd[2] == NULL)
            my_putstr("empty var\n");
        else if (cmd[2] != NULL && cmd[3] == NULL)
            my_putstr("var with content\n");
        else
            my_putstr("setenv: Too many arguments.\n");
    }
}