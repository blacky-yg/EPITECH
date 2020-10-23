/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_setenv
*/

#include "../include/minishell1.h"

list_t *my_setenv(char *array[], char *env[], list_t *list)
{
    if (array[1] == NULL)
        display_list(list);
    if (array[1] != NULL && array[2] == NULL)
        list = create_empty_env(array, env, list);
    if (array[3] != NULL)
        my_putstr("setenv: Too many arguments.\n");
    return (list);
}