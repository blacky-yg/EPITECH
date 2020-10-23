/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** put_in_list
*/

#include "../include/minishell1.h"

void display_list(list_t *list)
{
    data_t *data = list->first;

    if (list == NULL)
        exit(84);
    for (; data != NULL; data = data->next) {
        my_putstr(data->str);
        write(1, "\n", 1);
    }
}