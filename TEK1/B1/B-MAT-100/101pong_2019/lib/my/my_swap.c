/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swaps the content of two integers
*/

#include "../../include/my.h"

int my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
    return (0);
}
