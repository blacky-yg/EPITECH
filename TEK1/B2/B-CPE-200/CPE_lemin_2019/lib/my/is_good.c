/*
** EPITECH PROJECT, 2019
** is_digit
** File description:
** is_good
*/

#include "../../include/my.h"

int is_good(char *str)
{
    if (str != NULL && str[0] != '\0')
        return (0);
    return (1);
}
