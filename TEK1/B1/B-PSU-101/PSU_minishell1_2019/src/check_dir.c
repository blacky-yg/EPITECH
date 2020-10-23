/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** check_dir
*/

#include "../include/minishell1.h"

int check_dir(char *str)
{
    struct stat info;

    if (stat(str, &info) != 0)
        return (1);
    else
        if (S_ISDIR(info.st_mode))
            return (1);
    return (0);
}