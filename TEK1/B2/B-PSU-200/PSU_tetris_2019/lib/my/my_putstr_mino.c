/*
** EPITECH PROJECT, 2019
** my_put_nb
** File description:
** my_putstr_mino
*/

#include "../../include/my.h"

void my_putstr_mino(char *str)
{
    for (int k = 0; str[k] != '\0' && str[k] != '.'; k++)
        write(1, &str[k], 1);
}