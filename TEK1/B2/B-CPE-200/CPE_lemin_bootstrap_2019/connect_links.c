/*
** EPITECH PROJECT, 2020
** connect_link
** File description:
** connect_link
*/

#include "graph.h"

void connect_links(link_t *link1, link_t *link2)
{
    link1->next = link2;
}