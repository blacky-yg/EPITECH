/*
** EPITECH PROJECT, 2021
** client
** File description:
** team_send_cmd
*/

#include "../include/client.h"

void send_suscribe(client_t *user, char **tab)
{
    if (user->_is_connected == true && count_tab(tab) == 2)
        dprintf(user->_fd, "/suscribe \"%s\"\r\n", tab[1]);
    else
        client_error_unauthorized();
}

void send_subscribed(client_t *user, char **tab)
{
    if (user->_is_connected == true && count_tab(tab) == 1)
        dprintf(user->_fd, "/subscribed\r\n");
    else if (user->_is_connected == true && count_tab(tab) == 2)
        dprintf(user->_fd, "/subscribed \"%s\"\r\n", tab[1]);
    else
        client_error_unauthorized();
}

void send_unsubscribe(client_t *user, char **tab)
{
    if (user->_is_connected == true && count_tab(tab) == 2)
        dprintf(user->_fd, "/unsubscribe \"%s\"\r\n", tab[1]);
    else
        client_error_unauthorized();
}

void send_use(client_t *user, char **tab)
{
    switch (count_tab(tab)) {
        case 1:
            dprintf(user->_fd, "/use\r\n");
            break;
        case 2:
            dprintf(user->_fd, "/use \"%s\"\r\n", tab[1]);
            break;
        case 3:
            dprintf(user->_fd, "/use \"%s\" \"%s\"\r\n", tab[1], tab[2]);
            break;
        case 4:
            dprintf(user->_fd, "/use \"%s\" \"%s\" \"%s\"\r\n", tab[1],
                    tab[2], tab[3]);
            break;
        default:
            client_error_unauthorized();
            break;
    }
}