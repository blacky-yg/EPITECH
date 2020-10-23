/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "include/my.h"
#include <stdio.h>

char *infin_add(char *str1, char *str2);

int main(int ac, char **av)
{
    if (ac !=3)
        return (84);
    printf("%s\n", infin_add(av[1], av[2]));
    return (0);
}
