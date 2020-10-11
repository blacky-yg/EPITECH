/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_swap
*/

#include "../../include/my.h"

void my_swap(int *nb1, int *nb2)
{
    int tmp;

    tmp = *nb1;
    *nb1 = *nb2;
    *nb1 = tmp;
}