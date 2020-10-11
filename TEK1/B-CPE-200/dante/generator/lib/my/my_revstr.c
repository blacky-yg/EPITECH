/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse_a_string
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int length = my_strlen(str) - 1;
    int i = 0;
    char tmp;

    while (i < length / 2)
    {
        tmp = str[i];
        str[i] = str[length - i];
        str[length - i] = tmp;
        i++;
    }
    return (str);
}