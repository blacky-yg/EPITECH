/*
** EPITECH PROJECT, 2021
** client
** File description:
** client_sd_create_cmd
*/

#include "../include/client.h"

void send_create_team(char *id, char *desc, client_t *user)
{
    if (user->_is_connected == true) {
        if (strlen(desc) > MAX_DESCRIPTION_LENGTH ||
            strlen(id) > MAX_NAME_LENGTH)
            client_error_unauthorized();
        else
            dprintf(user->_fd, "/create \"%s\" \"%s\"\r\n", id, desc);
    } else
        client_error_unauthorized();
}

void send_create_chan(char *id, char *desc, client_t *user)
{
    if (user->_is_connected == true) {
        if (strlen(desc) > MAX_DESCRIPTION_LENGTH ||
            strlen(id) > MAX_NAME_LENGTH)
            client_error_unauthorized();
        else
            dprintf(user->_fd, "/create \"%s\" \"%s\"\r\n", id, desc);
    } else
        client_error_unauthorized();
}

void send_create_thread(char *id, char *desc, client_t *user)
{
    if (user->_is_connected == true) {
        if (strlen(desc) > MAX_BODY_LENGTH || strlen(id) > MAX_NAME_LENGTH)
            client_error_unauthorized();
        else
            dprintf(user->_fd, "/create \"%s\" \"%s\"\r\n", id, desc);
    } else
        client_error_unauthorized();
}

void send_create_reply(char *message, client_t *user)
{
    if (user->_is_connected == true) {
        if (strlen(message) > MAX_BODY_LENGTH)
            client_error_unauthorized();
        else
            dprintf(user->_fd, "/create \"%s\"\r\n", message);
    } else
        client_error_unauthorized();
}

void send_create(client_t *user, char **tab)
{
    if (user->_context == PERSONAL && count_tab(tab) == 3)
        send_create_team(tab[1], tab[2], user);
    if (user->_context == THREAD && count_tab(tab) == 2)
        send_create_reply(tab[1], user);
    if (user->_context == TEAM && count_tab(tab) == 3)
        send_create_chan(tab[1], tab[2], user);
    if (user->_context == CHANNEL && count_tab(tab) == 3)
        send_create_thread(tab[1], tab[2], user);
}