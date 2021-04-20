/*
** EPITECH PROJECT, 2021
** day02a
** File description:
** del
*/

#include "double_list.h"

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    double_list_t tmp = *front_ptr;
    if (*front_ptr == NULL)
        return (false);
    *front_ptr = tmp;
    return (true);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t last = *front_ptr;

    if (*front_ptr == NULL)
        return (false);
    if (last->next != NULL) {
        for (; last->next->next != NULL; last = last->next);
        last->next = NULL;
    } else
        *front_ptr = NULL;
    return (true);
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
                                        unsigned int position)
{
}