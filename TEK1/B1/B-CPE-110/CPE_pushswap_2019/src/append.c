/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** append
*/

#include "../include/my.h"
#include "../include/push_swap.h"

void append(list_t **list, int new_number)
{
    list_t *new_list = (list_t *)malloc(sizeof(list_t));
    list_t *last_node = *list;

    new_list->number  = new_number;
    new_list->next = NULL;
    if (last_node != NULL) {
        while (last_node->next != NULL)
            last_node = last_node->next;
        last_node->next = new_list;
    } else
        *list = new_list;
}