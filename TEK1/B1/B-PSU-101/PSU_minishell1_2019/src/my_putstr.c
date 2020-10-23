/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_putstr
*/

#include "../include/minishell1.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);

}