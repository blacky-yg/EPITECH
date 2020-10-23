/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** free_all
*/

#include "../include/lemin.h"

void init_global(void)
{
    m_m = 0;
    quit = 0;
    arriv = 0;
}

int free_some_ant(anthill ant[], char **input)
{
    int a = 0, s = 0, nb = 0;
    int *n_ants;
    init_global();
    dod();
    sort();
    if (bank[0] == NULL || bank[0][0] == '\0')
        return (84);
    if (count_this(bank[0], '-') == 1) {
        bank[1] = NULL;
        for (int y = 2; bank[y] != NULL; y++)
            free(bank[y]);
    }
    nb = nb_path();
    n_ants = malloc(sizeof(int) * nb);
    math_logic(n_ants, nb);
    for (int i = 0; bank[i] != NULL && bank[i][0] != '\0'; i++)
        n_ants[i] -= count_this(bank[i], '-');
    move_your_ass(ant, n_ants, nb);
}

void free_anthill(anthill ant[])
{
    for (int i = 0; ant[i].name[0] != '\0'; i++) {
        free(ant[i].name);
        for (int j = 0; ant[i].next[j][0] != '\0'; j++)
            free(ant[i].next[j]);
        free(ant[i].next);
        free(ant[i].status);
    }
}

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
}

void free_lem(lem_t lemin)
{
    for (int i = 0; lemin.start[i].name[0] != '\0'; i++)
        free(lemin.start[i].name);
    free(lemin.start);
    for (int i = 0; lemin.end[i].name[0] != '\0'; i++)
        free(lemin.end[i].name);
    free(lemin.end);
    for (int i = 0; lemin.rooms[i].name[0] != '\0'; i++)
        free(lemin.rooms[i].name);
    free(lemin.rooms);
    for (int i = 0; lemin.tunnels[i][0] != '\0'
            && lemin.tunnels[i] != NULL; i++)
        free(lemin.tunnels[i]);
    free(lemin.tunnels);
}
