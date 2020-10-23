/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** anthill
*/

#include "../include/lemin.h"

void malloc_me_anthill(anthill ant[])
{
    for (int j = 0; j < h_gal; j++) {
        ant[j].name = malloc(sizeof(char) * 1000);
        ant[j].name[0] = '\0';
        ant[j].status = malloc(sizeof(char) * 1000);
        ant[j].status[0] = '\0';
        ant[j].next = malloc(sizeof(char *) * h_gal);
        for (int x = 0; x < h_gal; x++) {
            ant[j].next[x] = malloc(sizeof(char) * 1000);
            ant[j].next[x][0] = '\0';
        }
    }
}

char *my_get_name(char *dest, char *src)
{
    int i = 0;
    if (src == NULL)
        dest = NULL;
    for (; src[i] != ' ' && src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

int create_anthill(char **input, anthill ant[])
{
    int j = 0;
    for (int i = pos_start + 1; input[i] != NULL
&& i != pos_end && i != pos_tun; i++, j++) {
        my_get_name(ant[j].name, input[i]);
    }
    for (int i = 1; i < pos_end && i < pos_start &&
input[i] != NULL; i++, j++) {
        my_get_name(ant[j].name, input[i]);
    }
    return (j);
}

int create_the_anthill(char **input, anthill ant[])
{
    int j = 0, k = 0, c = 0;
    malloc_me_anthill(ant);
    st = 0;
    j = create_anthill(input, ant);
    for (k = pos_end + 1; k < pos_tun && k != pos_start
&& input[k] != NULL; k++);
    for (k -= 1; k > pos_end; k--, j++) {
        my_get_name(ant[j].name, input[k]);
    }
    ps_end = j - 1;
    ant[j].name[0] = '\0';
    nb_gal = j;
    for (int i = pos_tun; input[i] != NULL; i++, j++)
        if (see_is_in(ant, input[i]) == 84) {
            input[i] = NULL;
            return (84);
        }
    return (c);
}
