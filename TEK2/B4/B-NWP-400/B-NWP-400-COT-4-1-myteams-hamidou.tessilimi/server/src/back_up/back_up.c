/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** back_up.c
*/

#include "../../include/inc.h"
#include "../../include/struct.h"
#include "../../include/back_up.h"

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int back_up(m_server *svr)
{
    int file_des = open("backup.txt",
    O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

    if (file_des == -1)
        return (-1);
    printf("Backup ...\n");
    save_user(file_des, svr->_users);
    save_message(file_des, svr->_messages);
    save_team(file_des, svr->_teams);
    save_channel(file_des, svr->_channels);
    save_thread(file_des, svr->_threads);
    save_reply(file_des, svr->_comments);
    close(file_des);
    return (0);
}