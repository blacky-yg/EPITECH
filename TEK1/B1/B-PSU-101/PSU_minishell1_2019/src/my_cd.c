/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_cd
*/

#include "../include/minishell1.h"

int my_cd(char *array[], char *env[])
{
    char *buffer = malloc(256);

    if (array[0] != NULL && array[1] == NULL)
        chdir(get_env("HOME", env));
    else if (array[1] != NULL && array[2] == NULL) {
        if (chdir(array[1]) != 0) {
            if (check_dir(array[1])) {
                my_putstr(array[1]);
                my_putstr(": No such file or directory.\n");
            } else if (!check_dir(array[1])) {
                my_putstr(array[1]);
                my_putstr(": Not a directory.\n");
            }
        }
    } else
        my_putstr("cd: Too many arguments.\n");
}