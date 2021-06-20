/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** send_msg
*/

#include "../include/myftp.h"

void send_msg(info_t *cur_info)
{
    write(cur_info->_socket, cur_info->_msg, strlen(cur_info->_msg));
}