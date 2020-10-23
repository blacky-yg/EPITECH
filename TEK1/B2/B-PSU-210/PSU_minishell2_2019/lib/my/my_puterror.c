/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays one-by-one the characters of a string
*/

#include "../../include/my.h"

void my_puterror(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
}