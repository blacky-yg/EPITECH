/*
** EPITECH PROJECT, 2021
** client
** File description:
** manage_client
*/

#include "../include/client.h"

int manage_client(client_t *user, int server_fd)
{
    fd_set fds;
    char buffer[BUFF_SIZE];

    FD_ZERO(&fds);
    FD_SET(server_fd, &fds);
    FD_SET(0, &fds);
    if (select(server_fd + 1, &fds, NULL, NULL, NULL) == -1)
        return (ERROR);
    if (FD_ISSET(0, &fds)) {
        memset(buffer, 0, BUFF_SIZE);
        read(0, buffer, BUFF_SIZE);
        manage_send_cmd(buffer, user);
    }
    if (FD_ISSET(server_fd, &fds)) {
        memset(buffer, 0, BUFF_SIZE);
        if (read(server_fd, buffer, BUFF_SIZE) == 0)
            printf(CONNEXION_CLOSED);
        manage_receive_cmd(buffer, user);
    }
    return (0);
}