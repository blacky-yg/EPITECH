/*
** EPITECH PROJECT, 2021
** client
** File description:
** client_sd_user_cmd
*/

#include "../include/client.h"

void send_user(client_t *user, char **tab)
{
    if (user->_is_connected && count_tab(tab) == 2)
        dprintf(user->_fd, "/user \"%s\"\r\n", tab[1]);
    else
        client_error_unauthorized();
}

void send_send(client_t *user, char **tab)
{
    if (user->_is_connected && count_tab(tab) == 3) {
        if (strlen(tab[1]) > MAX_BODY_LENGTH)
            client_error_unauthorized();
        else
            dprintf(user->_fd, "/send \"%s\" \"%s\"\r\n", tab[1], tab[2]);
    } else
        client_error_unauthorized();
}

void send_messages(client_t *user, char **tab)
{
    if (user->_is_connected && count_tab(tab) == 2)
        dprintf(user->_fd, "/messages \"%s\"\r\n", tab[1]);
    else
        client_error_unauthorized();
}