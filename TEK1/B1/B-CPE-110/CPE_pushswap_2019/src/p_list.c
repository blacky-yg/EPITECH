/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** r_list
*/

#include "../include/my.h"
#include "../include/push_swap.h"

void pa_list(list_t **l_a, list_t **l_b)
{
    list_t *cpy_l_b = *l_b;
    list_t *cpy_l_a = *l_a;

    if (*l_a != NULL && *l_b != NULL || *l_a == NULL) {
        *l_b = (*l_b)->next;
        cpy_l_b->next = *l_a;
        *l_a = cpy_l_b;
        my_putstr("pa ");
    }
    else if (*l_b == NULL)
        return;
}

void pb_list(list_t **l_b, list_t **l_a)
{
    list_t *cpy_l_b = *l_b;
    list_t *cpy_l_a = *l_a;

    if (*l_a != NULL && *l_b != NULL || *l_a == NULL) {
        *l_b = (*l_b)->next;
        cpy_l_b->next = *l_a;
        *l_a = cpy_l_b;
    }
    else if (*l_b == NULL)
        return;
    my_putstr("pb ");
}

void paa_list(list_t **l_a, list_t **l_b)
{
    list_t *cpy_l_b = *l_b;
    list_t *cpy_l_a = *l_a;

    if (*l_a != NULL && *l_b != NULL || *l_a == NULL) {
        *l_b = (*l_b)->next;
        cpy_l_b->next = *l_a;
        *l_a = cpy_l_b;
        my_putstr("pa");
    }
    else if (*l_b == NULL)
        return;
}