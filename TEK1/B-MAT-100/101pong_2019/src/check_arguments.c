/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** check_arguments
*/

#include "../include/my.h"
#include "../include/pong.h"

int	check_argument(char *av)
{
    int i = 0;

    while (av[i] != '\0') {
        if ((av[i] >= '0' && av[i] <= '9') || av[i] == '.' || av[i] == '-') {
            i++;
            if (av[i] == '\0')
                return (1);
        } else
            return (0);
    }
    return (0);
}