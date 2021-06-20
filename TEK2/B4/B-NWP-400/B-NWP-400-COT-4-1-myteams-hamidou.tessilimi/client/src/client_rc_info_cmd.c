/*
** EPITECH PROJECT, 2021
** client
** File description:
** cleint_rc_info_cmd
*/

#include "../include/client.h"

void nothing_receive(client_t *user, char **tab)
{
    (void)user;
    (void)tab;
}

void users_receive(client_t *user, char **tab)
{
    client_print_users(tab[3], tab[2], atoi(tab[4]));
    if (count_tab(tab) > 5)
        users_receive(user, &tab[5]);
}

void info_receive(client_t *user, char **tab)
{
    (void)user;
    (void)tab;
}

void list_receive(client_t *user, char **tab)
{
    (void)user;
    (void)tab;
}

void help_receive(client_t *user, char **tab)
{
    (void)tab;
    (void)user;
    printf("MY_TEAMS\n\tSimple implementation of MS Teams in terminal\n\n");
    printf("COMMANDS:\n");
    printf("\t/help: display all the commands available of this program.\n");
    printf("\t/login \"user\": .\n");
    printf("\t/logout: .\n");
}