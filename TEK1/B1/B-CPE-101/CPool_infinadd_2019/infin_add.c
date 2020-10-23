/*
** EPITECH PROJECT, 2019
** infin_add
** File description:
** infin_add
*/

#include "include/my.h"
#include <stdlib.h>

void change_pos(int len1, int len2)
{
    int tmp;

    if (len1 < len2)
    {
        tmp = len1;
        len1 = len2;
        len2 = tmp;
    }
}

char *infin_add(char const *str1, char const *str2)
{
    int i;
    int j;
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    int rest = 0;
    char *result;

    change_pos(len1, len2);
    len1 = my_strlen(str1) - 1;
    len2 = my_strlen(str2) - 1;
    result = malloc(sizeof(char) * (len1 + len2 + 1));
    for (i = len1, j = len2; i >= 0 || j > 0; i--) {
        result[i + j] = (str1[i] + str2[j] + rest) - 48;
        j--;
        if (result[i + j] > 57)
        {
            result[i + j] = (result[i + j] % 10) + 48;
            rest = ((str1[i] + str2[j] + rest) / 10) + 48;
            result[i + j] = rest;
            //str1[len1 + 1] = str2[len1 + 1] + 49;
        }
    }
    return (result);
}
