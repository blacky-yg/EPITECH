/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** inlem
*/

#include "../include/lemin.h"

char *quit_the_start(int x, anthill ant[])
{
    int u = 0, i = 0;
    char *a_a = my_getstring(ant_to_move);
    char *str = malloc(sizeof(char) * 100000);

    str[0] = '\0';
    for (i = 0; ant[i].name[0] != '\0'
        && my_strcmp(ant[i].name, ant[st].next[x]) != 0; i++);
    if (ant[i].name[0] != '\0') {
        fill_it(ant[i].name, str);
        ant[i].status[0] = '\0';
        my_catt(ant[i].status, a_a);
        ant_to_move++;
    }
    return (str);
}

int call_your_bro(anthill ant[], int i, int *n_ants)
{
    char *nb = malloc(sizeof(char) * 11);
    int pos = 0, j = 0, l = 0, x = 0;
    for (j = 0; bank[i][j] != '-'; j++);
    (bank[i][j] == '-') ? j += 1 : 0;
    for (; bank[i][j] != '-' && bank[i][j] != '\0'; j++, l++)
        nb[l] = bank[i][j];
    nb[l] = '\0';
    pos = my_getnbr(nb);
    if (ant[pos].status[0] != '\0' && pos != ps_end)
        return (1);
    for (; ant[0].next[x][0] != '\0' &&
my_strcmp(ant[0].next[x], ant[pos].name) != 0; x++);
    if (n_ants[i] > 0 && (pos == ps_end || (ant[0].next[x][0] != '\0'))) {
        n_ants[i] -= 1;
        my_catt(moves[m_m], quit_the_start(x, ant));
    }
    return (0);
}

int quitstart(anthill ant[], int *n_ants)
{
    int a = 0;
    for (int i = 0; bank[i] != NULL && bank[i][0] != '\0'; i++) {
        a = call_your_bro(ant, i, n_ants);
        if (a != 1 && bank[i + 1] != NULL && bank[i + 1][0] != '\0')
            my_catt(moves[m_m], " ");
    }
}

char *go_to(int x, anthill ant[], int w)
{
    int u = 0, i = x;
    char *str = malloc(sizeof(char) * 100000);

    str[0] = '\0';
    if (ant[i].name[0] != '\0' && ant[w].status[0] != '\0') {
        fill_t(ant[i].name, str, ant[w].status);
        ant[i].status[0] = '\0';
        my_catt(ant[i].status, ant[w].status);
        ant[w].status[0] = '\0';
    }
    return (str);
}
