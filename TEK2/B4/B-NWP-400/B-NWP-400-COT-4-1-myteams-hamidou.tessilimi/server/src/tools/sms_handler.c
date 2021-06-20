/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** sms_handler.c
*/

#include "../../include/cmds.h"
#include "../../include/inc.h"
#include "../include/server.h"

int (*get_func(const char *command))(b_client *, m_server *, char **)
{
    int (*fptr[14])(b_client *, m_server *, char **) = {
    &help, &login_cmd, &logout_cmd, &user_list_cmd, &user_cmd, &send_cmd,
    &sms_cmd, &subscribe_cmd, &subscribed_cmd, &unsubscribe_cmd, &use_cmd,
    &create_cmd, &list_cmd, &info_cmd};
    const char *names[14] = {
    "/help", "/login", "/logout", "/users", "/user", "/send", "/messages",
    "/subscribe", "/subscribed", "/unsubscribe", "/use", "/create", "/list",
    "/info"};

    for (int i = 0; i < 14; i++) {
        if (strcmp(command, names[i]) == 0)
            return (fptr[i]);
    } return (NULL);
}

int manage_message(bs_sms *_sms, m_server *svr)
{
    answers _ans;
    int (*fptr)(b_client *, m_server *, char **);
    char **_sms_words = my_split(_sms->_sms, " \n\r");
    if (_sms_words == NULL)
        return (84);
    fptr = get_func(_sms_words[0]);
    if (fptr != NULL) {
        _ans = (*fptr)(_sms->_client, svr, _sms_words);
        answer_sender(_ans, _sms->_client->_idsock);
    } free_two_tab(_sms_words);
    return (0);
}

int handle_sms(bs_sms **_sms, m_server *svr)
{
    for (bs_sms *index = *_sms; index; index = index->_nxt) {
        if (manage_message(index, svr) == 84)
            return (84);
    } return (0);
}