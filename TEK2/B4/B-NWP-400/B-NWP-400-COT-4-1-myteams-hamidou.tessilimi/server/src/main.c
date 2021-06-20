/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** main.c
*/

#include "inc.h"
#include "server.h"

void usage(void)
{
    printf("USAGE: ./myteams_server port\n");
    printf("       port is the port number on which the server socket");
    printf(" listens.");
}

int main(int ac, char **av)
{
    if (ac != 2) {
        printf("[ERROR]: Wrong argument number\n");
        usage();
        exit(84);
    } if (strcmp(av[1], "-help") == 0)
        usage();
    run_server(atoi(av[1]));
    return (0);
}