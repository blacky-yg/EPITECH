/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** my_env
*/

#include "../../include/minishell2.h"

void my_env(mini_t *mini, char **cmd)
{
    display_array(mini->env);
}