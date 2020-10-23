/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_strupcase
*/

#include "../../include/my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    return (str);
}