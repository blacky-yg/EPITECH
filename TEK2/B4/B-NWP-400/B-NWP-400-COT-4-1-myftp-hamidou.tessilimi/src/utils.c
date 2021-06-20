/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** utils
*/

#include "../include/myftp.h"

void go_to_home(info_t *info)
{
    display_error(info->_filepath);
    if (chdir(info->_filepath) == -1)
        info->_msg = strdup(M_550);
    else
        info->_msg = strdup(M_250);
}