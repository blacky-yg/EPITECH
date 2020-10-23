/*
** EPITECH PROJECT, 2020
** clean_string
** File description:
** Clean space of string
*/

#include "../include/minishell.h"

int convert_all_tab(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\t')
            str[i] = ' ';
    }
    return (0);
}

char *clean_str(char *str)
{
    int i = 0;
    int j = 0;
    char *clean = malloc(sizeof(char) * (my_strlen(str) + 1));

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            clean[j] = str[i];
            j++;
        } else if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != ' '
        && str[i + 1] != '\t' && str[i + 1] != '\0' && j != 0) {
            clean[j] = str[i];
            j++;
        } else
            continue;
    }
    clean[j + 1] = '\0';
    convert_all_tab(clean);
    return (clean);
}
