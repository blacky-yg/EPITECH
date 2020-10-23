/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** set_level
*/

#include "../include/bsq.h"
#include "../include/my.h"

char set_level(char **str, int i, int j)
{
    char tab[2];
    int min;

    if (i > 0 && j > 0) {
        tab[0] = str[i][j - 1] - '0';
        tab[1] = str[i - 1][j] - '0';
        tab[2] = str[i - 1][j - 1] - '0';
        min = sort_list(tab);
        str[i][j] = ++min + '0';
    } else
        str[i][j] = '1';
    return (str[i][j]);
}