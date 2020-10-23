/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** print_list
*/

#include "../include/my.h"
#include "../include/push_swap.h"

void print_list(list_t *list)
{
    while (list != NULL) {
        my_put_nbr(list->number);
        my_putstr("-> ");
        list = list->next;
    }
    my_putstr("NULL\n");
}