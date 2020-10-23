/*
** EPITECH PROJECT, 2020
** exec_cmd
** File description:
** Execute command
*/

#include "../include/list.h"
#include "../include/minishell.h"

int minicmd_pack(char **arg, list_t env)
{
    if (my_strcmp(arg[0], "cd") == 1) {
        my_cd(env, arg);
        return (0);
    }
    if (my_strcmp(arg[0], "setenv") == 1) {
        my_setenv(env, arg);
        return (0);
    }
    if (my_strcmp(arg[0], "unsetenv") == 1) {
        my_unsetenv(env, arg);
        return (0);
    }
    if (my_strcmp(arg[0], "env") == 1) {
        view_list(env);
        return (0);
    }
    if (my_strcmp(arg[0], "exit") == 1) {
        int i = my_exit(arg);
        return (0);
    }
    return (-1);
}

int exec_cmd(char *cmd, list_t env)
{
    char **cpy_env = list_to_env(env);
    char **arg = convert_to_tab(cmd);

    if (basic_exec(arg, cpy_env) != -2)
        return (0);
    if (minicmd_pack(arg, env) != -1)
        return (0);
    if (use_path(arg, cpy_env, env) != 0) {
        my_printf("%s: Command not found.\n", arg[0]);
        return (84);
    }
    return (0);
}
