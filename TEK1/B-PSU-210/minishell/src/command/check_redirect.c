/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** check_redirect
*/

#include "../../include/minishell2.h"

int check_redirect(mini_t *mini, char *cmd)
{
    char **arg = NULL;
    for (int i = 0; cmd[i]; i++) {
        if (cmd[i] == '>' && cmd[i + 1] != '>') {
            return (0);
        } else if (cmd[i] == '>' && cmd[i + 1] == '>') {
            return (0);
        }
    }
    return (1);
}