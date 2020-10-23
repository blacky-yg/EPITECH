/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** check_av
*/

#include "../include/my.h"
#include "../include/push_swap.h"

int is_valid_number(char *av)
{
    for (int i = 0; av[i] != '\0'; i++)
        if (av[i] != '-' && av[i] < '0' || av[i] > '9')
            return (1);
    return (0);
}

int check_av(char *av[])
{
    for (int i = 1; av[i] != NULL; i++)
        if (is_valid_number(av[i]) == 1)
            return (1);
    return (0);
}