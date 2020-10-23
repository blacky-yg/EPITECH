/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** main
*/

#include "../include/minishell1.h"

int main(int ac, char *av[], char *env[])
{
    if (ac != 1 && env != NULL)
        return (84);
    else
        my_sh(env);
    return (0);
}