/*
** EPITECH PROJECT, 2020
** clean_tab
** File description:
** Clean array of char
*/

#include "../include/minishell.h"
#include "../include/list.h"

char **clean_tab(char **tab)
{
    int i = 0;
    char *tmp;
    char **clean = NULL;

    if (tab == NULL)
        return (NULL);
    while (tab[i] != NULL) {
        tmp = clean_str(tab[i]);
        if (my_strlen(tmp) != 0) {
            clean = tab_realloc(clean, tmp);
            free(tmp);
        }
        i++;
    }
    return (clean);
}
