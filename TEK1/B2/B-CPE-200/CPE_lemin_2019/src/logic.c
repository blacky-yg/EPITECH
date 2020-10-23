/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** logic
*/

#include "../include/lemin.h"

void do_logic(int *n_ants, int nb, int d)
{
    static int i = 0, s = 0;
    (s == 0) ? s = d : s;
    for (; s < ants && (i + 1) < nb; i++) {
        ((i + 1) >= nb) ? i = 0 : i;
        if (n_ants[i] > n_ants[i + 1]) {
            n_ants[i + 1]++;
            s++;
            i++;
            do_logic(n_ants, nb, s);
        }
        if (s >= ants)
            break;
        ((i + 1) >= nb) ? i = 0 : i;
        if (n_ants[i] <= n_ants[i + 1]) {
            i = -1;
            n_ants[0]++;
            s++;
        }
        ((i + 1) >= nb) ? i = 0 : i;
    }
}

void math_logic(int *n_ants, int nb)
{
    int den = 0, s = 0;
    for (int i = 0; i < nb; i++)
        n_ants[i] = count_this(bank[i], '-');
    n_ants[0] += 1;
    s += 1;
    if (1 == nb)
        n_ants[0] += ants - 1;
    else {
        for (; s < ants && (n_ants[0] < n_ants[1]); n_ants[0]++, s++);
        do_logic(n_ants, nb, s);
    }
}
