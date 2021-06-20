/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** check_av
*/

#include "../include/myftp.h"

int check_av(int ac, char *av[])
{
    if (ac < 3 || !strcmp(av[1], "-help")) {
        usage();
        return (84);
    } else {
        if (atoi(av[1]) <= 0 || atoi(av[1]) > MAX_PORT)
            return (display_error("Port Error"));
        if (opendir(av[2]) == NULL)
            return (display_error("Path Error"));
    }
    return (0);
}