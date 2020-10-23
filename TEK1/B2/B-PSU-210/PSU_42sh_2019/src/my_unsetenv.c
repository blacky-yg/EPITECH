/*
** EPITECH PROJECT, 2020
** my_unsetenv
** File description:
** Remove environment variable
*/

#include "../include/minishell.h"
#include "../include/list.h"

void search_rm(list_t env, char *str)
{
    elem_t *box = env.first;

    while (box != NULL) {
        if (my_strncmp(str, box->str, my_strlen(str)) == 1)
            rm_elem(&box);
        box = box->next;
    }
}

void my_unsetenv(list_t env, char **arg)
{
    if (tab_len(arg) == 1) {
        my_printf("unsetenv: Too few arguments.\n");
    } else {
        for (int i = 1; arg[i] != NULL; i++)
            search_rm(env, arg[i]);
    }
}
