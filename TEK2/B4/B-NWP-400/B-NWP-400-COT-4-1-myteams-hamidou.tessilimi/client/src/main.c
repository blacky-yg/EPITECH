/*
** EPITECH PROJECT, 2021
** client
** File description:
** main
*/

#include "../include/client.h"

int main(int ac, char *av[])
{
    if (ac < 2 || ac != 3) {
        usage();
        return (84);
    } else if (ac == 2 && !strcmp(av[1], "-h"))
        usage();
    else
        return (client(av[1], atoi(av[2])));
    return (0);
}