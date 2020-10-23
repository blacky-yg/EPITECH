/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** manage_error
*/

#include "../include/bombyx.h"

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int check_decimal(char *str)
{
    for (int i = 0; str[i];)
        if (is_digit(str[i]) || str[i] == '.')
            i++;
        else
            return (1);
    return (0);
}

int check_number(char *str)
{
    for (int i = 0; str[i];)
        if (is_digit(str[i]))
            i++;
        else
            return (1);
    return (0);
}

int fix_error(int ac, char *av[])
{
    if (ac == 3) {
        if (check_number(av[1]) || check_decimal(av[2])) {
            printf("Bad arguments.\nType ./106bombyx -h.\n");
            return (1);
        }
        if (atof(av[2]) < 1 || atof(av[2]) > 4) {
            printf("Bad arguments.\nType ./106bombyx -h.\n");
            return (1);
        }
    }
    if (ac == 4) {
        if (check_number(av[1]) || check_number(av[2]) || check_number(av[3])) {
            printf("Bad arguments.\nType ./106bombyx -h.\n");
            return (1);
        }
        if ((atoi(av[2]) > atoi(av[3]))) {
            printf("Bad arguments.\nType ./106bombyx -h.\n");
            return (1);
        }
    }
    return (0);
}