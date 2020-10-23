/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** put_in_list
*/

#include "../include/minishell1.h"

list_t *put_in_list(list_t *list, char *str)
{
    data_t *new_data = malloc(sizeof(data_t));

    if (list == NULL || new_data == NULL)
        exit(84);
    new_data->str = str;
    new_data->next = list->first;
    list->first = new_data;
    return (list);
}