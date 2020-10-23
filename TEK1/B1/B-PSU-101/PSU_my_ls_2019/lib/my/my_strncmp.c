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

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < nb)
        i++;
    if (s1[i] == s2[i] || i == nb)
        return (0);
    else
        return (s1[i] - s2[i]);
}
