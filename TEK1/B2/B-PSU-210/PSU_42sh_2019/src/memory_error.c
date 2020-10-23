/*
** EPITECH PROJECT, 2020
** memory_error
** File description:
** View memory error
*/

#include "../include/minishell.h"
#include "../include/list.h"

int is_error(int status)
{
    int i = 0;

    if (WIFSIGNALED(status)) {
        i = WTERMSIG(status);
        if (i != 6 && i != 7 && i != 8 && i != 11)
            return (0);
        my_printf("%s", strsignal(i));
        if (WCOREDUMP(status))
            my_printf(" (core dumped)\n");
        else
            my_printf("\n");
        return (0);
    }
    return (0);
}
