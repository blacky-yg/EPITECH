/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** put_in_list_end
*/

#include "../include/minishell1.h"

list_t *put_in_list_end(list_t *list, char *str)
{
    data_t *new_data;
    data_t *actual = malloc(sizeof(list_t));

    actual->str = str;
    new_data = list->first;
    for (; new_data->next != NULL; new_data = new_data->next);
    new_data->next = actual;
    actual->next = NULL;
    return (list);
}