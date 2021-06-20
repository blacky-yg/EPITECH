/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** usage
*/

#include "../include/myftp.h"

void usage(void)
{
    printf("USAGE: ./myftp port path\n");
    printf("\tport  is the port number on which the server socket listens\n");
    printf("\tpath  is the path to the home directory for\
    the Anonymous user\n");
}