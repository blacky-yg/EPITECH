/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_unsetenv
*/

#include "../include/minishell1.h"

void my_unsetenv(char *array[], char *env[])
{
    if (array[1] == NULL)
        my_putstr("unsetenv: Too few arguments.\n");
}