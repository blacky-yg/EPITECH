/*
** EPITECH PROJECT, 2019
** count_nbr
** File description:
** count numbers
*/
#include "../../include/my.h"

int count_nbr(int nb)
{
    int n = 0;

    if (nb == 0)
        return (1);
    while (nb > 0) {
        nb = nb / 10;
        n++;
    }
    return (n);
}