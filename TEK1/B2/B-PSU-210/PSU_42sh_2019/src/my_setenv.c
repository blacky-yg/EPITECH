/*
** EPITECH PROJECT, 2020
** my_setenv
** File description:
** Same behavior with setenv
*/

#include "../include/list.h"
#include "../include/minishell.h"

int search_change1(list_t env, char *str)
{
    elem_t *box = env.first;

    while (box != NULL) {
        if (my_strncmp(str, box->str, my_strlen(str)) == 1) {
            box->str = my_strcat(str, "=");
            return (1);
        }
        box = box->next;
    }
    return (0);
}

int search_change2(list_t env, char **arg)
{
    elem_t *box = env.first;

    while (box != NULL) {
        if (my_strncmp(arg[1], box->str, my_strlen(arg[1])) == 1) {
            box->str = my_strcat(arg[1], my_strcat("=", arg[2]));
            return (1);
        }
        box = box->next;
    }
    return (0);
}

int valid_name(char *name)
{
    char c;

    c = name[0];
    if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z') && c != '_') {
        my_printf("setenv: Variable name must begin with a letter.\n");
        return (-1);
    }
    for (int i = 0; name[i] != '\0'; i++) {
        c = name[i];
        if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')
        && (c < '0' || c > '9') && c != '_' && c != '.') {
            my_printf("setenv: Variable name must contain alphanumeric ");
            my_printf("characters.\n");
            return (-1);
        }
    }
    return (0);
}

int my_setenv(list_t env, char **arg)
{
    if (tab_len(arg) == 1) {
        view_list(env);
        return (0);
    }
    if (tab_len(arg) != 2 && tab_len(arg) != 3) {
        my_printf("setenv: Too many arguments.\n");
        return (0);
    }
    if (valid_name(arg[1]) == -1)
        return (0);
    if (tab_len(arg) == 2) {
        if (search_change1(env, arg[1]) == 0)
            add_last(&env, my_strcat(arg[1], "="));
        return (0);
    } else if (tab_len(arg) == 3) {
        if (search_change2(env, arg) == 0)
            add_last(&env, my_strcat(arg[1], my_strcat("=", arg[2])));
        return (0);
    }
}
