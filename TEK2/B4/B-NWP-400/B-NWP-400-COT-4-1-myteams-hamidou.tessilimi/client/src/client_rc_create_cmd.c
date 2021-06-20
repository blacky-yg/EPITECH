/*
** EPITECH PROJECT, 2021
** client
** File description:
** client_rc_create_cmd
*/

#include "../include/client.h"

void create_receive(client_t *user, char **tab)
{
    if (strcmp(tab[1], "[TeamCreated]") == 0)
        create_team_receive(user, tab);
    if (strcmp(tab[1], "[ChannelCreated]") == 0)
        create_chan_receive(user, tab);
    if (strcmp(tab[1], "[ThreadCreated]") == 0)
        create_thread_receive(user, tab);
    if (strcmp(tab[1], "[ReplyCreated]") == 0)
        create_reply_receive(user, tab);
}

void create_team_receive(client_t *user, char **tab)
{
    (void)user;
    client_print_team_created(tab[1], tab[2], tab[3]);
}

void create_chan_receive(client_t *user, char **tab)
{
    (void)user;
    client_print_channel_created(tab[1], tab[2], tab[3]);
}

void create_thread_receive(client_t *user, char **tab)
{
    (void)user;
    client_print_thread_created(tab[1], tab[2], atol(tab[3]), tab[4], tab[5]);
}

void create_reply_receive(client_t *user, char **tab)
{
    (void)user;
    client_print_reply_created(tab[1], tab[2], atol(tab[3]), tab[4]);
}