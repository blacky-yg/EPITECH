/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** my_binary
*/

#include "../../include/minishell2.h"

void my_binary(mini_t *mini, char **cmd)
{
    pid_t pid;
    if ((pid = fork()) == -1)
        return;
    if (pid == 0)
        execve(cmd[0], cmd, mini->env);
    wait(&pid);
}