/*
** EPITECH PROJECT, 2020
** tab_realloc
** File description:
** Realloc table
*/

#include "../include/minishell.h"
#include "../include/list.h"

char **tab_realloc(char **tab, char *str)
{
    int i = 0;
    int size = tab_len(tab);
    char **cpy = (char **)malloc(sizeof(char *) * (size + 2));

    while (i < size) {
        cpy[i] = my_strcpy(tab[i]);
        i++;
    }
    cpy[i] = my_strcpy(str);
    cpy[i + 1] = NULL;
    return (cpy);
}

void view_table(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_printf("%s\n", tab[i]);
        i++;
    }
}
