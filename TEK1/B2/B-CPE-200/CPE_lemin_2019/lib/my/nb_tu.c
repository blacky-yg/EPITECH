/*
** EPITECH PROJECT, 2020
** lib
** File description:
** nb_tu
*/

#include "../../include/my.h"

int nb_tu(char **lines)
{
    int a = 0;
    for (int i = 0; lines[i] != NULL; i++)
        for (int j = 0; lines[i][j] != '\0'; j++)
            (j != 0 && lines[i][j] == '-') ? a++ : a;
    return (a);
}
