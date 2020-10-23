/*
** EPITECH PROJECT, 2020
** let me out
** File description:
** let me out
*/

#include "../include/lemin.h"

int are_there_related(anthill ant[], int i, char *j_j)
{
    int x = 0, c = 2;
    for (x = 0; ant[i].next[x][0] != '\0'
&& (c = my_strcmp(ant[i].next[x], j_j)) != 0; x++);
    if (c == 0 && ant[i].next[x][0] != '\0')
        return (1);
    if ((i == 0 || ant[i + 1].name[0] == '\0') && ant[i].next[x][0] != '\0')
        return (1);
    return (0);
}

void put(char *str, int i, int j)
{
    int a = 0, k = my_strlen(str);
    char *i_i = malloc(sizeof(char) * 12);
    char *j_j = malloc(sizeof(char) * 12);
    i_i = my_getstring(i);
    j_j = my_getstring(j);
    if (str[0] == '\0') {
        str[k + a] = i + 48;
        str[k + a + 1] = '-';
        str[k + a + 2] = '\0';
        str = my_catt(str, j_j);
    } else if (check_i(i_i, j_j, str) == 1) {
        str[k + a] = '-';
        str[k + a + 1] = '\0';
        str = my_catt(str, j_j);
    } else
        if (check_j(i_i, j_j, str) == 1) {
            str[k + a] = '-';
            str[k + a + 1] = '\0';
            str = my_catt(str, i_i);
        }
}

void putt(char *str, int i, int j)
{
    (i != 0) ? mat[i][j] = 5 : mat[i][j];
    (i != 0) ? mat[j][i] = 5 : mat[j][i];
    put(str, i, j);
}