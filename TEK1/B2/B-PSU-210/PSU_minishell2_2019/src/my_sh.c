/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** my_sh
*/

#include "../include/minishell2.h"

char *get_cmd(mini_t *mini, char *str)
{
    str = clean_str(str);
    mini->cmd = my_str_to_word_array(str, ';');
    for (int i = 0; mini->cmd[i]; i++)
        mini->cmd[i] = clean_str(mini->cmd[i]);
    return (str);
}

int my_sh(mini_t *mini)
{
    char *str = get_str();
    for (; str; str = get_str()) {
        signal(SIGINT, handle_signal);
        str = get_cmd(mini, str);
        if (check_exit(mini, my_str_to_word_array(str, ' ')))
            return (mini->return_value);
        if (engine(mini))
            return (mini->return_value);
    }
    return (mini->return_value);
}