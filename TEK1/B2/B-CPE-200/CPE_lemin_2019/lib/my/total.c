/*
** EPITECH PROJECT, 2019
** is_digit
** File description:
** total
*/

#include "../../include/my.h"

int total(char **lines)
{
    int i = 0;
    for (i = 0; lines[i] != NULL && lines[i][0] != '\0'; i++);
    return (i);
}