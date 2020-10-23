/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** minishell loop
*/

#include "../include/list.h"
#include "../include/minishell.h"

int exec_pipe(char *cmd, list_t env)
{
    int in = dup(STDIN_FILENO), out = dup(STDOUT_FILENO);
    char **cmds = clean_tab(parse_info(cmd, '|'));

    if (tab_len(cmds) != info_nb(cmd, '|')) {
        my_printf("Invalid null command.\n");
        return (0);
    } if (tab_len(cmds) == 1) {
        exec_cmd(cmd, env);
        return (0);
    }
    for (int i = 0; cmds[i] != NULL; i++)
        if (my_strlen(cmds[i]) == 0) {
            my_printf("Invalid null command.\n");
            return (0);
        }
    my_pipe(env, cmds);
    dup2(in, STDIN_FILENO);
    dup2(out, STDOUT_FILENO);
    return (0);
}

int separator(char *cmd, list_t *env)
{
    char **cmds;

    cmds = clean_tab(parse_info(cmd, ';'));
    for (int i = 0; cmds[i] != NULL; i++) {
        if (my_strlen(cmds[i]) == 0)
            continue;
        exec_pipe(cmds[i], *env);
    }
    return (0);
}

int minishell(list_t env)
{
    char *cmd;
    char **cmds;

    while (1) {
        my_printf("$> ");
        cmd = get_cmd();
        if (cmd == NULL)
            return (0);
        cmd = clean_str(cmd);
        if (my_strlen(cmd) == 0)
            continue;
        separator(cmd, &env);
        continue;
    }
    return (0);
}
