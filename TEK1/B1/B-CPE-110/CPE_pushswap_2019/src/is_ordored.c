/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** is_ordered
*/

#include "../include/my.h"
#include "../include/push_swap.h"

int is_ordered(int ac, list_t **list)
{
    list_t *l_a = *list;
    int i = 1;
    int nbr_argc = ac - 1;

    for (; l_a->next != NULL && l_a->number <= l_a->next->number; i++)
        l_a = l_a->next;
    if (i == nbr_argc) {
        write(1, "\n", 1);
        return (1);
    } else
        return (0);
}