/*
** EPITECH PROJECT, 2021
** client
** File description:
** client
*/

#include "../include/client.h"

int client(char *ip, int port)
{
    int server_fd = 0;
    int status = 0;
    client_t user;

    if ((server_fd = get_server_sock(ip, port)) == ERROR)
        return (ERROR);
    user._fd = server_fd;
    user._is_connected = false;
    user._context = PERSONAL;
    while (1) {
        if ((status = manage_client(&user, server_fd)) == ERROR)
            return (84);
        else if (status != 0)
            return (0);
    }
    return (0);
}