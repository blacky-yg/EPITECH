/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** order_words
*/

#include "../../include/my.h"

char **order_words(char **tab, int k)
{
    for (int i = 0; i < k; i++)
        for (int j = i + 1; j < k; j++)
            if (my_strcmp(tab[i], tab[j]) == 1)
                my_swap(&tab[i], &tab[j]);
    return (tab);
}