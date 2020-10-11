/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swap
*/

#include "../../include/my.h"

void my_swap(char **s1, char **s2)
{
    char *s;

    s = *s1;
    *s1 = *s2;
    *s2  = s;
}