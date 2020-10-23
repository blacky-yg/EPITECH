/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** error_output
*/

#include "../include/minishell2.h"

void not_found(char *cmd)
{
    my_putstr(cmd);
    write(1, ": ", 2);
    my_putstr(NOT_FOUND);
    write(1, "\n", 1);
}