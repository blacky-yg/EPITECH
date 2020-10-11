/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** my_putstr
*/

#include "../include/transfer.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);
}