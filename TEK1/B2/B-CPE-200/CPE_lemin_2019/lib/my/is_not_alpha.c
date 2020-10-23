/*
** EPITECH PROJECT, 2019
** lib
** File description:
** is_not_alpha
*/

#include "../../include/my.h"

int is_not_alpha(char c)
{
    if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
        return (1);
    return (0);
}