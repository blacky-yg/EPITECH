/*
** EPITECH PROJECT, 2021
** day02a
** File description:
** info
*/

#include "double_list.h"

unsigned int double_list_get_size(double_list_t list)
{
    unsigned int nb_elem = 0;
    double_list_t cur = malloc(sizeof(double_list_t));

    for (cur = list; cur != NULL; cur = cur->next, nb_elem++);
    return (nb_elem);
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (true);
    else
        return (false);
}

void double_list_dump(double_list_t list)
{
    double_list_t cur = list;

    for (cur = list; cur != NULL; cur = cur->next)
        printf("%f\n", cur->value);
}