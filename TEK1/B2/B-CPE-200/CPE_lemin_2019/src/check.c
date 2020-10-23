/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** check
*/

#include "../include/lemin.h"

int check_i(char *i_i, char *j_j, char *str)
{
    int y = my_strlen(str) - 1, y_y = my_strlen(i_i) - 1;
    int x_x = my_strlen(j_j) - 1, a = 0, c = 0, s = 0;
    int u = my_strlen(i_i);

    for (; y_y >= 0 && y >= 0 && (str[y] == i_i[y_y]); y_y--, y--);
    if (y_y == -1)
        a++;
    if (a == 1)
        return (1);
    return (0);
}

int check_j(char *i_i, char *j_j, char *str)
{
    int y = my_strlen(str) - 1, y_y = my_strlen(j_j) - 1;
    int x_x = my_strlen(i_i) - 1, a = 0;

    for (; y_y >= 0 && str[y] == j_j[y_y]; y_y--, y--);
    if (y_y == -1)
        a++;
    if (a == 1)
        return (1);
    return (0);
}