/*
** EPITECH PROJECT, 2020
** add_first
** File description:
** Add element in first in the list
*/

#include "../include/list.h"

void add_first(list_t *list, char *str)
{
    elem_t *new_box = malloc(sizeof(elem_t));

    new_box->str = str;
    new_box->next = list->first;
    new_box->prev = NULL;
    if (list->first != NULL)
        list->first->prev = new_box;
    else
        list->last = new_box;
    list->first = new_box;
}
