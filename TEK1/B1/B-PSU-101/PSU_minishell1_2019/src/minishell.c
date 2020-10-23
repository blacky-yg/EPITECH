/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** minishell
*/

#include "../include/minishell1.h"

int minishell(char *array[], char *env[], list_t *list)
{
    int hamid = 0;
    char *dest = NULL;
    char bin[6] = {'/', 'b', 'i', 'n', '/', '\0'};

    if (!my_strcmp(array[0], "cd") || !my_strcmp(array[0], "env") ||
        !my_strcmp(array[0], "setenv") || !my_strcmp(array[0], "unsetenv") ||
        !my_strcmp(array[0], "exit")) {
        command(array, env, list);
    } else {
        if (fork() == 0)
            execve(my_strcat(bin, array[0]), array, env);
        else
            wait(&hamid);
    }
}