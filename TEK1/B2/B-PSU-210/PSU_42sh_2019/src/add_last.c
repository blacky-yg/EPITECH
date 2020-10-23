/*
** EPITECH PROJECT, 2020
** add_last
** File description:
** Add element at the end of list
*/

#include "../include/list.h"

void add_last(list_t *list, char *str)
{
    elem_t *new_box = malloc(sizeof(elem_t));

    new_box->str = str;
    new_box->prev = list->last;
    new_box->next = NULL;
    if (list->last != NULL)
        list->last->next = new_box;
    else
        list->first = new_box;
    list->last = new_box;
}
