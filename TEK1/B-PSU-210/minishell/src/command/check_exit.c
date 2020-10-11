/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** check_exit
*/

#include "../../include/minishell2.h"

int check_exit(mini_t *mini, char **exit)
{
    if (!my_strcmp(exit[0], "exit")) {
        if (!exit[1]) {
            my_puterror("exit\n");
            mini->return_value = 0;
            return (1);
        } else
            if (my_getnbr(exit[1]) >= 0) {
                my_puterror("exit\n");
                mini->return_value = my_getnbr(exit[1]);
                return (1);
            }
    }
    return (0);
}