/*
** EPITECH PROJECT, 2021
** client
** File description:
** command_client
*/

#include "../include/client.h"

void send_login(client_t *user, char **tab)
{
    if (user->_is_connected == false && count_tab(tab) == 2) {
        user->_user_name = tab[1];
        dprintf(user->_fd, "/login \"%s\"\r\n", tab[1]);
    } else
        client_error_unauthorized();
}

void send_logout(client_t *user, char **tab)
{
    (void)tab;
    if (user->_is_connected)
        dprintf(user->_fd, "/logout\r\n");
    else
        client_error_unauthorized();
}

void send_help(client_t *user, char **tab)
{
    (void)tab;
    (void)user;
    printf("MY_TEAMS\n\tSimple implementation of MS Teams in terminal\n\n");
    printf("COMMANDS:\n");
    printf("\t/help: display all the commands available of this program.\n");
    printf("\t/login: .\n");
}