/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** command2
*/

#include "../include/myftp.h"

void quit_func(info_t *info)
{
    info->_msg = strdup(M_221);
    info->_msg = strcat(info->_msg, "Logged out if appropriate"CRLF);
    send_msg(info);
    if (info->_is_connected == true) {
        info->_is_connected = false;
        close(info->_socket);
        FD_CLR(info->_socket, info->_fd_set);
    } else {
        close(info->_socket);
        FD_CLR(info->_socket, info->_fd_set);
    }
}

void cdup_func(info_t *info)
{
    if (info->_is_connected == false)
        info->_msg = strdup(M_530);
    else {
        if (chdir("..") == -1)
            go_to_home(info);
        else
            info->_msg = strdup(M_200);
    }
}

void cwd_func(info_t *info)
{
    if (info->_is_connected == true) {
        if (!strcmp(info->_params, "~"))
            go_to_home(info);
        else
            info->_msg = (!chdir(info->_params)) ? strdup(M_250)
                : strdup(M_550);
    } else
        info->_msg = strdup(M_530);
}

void pwd_func(info_t *info)
{
    char pwd[BUFF_SIZE];
    if (info->_is_connected == true) {
        getcwd(pwd, BUFF_SIZE);
        sprintf(info->_msg, "257 %s created."CRLF, pwd);
    } else
        info->_msg = strdup(M_530);
}