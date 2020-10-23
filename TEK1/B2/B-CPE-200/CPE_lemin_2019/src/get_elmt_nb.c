/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** get_elmt_nb
*/

#include "../include/lemin.h"

int nb_start(char **lines, lem_t *lemin)
{
    int p = 0, a = 0, c = total(lines);
    for (int i = 0; lines[i] != NULL && lines[i][0] != '\0'; i++) {
        if (!my_strcmp(lines[i], "##start"))
            p = i;
        for (; p != 0 && is_n(lines[i]) == 1
&& cmp(lines[i], "##end") == 1; i++)
            a++;
        if (a != 0)
            break;
    }
    nb = malloc(sizeof(char) * 11);
    if (a > 0 && p != 0) {
        lemin->start = malloc(sizeof(gal_t) * (a));
        lemin->start[0].name = NULL;
        fill_start(p, lemin, lines, a - 1);
    } else {
        lemin->start = malloc(sizeof(gal_t) * (1));
        lemin->start[0].name = NULL;
    }
    return (a);
}

int nb_end(char **lines, lem_t *lemin)
{
    int p = 0, a = 0;
    for (int i = 0; lines[i]; i++) {
        if (!my_strcmp(lines[i], "##end"))
            p = i;
        for (; p != 0 && is_n(lines[i]) == 1; i++)
            a++;
        if (a != 0)
            break;
    }
    a -= 1;
    nc = malloc(sizeof(char) * 11);
    if (a > 0) {
        lemin->end = malloc(sizeof(gal_t) * (a + 1));
        lemin->end[0].name = NULL;
        fill_end(p, lemin, lines, a);
    } else {
        lemin->end = malloc(sizeof(gal_t) * (1));
        lemin->end[0].name = NULL;
    }
    return (a);
}

int nb_rooms(char **lines, lem_t *lemin)
{
    int a = 0;
    for (int i = 1; is_n(lines[i]) == 1 &&
my_strcmp(lines[i], "##start") != 0 && my_strcmp(lines[i], "##end") != 0; i++)
        a++;
    nd = malloc(sizeof(char) * 11);
    lemin->rooms = malloc(sizeof(gal_t) * (a + 2));
    lemin->rooms[0].name = NULL;
    fill_rooms(0, lemin, lines, a);
    return (a);
}

int nb_tunnels(char **lines, lem_t *lemin)
{
    int a = 0, d = 0, s = 0;
    lemin->tunnels = malloc(sizeof(char *) * (nb_tu(lines) + 2));
    lemin->tunnels[0] = NULL;
    for (int i = 1; lines[i] != NULL; i++)
        if (is_tunnel(lines[i]) == 0) {
            s = my_strlen(lines[i]) + 1;
            lemin->tunnels[d] = malloc(sizeof(char) * s);
            lemin->tunnels[d][0] = '\0';
            my_catt(lemin->tunnels[d], lines[i]);
            lemin->tunnels[d + 1] = NULL;
            d++;
        }
    return (a);
}
