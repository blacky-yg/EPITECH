/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** see
*/

#include "../include/lemin.h"

int seeee(anthill ant[], char **bef_and_aft)
{
    int j = 0, x = 0, a = 0;
    for (j = 0; ant[j].name[0] != '\0'; j++) {
        if (my_strcmp(ant[j].name, bef_and_aft[0]) == 0) {
            for (x = 0; ant[j].next[x][0] != '\0'; x++);
            my_catt(ant[j].next[x], bef_and_aft[1]);
            a++;
        }
        if (my_strcmp(ant[j].name, bef_and_aft[1]) == 0) {
            for (x = 0; ant[j].next[x][0] != '\0'; x++);
            my_catt(ant[j].next[x], bef_and_aft[0]);
            ant[j].next[x][my_strlen(bef_and_aft[0])] = '\0';
            a++;
        }
    }
    if (a < 2)
        return (84);
    return (0);
}

int see_is_in(anthill ant[], char *tun)
{
    char **bef_and_aft = malloc(sizeof(char *) * 3);
    int e = 0, i = 0, j = 0, c = 0;
    bef_and_aft[0] = malloc(sizeof(char) * my_strlen(tun));
    bef_and_aft[1] = malloc(sizeof(char) * my_strlen(tun));
    bef_and_aft[2] = NULL;
    if (tun[0] == '\0')
        return (84);
    for (; tun[i] != '\0'; i++, j++) {
        if (tun[i] == '-') {
            bef_and_aft[e][j] = '\0';
            j = -1;
            e++;
        } else
            bef_and_aft[e][j] = tun[i];
    }
    bef_and_aft[e][j] = '\0';
    c = seeee(ant, bef_and_aft);
    return (c);
}
