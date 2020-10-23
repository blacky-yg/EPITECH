/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse_a_string
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char memory;

    for (; i < j; i++, j--) {
        memory = str[i];
        str[i] = str[j];
        str[j] = memory;
    }
    return (str);
}