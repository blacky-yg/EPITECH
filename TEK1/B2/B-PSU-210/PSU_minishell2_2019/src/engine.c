/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** engine
*/

#include "../include/minishell2.h"

int engine(mini_t *mini)
{
    char **cmd = NULL;
    for (int i = 0; mini->cmd[i]; i++) {
        cmd = my_str_to_word_array(mini->cmd[i], ' ');
        if (check_cmd(mini, cmd))
            if (check_unix_command(mini, cmd))
                return (0);
    }
    return (0);
}