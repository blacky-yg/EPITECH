/*
** EPITECH PROJECT, 2019
** is_tunnel
** File description:
** is_tunnel
*/

#include "../../include/my.h"

int is_tunnel(char *str)
{
    for (int a = 0; str[a] != '\0'; a++)
        if (str[0] == '#' || str[a] == ' ')
            return (1);
    return (0);
}