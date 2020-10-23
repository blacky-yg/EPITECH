/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** command
*/

#include "../include/minishell1.h"

int command(char *array[], char *env[], list_t *list)
{
    if (!my_strcmp(array[0], "cd"))
        my_cd(array, env);
    if (!my_strcmp(array[0], "env"))
        display_list(list);
    if (!my_strcmp(array[0], "setenv"))
        list = my_setenv(array, env, list);
    if (!my_strcmp(array[0], "unsetenv"))
        my_unsetenv(array, env);
}