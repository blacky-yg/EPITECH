/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** swap
*/

#include "../include/my.h"
#include "../include/push_swap.h"

void push_swap(list_t **l_a, list_t **l_b)
{
    list_t *list_tmp = *l_a;

    while ((*l_a)->next != NULL) {
        if ((*l_a)->number > (*l_a)->next->number) {
            sa_list(l_a);
            pa_list(l_a, l_b);
        } else
            pb_list(l_a, l_b);
    }
    while ((*l_b)->next != NULL)
        pa_list(l_a, l_b);
    paa_list(l_a, l_b);
}