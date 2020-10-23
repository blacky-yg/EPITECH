/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** check_cmd
*/

#include "../../include/minishell2.h"

int check_cmd(mini_t *mini, char **cmd)
{
    char *command[4] = {"cd", "env", "setenv", "unsetenv"};
    void (*func[4])(mini_t *mini, char **cmd) = {&my_cd, &my_env,
                                                &my_setenv, &my_unsetenv};
    int is_builtin = 0;
    for (int i = 0; i < 5; i++) {
        if (!my_strcmp(command[i], cmd[0])) {
            func[i](mini, cmd);
            is_builtin = 1;
        }
    }
    if (opendir(cmd[0]) == NULL && cmd[0][0] == '.'
            && cmd[0][1] == '/') {
        my_binary(mini, cmd);
        is_builtin = 1;
    }
    if (is_builtin == 0)
        return (1);
    return (0);
}