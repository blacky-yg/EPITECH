/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays one-by-one the characters of a string
*/

#include "../../include/my.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
