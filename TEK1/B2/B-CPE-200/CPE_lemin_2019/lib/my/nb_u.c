/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** nb_u
*/

#include "../../include/my.h"

int nb_u(char **lines)
{
    int a = 0;
    for (int i = 0; lines[i] != NULL; i++)
        for (int j = 0; lines[i][j + 1] != '\0'; j++)
            (j != 0 && lines[i][j + 1] != '-'
&& lines[i][j + 1] != '\0' && lines[i][j] == '-') ? a++ : a;
    return (a);
}