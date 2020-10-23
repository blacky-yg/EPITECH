/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** display_data
*/

#include "../include/lemin.h"

void display_the_rest(lem_t *lemin)
{
    for (int i = 0; is_good(lemin->end[i].name) == 0; i++) {
        if (rara == 0) {
            my_putstr("#rooms\n");
            rara = 1;
        }
        my_putstr((i == 0) ? "##end\n" : "");
        for (; lemin->end[i].name != NULL && lemin->end[i].name[0] == '#'; i++);
        if (lemin->end[i].name == NULL || lemin->end[i].name[0] == '\0')
            break;
        write(1, lemin->end[i].name, my_strlen(lemin->end[i].name));
        my_printf(" %d %d\n", lemin->end[i].x, lemin->end[i].y);
    }
    for (int i = 0; lemin->tunnels[i] != NULL
            && lemin->tunnels[i][0] != '\0'; i++) {
        my_putstr((i == 0) ? "#tunnels\n" : "");
        write(1, lemin->tunnels[i], my_strlen(lemin->tunnels[i]));
        write(1, "\n", 1);
    }
}

void display_y(lem_t *lemin)
{
    for (int i = 0; is_good(lemin->start[i].name) == 0; i++) {
        if (rara == 0) {
            my_putstr("#rooms\n");
            rara = 1;
        }
        my_putstr((i == 0) ? "##start\n" : "");
        for (; lemin->start[i].name != NULL
            && lemin->start[i].name[0] == '#'; i++);
        if (lemin->start[i].name == NULL || lemin->start[i].name[0] == '\0')
            break;
        write(1, lemin->start[i].name, my_strlen(lemin->start[i].name));
        my_printf(" %d %d\n", lemin->start[i].x, lemin->start[i].y);
    }
    display_the_rest(lemin);
}

void display_data(lem_t *lemin)
{
    rara = 0;
    my_putstr("#number_of_ants\n");
    my_put_nbr(lemin->ants);
    write(1, "\n", 1);
    for (int i = 0; is_good(lemin->rooms[i].name) == 0; i++) {
        rara = 1;
        my_putstr((i == 0) ? "#rooms\n" : "");
        for (; lemin->rooms[i].name != NULL
                && lemin->rooms[i].name[0] == '#'; i++);
        if (lemin->rooms[i].name == NULL
            || lemin->rooms[i].name[0] == '\0')
            break;
        write(1, lemin->rooms[i].name, my_strlen(lemin->rooms[i].name));
        my_printf(" %d %d\n", lemin->rooms[i].x, lemin->rooms[i].y);
    }
    display_y(lemin);
}
