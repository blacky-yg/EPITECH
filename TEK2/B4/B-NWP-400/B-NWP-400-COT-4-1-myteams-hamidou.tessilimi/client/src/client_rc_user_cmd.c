/*
** EPITECH PROJECT, 2021
** client
** File description:
** client_rc_user_cmd
*/

#include "../include/client.h"

void user_receive(client_t *user, char **tab)
{
    if (user->_is_connected == true && count_tab(tab) == 5)
        client_print_user(tab[2], tab[3], atoi(tab[4]));
    else
        client_error_unauthorized();
}

void send_receive(client_t *user, char **tab)
{
    if (user->_is_connected == true && count_tab(tab) == 4)
        client_event_private_message_received(tab[2], tab[3]);
    else
        client_error_unauthorized();
}

void send_message_receive(client_t *user, char **tab)
{
    client_private_message_print_messages(tab[2], atol(tab[4]), tab[3]);
    if (count_tab(tab) > 5)
        send_message_receive(user, &tab[5]);
}