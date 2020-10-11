/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** my_cd
*/

#include "../../include/minishell2.h"

void my_cd(mini_t *mini, char **cmd)
{
    char *buffer = malloc(256);
    char *current = malloc(sizeof(char) * 256);
    if (cmd[0] != NULL && cmd[1] == NULL)
        chdir(mini->env_var.home);
    else if (cmd[1] != NULL && cmd[2] == NULL) {
        if (!my_strcmp(cmd[1], "-"))
            cmd[1] = get_var(mini, "OLDPWD");
        if (chdir(cmd[1]) != 0)
            perror(cmd[1]);
    } else
        my_putstr("cd: Too many arguments.\n");
}