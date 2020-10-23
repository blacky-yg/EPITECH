/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** my_strncmp
*/

#include "../../include/my.h"

int my_strncmp(char const *s1, char const *s2, int nb)
{
    int i = 0;

    for (; s1[i] && s2[i] && s1[i] == s2[i]; i++);
    if (s1[i] == s2[i] || i == nb)
        return (0);
    else
        return (s1[i] - s2[i]);
}