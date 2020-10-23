/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** my_strcmp
*/

#include "../../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0, a = 0, b = 0;

    for (; s1[i] != '\0' && s2[i] != '\0'; a = 0, b = 0) {
        if ('a' <= s1[i] && s1[i] <= 'z')
            a = -33;
        if ('a' <= s2[i] && s2[i] <= 'z')
            b = -33;
        if (s1[i] + a < s2[i] + b)
            return -1;
        else if (s1[i] + a > s2[i] + b)
            return 1;
        else
            i++;
    }
    if (s1[i] == '\0' && s2[i] != '\0')
        return -1;
    else if (s2[i] == '\0' && s1[i] != '\0')
        return 1;
    return 0;
}