/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** manage_cmd
*/

#include "../include/myftp.h"

static ftp_cmd_t ftp_cmd[12] = {
    {"USER", user_func},
    {"PASS", pass_func},
    {"noop", noop_func},
    {"HELP", help_func},
    {"QUIT", quit_func},
    {"CDUP", cdup_func},
    {"CWD", cwd_func},
    {"PWD", pwd_func},
    {"PASV", pasv_func},
    {"PORT", port_func},
    {"LIST", list_func},
    {NULL}
};

int manage_cmd(info_t *info)
{
    int i = 0;
    for (; ftp_cmd[i].cmd; i++)
        if (!strcasecmp(info->_cmd, ftp_cmd[i].cmd))
            ftp_cmd[i].cmd_func(info);
    if (i == 0)
        info->_msg = strdup(M_500);
    send_msg(info);
}