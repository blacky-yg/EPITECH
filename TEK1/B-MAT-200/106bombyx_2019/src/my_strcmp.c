/*
** EPITECH PROJECT, 2019
** 106bombyx
** File description:
** my_strcmp
*/

#include "../include/bombyx.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] && s2[i] && s1[i] == s2[i]; i++);
    if (s1[i] == s2[i])
        return (0);
    else
        return (s1[i] - s2[i]);
}