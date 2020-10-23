/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** s_list
*/

#include "../include/my.h"
#include "../include/push_swap.h"

void sa_list(list_t **list)
{
    list_t *l_a = *list;

    if (l_a == NULL || l_a->next == NULL)
        return;
    *list = (*list)->next;
    l_a->next = (*list)->next;
    (*list)->next = l_a;
    write(1, "sa", 2);
    write(1, " ", 1);
}

void sb_list(list_t **l_b)
{
    list_t *l_a = *l_b;

    if (l_a == NULL || l_a->next == NULL)
        return;
    *l_b = (*l_b)->next;
    l_a->next = (*l_b)->next;
    (*l_b)->next = l_a;
    write(1, "sb", 2);
}

void sc_list(list_t **l_a, list_t **l_b)
{
    sa_list(l_a);
    sb_list(l_b);
    write(1, "sc", 2);
}
