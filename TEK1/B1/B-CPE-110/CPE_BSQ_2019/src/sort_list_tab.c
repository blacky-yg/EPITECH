/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** sort_list_tab
*/

#include "../include/bsq.h"
#include "../include/my.h"

int sort_list(char *tab)
{
    int s = 0;

    for (int i = 1; i != 3; i++) {
        if (tab[0] > tab[i]) {
            s = tab[0];
            tab[0] = tab[i];
            tab[i] = s;
            i = 0;
        }
    }
    return (tab[0]);
}