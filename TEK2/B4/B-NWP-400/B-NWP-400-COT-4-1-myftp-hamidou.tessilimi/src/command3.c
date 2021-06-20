/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** command3
*/

#include "../include/myftp.h"

void pasv_func(info_t *info)
{
}

void port_func(info_t *info)
{
    info->_msg = (info->_is_connected == true) ? (strdup(M_200))
        : strdup(M_530);
}

void list_func(info_t *info)
{
    if (info->_is_connected == true) {
        info->_msg = strdup(M_150);
        send_msg(info);
        info->_msg = strdup(M_226);
    } else
        info->_msg = strdup(M_530);
}