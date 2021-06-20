/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** ftp_server
*/

#include "../include/myftp.h"

int ftp_server(info_t *info, struct sockaddr_in _addr)
{
    fd_set r_fd_set;
    fd_set cur_fd_set;
    info_t *cur_info;

    FD_ZERO(&cur_fd_set);
    FD_SET(info->_socket, &cur_fd_set);
    cur_info = init_struct(&_addr);
    while (1) {
        r_fd_set = cur_fd_set;
        if (select(FD_SETSIZE, &r_fd_set, NULL, NULL, NULL) < 0)
            return (display_error("Select Error"));
        for (int i = 0; i < FD_SETSIZE; i++) {
            if (FD_ISSET(i, &r_fd_set)) {
                cur_info->nb_connexion = i;
                cur_info->_fd_set = &cur_fd_set;
                cmd_loop(cur_info, info, _addr, &cur_fd_set);
            }
        }
    }
    return (0);
}