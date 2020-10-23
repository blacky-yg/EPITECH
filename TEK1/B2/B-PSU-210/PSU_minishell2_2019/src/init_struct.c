/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** init_struct
*/

#include "../include/minishell2.h"

void init_struct(mini_t *mini, char **env)
{
    char *home = "HOME";
    mini->return_value = 0;
    mini->env = get_env(env);
    mini->env_var.path = get_path(env);
    mini->env_var.home = get_var(mini, home);
}