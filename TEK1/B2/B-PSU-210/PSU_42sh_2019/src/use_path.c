/*
** EPITECH PROJECT, 2020
** use_path
** File description:
** Access to path to run command
*/

#include "../include/minishell.h"
#include "../include/list.h"

int use_path(char **arg, char **tab_env, list_t env)
{
    char *tmp = NULL;
    char *path = my_getenv(env, "PATH");
    char **path_tab = parse_info(path, ':');

    for (int i = 0; path_tab[i] != NULL; i++) {
        tmp = my_strcat(path_tab[i], my_strcat("/", arg[0]));
        if (access(tmp, F_OK) == 0) {
            arg[0] = tmp;
            solo_exec(arg, tab_env);
            return (0);
        } else
            continue;
    }
    return (-1);
}
