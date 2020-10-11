/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** check
*/

#include "../include/tetris.h"

void check_error(char *str)
{
    map_size_t map_size;
    int len = my_strlen(str), i = 0;

    if (str[i] == '{')
        i++;
    for (; i < len && str[i] != ',';) {
        if ('0' <= str[i] && str[i] <= '9')
            i++;
        else
            exit(84);
    }
    i++;
    for (; str[i] != '\0' != '\0' && str[i] != '}';) {
        if ('0' <= str[i] && str[i] <= '9')
            i++;
        else
            exit(84);
    }
}

int check_file(char *str)
{
    int i = 0;

    for (; str[i] != '\0' && str[i] != ' '; i++)
        if (str[i] < '0' || str[i] > '9')
            return (0);
    i++;
    for (; str[i] != '\0' && str[i] != ' '; i++)
        if (str[i] < '0' || str[i] > '9')
            return (0);
    i++;
    for (; str[i] != '\0' && str[i] != '\n'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (0);
    return (1);
}