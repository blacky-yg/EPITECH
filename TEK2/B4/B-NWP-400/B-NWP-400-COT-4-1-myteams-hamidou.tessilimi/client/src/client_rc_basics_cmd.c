/*
** EPITECH PROJECT, 2021
** client
** File description:
** cleint_rc_basics_cmd
*/

#include "../include/client.h"

void login_receive(client_t *user, char **tab)
{
    if (user->_is_connected == false) {
        if (strcmp(user->_user_name, tab[2]) == 0) {
            user->_is_connected = true;
            user->_user_uuid = tab[3];
        }
    }
    client_event_logged_in(tab[3], tab[2]);
}

void logout_receive(client_t *user, char **tab)
{
    if (user->_is_connected == true) {
        if (strcmp(user->_user_name, tab[2]) == 0) {
            user->_is_connected = false;
            client_event_logged_out(user->_user_uuid, user->_user_name);
        } else
            client_event_logged_out(tab[3], tab[2]);
    } else
        client_error_unauthorized();
}