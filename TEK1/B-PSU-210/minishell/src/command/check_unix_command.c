/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** check_unix_command
*/

#include "../../include/minishell2.h"

int check_access(mini_t *mini, char *cmd)
{
    if (mini->env_var.path == NULL) {
        not_found("Path");
        return (1);
    }
    for (int i = 0; mini->env_var.path[i]; i++)
        if (!access((my_strcat(mini->env_var.path[i], cmd)), F_OK || X_OK))
            return (0);
    return (1);
}

int is_valid_path(mini_t *mini, char **cmd)
{
    pid_t pid;
    if (check_access(mini, cmd[0]))
        return (1);
    if ((pid = fork()) == -1)
        return (1);
    if (pid == 0)
        for (int i = 0; mini->env_var.path[i]; i++)
            execve((my_strcat(mini->env_var.path[i], cmd[0])), cmd, mini->env);
    wait(&pid);
    return (0);
}

int check_unix_command(mini_t *mini, char **cmd)
{
    if (is_valid_path(mini, cmd)) {
        not_found(cmd[0]);
        return (1);
    }
    return (0);
}