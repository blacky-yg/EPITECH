/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** get_list_length
*/

#include "../include/my.h"
#include "../include/push_swap.h"

int get_list_length(list_t *list)
{
    int count = 0;
    list_t *old_list = list;

    for (count = 0; old_list != NULL; count++)
        old_list = old_list->next;
    return (count);
}