/*
** EPITECH PROJECT, 2021
** client
** File description:
** get_server_sock
*/

#include "../include/client.h"

int get_server_sock(char *ip, int port)
{
    struct sockaddr_in addr;
    int sock;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        return (ERROR);
    }
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr(ip);
    addr.sin_port = htons(port);
    if (connect(sock, (struct sockaddr *)&addr, sizeof(addr)) == -1) {
        perror("connect");
        close(sock);
        return (ERROR);
    }
    return (sock);
}