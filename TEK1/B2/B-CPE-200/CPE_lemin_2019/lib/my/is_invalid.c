/*
** EPITECH PROJECT, 2019
** is_invalid
** File description:
** is_invalid
*/

#include "../../include/my.h"

int is_invalid(char c)
{
    if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z')
&& (c < '0' || c > '9') && c != '#' && c != '-'
&& c != ' ' && c != '\n')
        return (1);
    return (0);
}
