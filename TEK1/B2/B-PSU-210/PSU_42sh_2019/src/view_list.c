/*
** EPITECH PROJECT, 2020
** view_list
** File description:
** View list status
*/

#include "../include/list.h"

void view_list(list_t list)
{
    elem_t *box = list.first;

    while (box != NULL) {
        my_printf("%s\n", box->str);
        box = box->next;
    }
}
