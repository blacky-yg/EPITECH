/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** create_empty_env
*/

#include "../include/minishell1.h"

list_t *create_empty_env(char *array[], char *env[], list_t *list)
{
    return (put_in_list_end(list, array[1]));
}