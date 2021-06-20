/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** init_struct
*/

#include "../include/myftp.h"

struct sockaddr_in *init_addr(int port)
{
    struct sockaddr_in *_addr = malloc(sizeof(struct sockaddr_in));
    _addr->sin_family = AF_INET;
    _addr->sin_addr.s_addr = INADDR_ANY;
    _addr->sin_port = htons(port);
    return (_addr);
}

int init_socket(struct sockaddr_in addr)
{
    int fd = 0;
    int val = 1;

    if (!(fd = socket(AF_INET, SOCK_STREAM, 0)))
        return (display_error("Socket Error"));
    if (setsockopt(fd, SOL_SOCKET, 2 | 15, &val, sizeof(val)) < 0)
        return (display_error("Socket Error"));
    if (bind(fd, (struct sockaddr *)&addr, sizeof(addr)) < 0)
        return (display_error("Bind Error"));
    if (listen(fd, 15) == -1)
        return (display_error("Listen Error"));
    return (fd);
}

info_t *init_struct(struct sockaddr_in *_addr)
{
    info_t *info = (info_t *)malloc(sizeof(info_t));
    info->_ip_addr = inet_ntoa(_addr->sin_addr);
    for (int i = 0; info->_ip_addr[i]; i++)
        if (info->_ip_addr[i] == '.')
            info->_ip_addr[i] = ',';
    info->_port = 0;
    info->_msg = strdup("");
    info->_cmd = malloc(sizeof(char) * CMD_SIZE);
    info->_params = malloc(sizeof(char) * BUFF_SIZE);
    info->nb_connexion = 0;
    info->_is_connected = false;
    info->_user_login = false;
    return (info);
}