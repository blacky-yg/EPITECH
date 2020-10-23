/*
** EPITECH PROJECT, 2019
** is_digit
** File description:
** cmp
*/

#include "../../include/my.h"

int cmp(char *s1, char *s2)
{
    int i = 0;

    for (i = 0; s2[i] != '\0' && s1[i] != '\0' &&
            s1[i] == s2[i]; i++) {
    }
    if (i == my_strlen(s1) && i == my_strlen(s2))
        return (0);
    return (1);
}