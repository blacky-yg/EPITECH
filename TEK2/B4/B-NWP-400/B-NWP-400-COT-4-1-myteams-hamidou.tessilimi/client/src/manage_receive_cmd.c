/*
** EPITECH PROJECT, 2021
** client
** File description:
** manage_cmd
*/

#include "../include/client.h"

static teams_cmd_t teams_cmd_receive[16] = {
    {"203", login_receive},
    {"221", logout_receive},
    {"100", user_receive},
    {"150", users_receive},
    {"140", send_receive},
    {"150", send_message_receive},
    {"300", subs_receive},
    {"320", unsubs_receive},
    {"400", create_receive},
    {"350", use_receive},
    {"414", info_receive},
    {"314", subscribed_receive},
    {"410", list_receive},
    {"ERR_404", help_receive},
    {"NOTHING", nothing_receive},
    {NULL}
};

void manage_receive_cmd(char *buf, client_t *user)
{
    int i = 0;
    char **tab = my_split(buf, " ;\n\r");

    if (tab == NULL)
        printf(INVALID_CMD);
    printf("buffer = %s\n", buf);
    for (; teams_cmd_receive[i].cmd; i++)
        if (!strcmp(tab[0], teams_cmd_receive[i].cmd))
            teams_cmd_receive[i].cmd_func(user, tab);
}