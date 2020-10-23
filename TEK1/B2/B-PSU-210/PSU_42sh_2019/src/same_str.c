/*
** EPITECH PROJECT, 2020
** is_same_str
** File description:
** check if two string match
*/

#include "../include/minishell.h"

int check_input(char **av)
{
    if (av[1][0] == '*' && av[1][1] == '\0') {
        my_printf("*: Ambiguous.\n");
        return (1);
    }
    if ((av[1][0] == '*' || av[1][0] == '?')
        && av[1][1] != '\0') {
        my_printf("%s: No match.\n", av[1]);
        return (1);
    }
    return (0);
}

int is_same_str(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    int dif = 0;

    if (my_strlen(str1) != my_strlen(str2))
        return (0);
    while (str1[i]) {
        dif = str1[i] - str2[i];
        if (dif != 0)
            j++;
        i++;
    }
    if (j > 0)
        return (0);
    else
        return (1);
}
