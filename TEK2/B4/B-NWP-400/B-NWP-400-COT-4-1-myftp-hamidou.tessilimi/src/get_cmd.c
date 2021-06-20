/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** get_cmd
*/

#include "../include/myftp.h"

int get_cmd(int fd, info_t *info)
{
    char buffer[BUFF_SIZE];
    int nb_bytes = read(fd, buffer, BUFF_SIZE);

    if (nb_bytes == -1)
        return (display_error("Read Error"));
    else if (nb_bytes == 0)
        return (-1);
    else {
        sscanf(buffer, "%s %s ", info->_cmd, info->_params);
        manage_cmd(info);
        info->_msg = strdup("");
        info->_cmd[0] = '\0';
        info->_params[0] = '\0';
        return (0);
    }
}