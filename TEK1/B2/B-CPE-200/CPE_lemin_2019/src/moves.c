/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** moves
*/

#include "../include/lemin.h"

void see_moves(void)
{
    int l = 0;
    for (l = 0; moves[l] != NULL; l++)
        moves[l][0] = '\0';
}

int move_move(anthill ant[], int b, int *n_ants, int nb)
{
    int a = 0, c = 0;
    for (int i = 0; bank[i] != NULL && bank[i][0] != '\0'
&& (count_this(bank[i], '-') > 1); i++) {
        a = 0;
        a = do_that_bro(ant, i, n_ants);
        if (a != 0 && bank[i + 1] != NULL && bank[i + 1][0] != '\0') {
            my_catt(moves[m_m], " ");
            c = 1;
        }
    }
    if (count_this(bank[0], '-') == 1) {
        arriv = n_ants[0] + 1;
        my_catt(moves[0], " ");
        for (m_m = 0; n_ants[0] != 0; ) {
            quitstart(ant, n_ants);
            my_catt(moves[0], ((n_ants[0] >= 1) ? " " : ""));
        }
        return (-1);
    }
    return (0);
}

void move_your_ass(anthill ant[], int *n_ants, int nb)
{
    int a = 0;
    quitstart(ant, n_ants);
    m_m++;
    for (int i = 0; arriv < ants; i++) {
        a = move_move(ant, i, n_ants, nb);
        if (a == -1)
            break;
        if (is_gd(n_ants, nb) != 0) {
            my_catt(moves[m_m], " ");
            quitstart(ant, n_ants);
        }
        m_m++;
    }
}

int do_that_bro(anthill ant[], int i, int *n_ants)
{
    char *nb = malloc(sizeof(char) * 11);
    int pos_o = 0, j = 0, l = 0, x = 0, pos_t = 0, u = 0, r = 0;
    for (j = 0; bank[i][j] != '\0'; j++);
    for (j -= 1; j >= 0; j--, j = u) {
        (bank[i][j] == '-') ? j -= 1 : 0;
        for (l = 0; j >= 0 && bank[i][j] != '-'; j--, l++)
            nb[l] = bank[i][j];
        nb[l] = '\0';
        pos_o = my_getnbr(my_revstr(nb));
        u = j;
        (j >= 0 && bank[i][j] == '-') ? j -= 1 : 0;
        for (l = 0; j >= 0 && bank[i][j] != '-'; j--, l++)
            nb[l] = bank[i][j];
        nb[l] = '\0';
        pos_t = my_getnbr(my_revstr(nb));
        if (ant[pos_t].status[0] != '\0') {
            dodo(ant, pos_o, pos_t, r);
            r += 1;
        }
    } return (r);
}
