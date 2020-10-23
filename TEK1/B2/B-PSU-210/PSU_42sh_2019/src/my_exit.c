/*
** EPITECH PROJECT, 2020
** my_exit
** File description:
** Same behavior with exit
*/

#include "../include/list.h"
#include "../include/minishell.h"

int is_int(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return (-1);
        } else
            continue;
    }
    return (0);
}

int exit_manage(char **arg)
{
    if (tab_len(arg) == 1) {
        my_printf("exit\n");
        exit(0);
    } else if (tab_len(arg) == 2) {
        if (is_int(arg[1]) == -1 && my_getnbr(arg[1]) == 0
        && arg[1][0] != '0') {
            my_printf("exit: Expression Syntax.\n");
            return (-1111);
        } else if (is_int(arg[1]) == -1 &&
        (arg[1][0] >= '0' && arg[1][0] <= '9')) {
            my_printf("exit: Badly formed number.\n");
            return (-1111);
        } else {
            my_printf("exit\n");
            exit(my_getnbr(arg[1]));
        }
    } else {
        my_printf("exit: Expression Syntax.\n");
        return (-1111);
    }
}

int my_exit(char **arg)
{
    int i = exit_manage(arg);

    if (i == -1111)
        return (0);
}
