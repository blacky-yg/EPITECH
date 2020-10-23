/*
** EPITECH PROJECT, 2020
** free_list
** File description:
** Free double linked list
*/

#include "../include/list.h"
#include "../include/minishell.h"

void free_list(list_t list)
{
    elem_t *tmp;
    elem_t *box = list.first;

    while (box != NULL) {
        tmp = box;
        box = box->next;
        free(tmp);
    }
    list.first = NULL;
    list.last = NULL;
}

void free_tab(char **tab)
{
    if (tab == NULL)
        return;
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}
