/*
** EPITECH PROJECT, 2021
** day02a
** File description:
** add
*/

#include "double_list.h"

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new_node = malloc(sizeof(double_list_t));

    if (new_node == NULL)
        return (false);
    new_node->value = elem;
    new_node->next = malloc(sizeof(double_list_t));
    new_node->next = *front_ptr;
    *front_ptr = new_node;
    return (true);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t new_node = malloc(sizeof(double_list_t));
    double_list_t last = *front_ptr;

    new_node->value = elem;
    new_node->next = NULL;
    if (last == NULL) {
        for (; last->next != NULL; last = last->next);
        last->next = new_node;
    } else
        *front_ptr = new_node;
    return (true);
}

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
                                        unsigned int position)
{
    double_list_t new_node = malloc(sizeof(double_list_t));
    double_list_t last = *front_ptr;

    if (new_node == NULL)
        return (false);
    else if (position == 0)
        return (double_list_add_elem_at_front(front_ptr, elem));
    new_node->value = elem;
    return (true);
}