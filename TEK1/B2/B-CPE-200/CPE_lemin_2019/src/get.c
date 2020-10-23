/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** get
*/

#include "../include/lemin.h"

void dodo(anthill ant[], int pos_o, int pos_t, int r)
{
    (pos_o == ps_end) ? arriv += 1 : 0;
    my_catt(moves[m_m], ((r > 0) ? " " : ""));
    my_catt(moves[m_m], go_to(pos_o, ant, pos_t));
}

int get_s(char *str, int y)
{
    static int s = 2;
    int a = 0, b = my_strlen(str);
    char *s_s = malloc(sizeof(char) * 12);
    if (y == 0)
        s = 2;
    for (; s < b && str[s] != '-' && str[s] != '\0'; s++, a++)
        s_s[a] = str[s];
    s_s[a] = '\0';
    s++;
    return (my_getnbr(s_s));
}

int get_h(int q, int s)
{
    int d = q, h = s;
    h--;
    for (; h >= 0 && mat[d][h] != 1; h--);
    return (h);
}

int get_d(int q, int s)
{
    int d = q, h = s;
    d--;
    for (; d >= 0 && mat[d][h] != 1; d--);
    return (d);
}
