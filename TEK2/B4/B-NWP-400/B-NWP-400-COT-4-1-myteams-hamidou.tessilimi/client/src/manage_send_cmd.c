/*
** EPITECH PROJECT, 2021
** client
** File description:
** manage_send_cmd
*/

#include "../include/client.h"

static teams_cmd_t teams_send_cmd[15] = {
    {"/login", send_login},
    {"/logout", send_logout},
    {"/user", send_user},
    {"/users", send_users},
    {"/send", send_send},
    {"/messages", send_messages},
    {"/subscribe", send_suscribe},
    {"/unsubscribe", send_unsubscribe},
    {"/create", send_create},
    {"/use", send_use},
    {"/info", send_info},
    {"/suscribed", send_subscribed},
    {"/list", send_list},
    {"/help", send_help},
    {NULL}
};

void manage_send_cmd(char *buf, client_t *user)
{
    int i = 0;
    bool _is_valid = false;
    char **tab = my_split(buf, " \r\n");

    if (tab == NULL)
        return ((void)printf(INVALID_CMD));
    for (; teams_send_cmd[i].cmd; i++) {
        if (!strcmp(tab[0], teams_send_cmd[i].cmd)) {
            teams_send_cmd[i].cmd_func(user, tab);
            _is_valid = true;
        }
    } if (_is_valid != true)
        printf(INVALID_CMD);
}