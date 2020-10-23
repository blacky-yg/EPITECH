/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** fill_struct
*/

#include "../include/lemin.h"

void fill_start(int k, lem_t *lemin, char **lines, int d)
{
    int i = k + 1, a = 0, j = 0, p = 0, s = 10000;
    for (; a < d && lines[i] != NULL; i++, a++) {
        lemin->start[a].name = malloc(sizeof(char) * s);
        for (j = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++) {
            lemin->start[a].name[j] = lines[i][j];
            lemin->start[a].name[j + 1] = '\0';
        }
        (lines[i][j] == ' ') ? j++ : j;
        for (p = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++, p++)
            nb[p] = lines[i][j];
        nb[p] = '\0';
        lemin->start[a].x = my_getnbr(nb);
        (lines[i][j] == ' ') ? j++ : j;
        for (p = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++, p++)
            nb[p] = lines[i][j];
        nb[p] = '\0';
        lemin->start[a].y = my_getnbr(nb);
    }
    lemin->start[d].name = malloc(sizeof(char) * s);
    lemin->start[d].name = NULL;
}

void fill_end(int k, lem_t *lemin, char **lines, int d)
{
    int i = k + 1, a = 0, j = 0, p = 0, s = 10000;
    for (; a < d; i++, a++) {
        lemin->end[a].name = malloc(sizeof(char) * s);
        for (j = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++) {
            lemin->end[a].name[j] = lines[i][j];
            lemin->end[a].name[j + 1] = '\0';
        }
        (lines[i][j] == ' ') ? j++ : j;
        for (p = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++, p++)
            nc[p] = lines[i][j];
        nc[p] = '\0';
        lemin->end[a].x = my_getnbr(nc);
        (lines[i][j] == ' ') ? j++ : j;
        for (p = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++, p++)
            nc[p] = lines[i][j];
        nc[p] = '\0';
        lemin->end[a].y = my_getnbr(nc);
    }
    lemin->end[d].name = malloc(sizeof(char) * s);
    lemin->end[d].name[0] = '\0';
}

void fill_rooms(int k, lem_t *lemin, char **lines, int d)
{
    int i = k + 1, a = 0, j = 0, p = 0, s = 10000;
    for (; a < d; i++, a++) {
        lemin->rooms[a].name = malloc(sizeof(char) * s);
        for (j = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++) {
            lemin->rooms[a].name[j] = lines[i][j];
            lemin->rooms[a].name[j + 1] = '\0';
        }
        (lines[i][j] == ' ') ? j++ : j;
        for (p = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++, p++)
            nd[p] = lines[i][j];
        nd[p] = '\0';
        lemin->rooms[a].x = my_getnbr(nd);
        (lines[i][j] == ' ') ? j++ : j;
        for (p = 0; lines[i][j] != '\0' && lines[i][j] != ' '; j++, p++)
            nd[p] = lines[i][j];
        nd[p] = '\0';
        lemin->rooms[a].y = my_getnbr(nd);
    }
    lemin->rooms[d].name = malloc(sizeof(char) * s);
    lemin->rooms[d].name[0] = '\0';
}
