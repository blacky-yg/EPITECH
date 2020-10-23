/*
** EPITECH PROJECT, 2020
** map
** File description:
** init map
*/

#include "../include/navy.h"

char **init_map(void)
{
    char **new = malloc(sizeof(char *) * 8);

    for (int i = 1; i <= 8; i++)
        new[i] = malloc(sizeof(char *) * 8);
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
            new[i][j] = '.';
    return (new);
}