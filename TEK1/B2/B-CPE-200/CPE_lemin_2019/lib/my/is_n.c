/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** is_n
*/

#include "../../include/my.h"

int is_n(char *str)
{
    if (str == NULL || str[0] == '\0')
        return (0);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '-')
            return (0);
    return (1);
}
