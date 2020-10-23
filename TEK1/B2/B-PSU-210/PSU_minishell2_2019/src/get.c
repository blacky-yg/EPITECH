/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** get
*/

#include "../include/minishell2.h"

char *get_str(void)
{
    char *str = NULL;
    write(1, "<~~Blacky~~> ", 13);
    str = get_next_line(0);
    if (str == NULL)
        return (NULL);
    return (str);
}

char **get_env(char **env)
{
    int len = 0;
    char **cpy_env = NULL;
    for (int i = 0; env[i]; i++, len++);
    if ((cpy_env = malloc(sizeof(char *) * (len + 1))) == NULL)
        return (NULL);
    for (int j = 0; j < len; j++)
        cpy_env[j] = my_strdup(env[j]);
    cpy_env[len] = NULL;
    return (cpy_env);
}

char **get_path(char **env)
{
    int nb = 0;
    char **path = NULL;
    for (int i = 0; env[i]; i++) {
        if (!my_strncmp(env[i], "PATH=", 5)) {
            path = my_str_to_word_array(env[i] + 5, ':');
            nb = 1;
        }
    }
    if (nb == 0)
        return (NULL);
    return (path);
}

char *get_var(mini_t *mini, char *var)
{
    char **tmp = my_str_to_word_array(mini->env[0], '=');
    for (int i = 0; my_strcmp(tmp[0], var); i++) {
        if (tmp[0] == NULL)
            break;
        tmp = my_str_to_word_array(mini->env[i], '=');
    }
    if (tmp[0] == NULL)
        return (NULL);
    return (tmp[1]);
}