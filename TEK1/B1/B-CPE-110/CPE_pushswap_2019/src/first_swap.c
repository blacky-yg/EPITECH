/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** first_swap
*/

#include "../include/my.h"
#include "../include/push_swap.h"

void first_swap(list_t **list)
{
    if ((*list)->number > (*list)->next->number)
        sa_list(list);
}