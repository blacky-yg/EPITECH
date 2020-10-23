/*
** EPITECH PROJECT, 2020
** print_data_of_connected_links
** File description:
** print_data_of_connected_links
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

void connect_links(link_t *link1, link_t *link2)
{
    link1->next = link2;
}

void print_link(link_t *link)
{
    printf("%d\n", link->data);
}

int main(void)
{
    link_t *node1 = create_link(4);
    link_t *node2 = create_link(0);
    connect_links(node1, node2);
    print_link(node1);
    return (0);
}