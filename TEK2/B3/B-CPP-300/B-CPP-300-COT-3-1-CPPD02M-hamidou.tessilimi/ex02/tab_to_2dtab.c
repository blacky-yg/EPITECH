/*
** EPITECH PROJECT, 2021
** day02
** File description:
** tab_to_2dtab
*/

#include <stdlib.h>
#include <stdio.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int **tmp = malloc(sizeof(int *) * (length + 1));
    int k = 0;

    for (int i = 0; i < length; i++)
        tmp[i] = malloc(sizeof(int) * width);
    for (int i = 0; i < length; i++)
        for (int j = 0; j < width; j++, k++)
            tmp[i][j] = tab[k];
    *res = tmp;
}