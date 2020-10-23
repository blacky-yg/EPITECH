/*
** EPITECH PROJECT, 2020
** create_link
** File description:
** create_link
*/

#include "graph.h"

link_t *create_link(int data)
{
    link_t *node = (link_t *)malloc(sizeof(*node));
    if (node == NULL)
        return (NULL);
    node->data = data;
    node->next = NULL;
    return (node);
}