/*
** EPITECH PROJECT, 2020
** my_getenv
** File description:
** Return environment variable value
*/

#include "../include/list.h"
#include "../include/minishell.h"

char *my_getenv(list_t env, char *str)
{
    elem_t *box = env.first;

    while (box != NULL) {
        if (my_strncmp(str, box->str, my_strlen(str)) == 1)
            return (&box->str[my_strlen(str) + 1]);
        box = box->next;
    }
    return ("\0");
}
