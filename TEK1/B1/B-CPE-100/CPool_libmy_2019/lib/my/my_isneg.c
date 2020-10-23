/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_isneg
*/

#include "../../include/my.h"

void my_isneg(int nb)
{
    (nb < 0) ? write(1, "N", 1) : write(1, "P", 1);
}