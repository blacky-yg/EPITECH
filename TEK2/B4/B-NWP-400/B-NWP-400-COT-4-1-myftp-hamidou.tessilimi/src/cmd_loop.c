/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** cmd_loop
*/

#include "../include/myftp.h"

int cmd_loop(info_t *cur_info,  info_t *info, struct sockaddr_in _addr,
                fd_set *cur_fdset)
{
    int fd, size = sizeof(_addr), srv_fd = info->_socket;
    if (cur_info->nb_connexion == srv_fd) {
        if ((fd = accept(srv_fd, (struct sockaddr *)&_addr, &size)) < 0)
            return (display_error("Accept error."));
        cur_info->_filepath = info->_filepath;
        cur_info->_socket = fd;
        cur_info->_msg = strdup(M_220);
        send_msg(cur_info);
        FD_SET(cur_info->_socket, cur_fdset);
    } else {
        if (get_cmd(cur_info->nb_connexion, cur_info) < 0) {
            close(cur_info->nb_connexion);
            FD_CLR(cur_info->nb_connexion, cur_fdset);
        }
    }
}