/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** main
*/

#include "../include/minishell2.h"

int main(int ac, char *av[], char *env[])
{
    (void)av;
    mini_t *mini = (mini_t *)malloc(sizeof(*mini));
    if (ac != 1 && env != NULL) {
        free(mini);
        return (84);
    } else
        init_struct(mini, env);
    return (my_sh(mini));
}