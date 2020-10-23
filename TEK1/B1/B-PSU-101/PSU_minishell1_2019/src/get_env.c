/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** get_home
*/

#include "../include/minishell1.h"

char *get_env(char *str, char *env[])
{
    int i = 0;
    int j = 0;
    char *env_var = malloc(50);
    int len_str = my_strlen(str);
    int k = 0;

    for (; env[i] && my_strncmp(str, env[i], len_str); i++);
    for (; env[i][j] != 61; j++);
    j++;
    for (; env[i][j] != '\0'; j++, k++)
        env_var[k] = env[i][j];
    env_var[k] = '\0';
    return (env_var);
}