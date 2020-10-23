/*
** EPITECH PROJECT, 2020
** env_to_list
** File description:
** Register environment variable in a list
*/

#include "../include/list.h"

int list_len(list_t list)
{
    int i = 0;
    elem_t *box = list.first;

    while (box != NULL) {
        i++;
        box = box->next;
    }
    return (i);
}

void env_to_list(list_t *list, char **env)
{
    list->first = NULL;
    list->last = NULL;

    for (int i = 0; env[i] != NULL; i++)
        add_last(list, env[i]);
}

char **list_to_env(list_t list)
{
    int i = 0;
    elem_t *box = list.first;
    int len = list_len(list);
    char **env;

    env = malloc(sizeof(char *) * (len + 1));
    while (box != NULL) {
        env[i] = box->str;
        i++;
        box = box->next;
    }
    env[len] = NULL;
    return (env);
}
