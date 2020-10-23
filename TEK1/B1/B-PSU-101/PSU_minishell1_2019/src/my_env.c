/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_env
*/

#include "../include/minishell1.h"

list_t *my_env(char *env[])
{
    list_t *list = malloc(sizeof(list_t));

    list->first = NULL;
    for (int i = 77; i > 0; i--)
        list = put_in_list(list, env[i]);
    return (list);
}