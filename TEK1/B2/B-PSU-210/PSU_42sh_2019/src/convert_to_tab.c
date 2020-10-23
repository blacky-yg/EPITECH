/*
** EPITECH PROJECT, 2020
** convert_to_tab
** File description:
** convert string to tab
*/

#include "../include/minishell.h"

int find_next(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return (i);
    return (-1);
}

int word_nb(char *str)
{
    int i = 0;
    int count = 0;

    for (i = 1; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i] != '\t')
        && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            count++;
    }
    if (str[0] != ' ' && str[0] != '\t')
        count++;
    return (count);
}

char **convert_to_tab(char *str)
{
    int a = 0;
    char **tab = NULL;

    tab = malloc(sizeof(char *) * (word_nb(str) + 1));
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0)) {
            if (find_next(&str[i], ' ') == -1) {
                tab[a] = cut_cpy(str, i, my_strlen(str));
                break;
            } else {
                tab[a] = cut_cpy(str, i, i + find_next(&str[i], ' '));
                a++;
            }
        } else
            continue;
    }
    tab[word_nb(str)] = NULL;
    return (tab);
}
