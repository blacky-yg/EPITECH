/*
** EPITECH PROJECT, 2021
** client
** File description:
** cleint_rc_team_cmd
*/

#include "../include/client.h"

void subs_receive(client_t *user, char **tab)
{
    (void)user;
    (void)tab;
    client_print_subscribed(user->_user_uuid, tab[1]);
}

void unsubs_receive(client_t *user, char **tab)
{
    (void)user;
    (void)tab;
    client_print_unsubscribed(user->_user_uuid, tab[1]);
}

void subscribed_receive(client_t *user, char **tab)
{
    (void)user;
    (void)tab;
    client_print_teams(tab[1], tab[2], tab[3]);
}

void use_receive(client_t *user, char **tab)
{
    user->_context_id = tab[2];
    user->_context = atoi(tab[1]);
    if (count_tab(tab) > 3)
        use_receive(user, &tab[3]);
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s", tab[i]);
}