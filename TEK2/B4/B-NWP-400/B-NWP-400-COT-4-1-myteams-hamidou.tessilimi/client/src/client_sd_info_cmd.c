/*
** EPITECH PROJECT, 2021
** client
** File description:
** client_info_cmd
*/

#include "../include/client.h"

void send_users(client_t *user, char **tab)
{
    (void)tab;
    if (user->_is_connected == true)
        dprintf(user->_fd, "/users\r\n");
    else
        client_error_unauthorized();
}

void send_list(client_t *user, char **tab)
{
    (void)tab;
    if (user->_context == PERSONAL)
        dprintf(user->_fd, "/list\r\n");
    if (user->_context == TEAM)
        dprintf(user->_fd, "/list\r\n");
    if (user->_context == CHANNEL)
        dprintf(user->_fd, "/list\r\n");
    if (user->_context == THREAD)
        dprintf(user->_fd, "/list\r\n");
}

void send_info(client_t *user, char **tab)
{
    (void)tab;
    if (user->_context == PERSONAL)
        dprintf(user->_fd, "/info \"%s\"\r\n", user->_user_uuid);
    if (user->_context == TEAM)
        dprintf(user->_fd, "/info \"%s\"\r\n", user->_context_id);
    if (user->_context == CHANNEL)
        dprintf(user->_fd, "/info \"%s\"\r\n", user->_context_id);
    if (user->_context == THREAD)
        dprintf(user->_fd, "/info \"%s\"\r\n", user->_context_id);
}