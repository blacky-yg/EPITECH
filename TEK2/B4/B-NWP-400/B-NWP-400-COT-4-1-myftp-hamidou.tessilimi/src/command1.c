/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** command1
*/

#include "../include/myftp.h"

void user_func(info_t *info)
{
    if (!strcmp("Anonymous", info->_params))
        info->_user_login = true;
    info->_msg = strdup(M_331);
}

void pass_func(info_t *info)
{
    if (info->_user_login == true) {
        info->_is_connected = 1;
        info->_msg = strdup(M_230);
    } else
        info->_msg = strdup(M_332);
}

void noop_func(info_t *info)
{
    info->_msg = (info->_is_connected == false) ? strdup(M_220)
        : strdup(M_530);
}

void help_func(info_t *info)
{
    char *help = strdup(M_214);
    help = strcat(help, M_214_N);
    info->_msg = (info->_is_connected == false) ? strdup(M_530)
        : strdup(help);
}