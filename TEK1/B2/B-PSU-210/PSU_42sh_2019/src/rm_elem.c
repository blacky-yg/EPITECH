/*
** EPITECH PROJECT, 2020
** rm_elem
** File description:
** Remmove element from list
*/

#include "../include/list.h"

void rm_elem(elem_t **box)
{
    if (box != NULL && *box != NULL)
    {
        elem_t *rm_box = *box;
        elem_t *prev = rm_box->prev;
        elem_t *next = rm_box->next;

        if (prev != NULL)
            prev->next = next;
        if (next != NULL)
            next->prev = prev;
        free (rm_box);
        if (next != NULL)
            *box = next;
        else
            *box = prev;
    }
}
