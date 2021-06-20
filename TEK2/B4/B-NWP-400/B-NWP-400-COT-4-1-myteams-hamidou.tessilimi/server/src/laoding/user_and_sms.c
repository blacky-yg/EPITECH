/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** user_and_sms.c
*/

#include "logging_server.h"
#include "../../include/struct.h"
#include "../../include/user_func.h"
#include "../../include/sms_func.h"

int user_loading(m_server *svr, char **_sms_words)
{
    use_r *user = create_user();

    if (user == NULL)
        return (-1);
    uuid_parse(_sms_words[1], user->uuid);
    strcpy(user->username, _sms_words[2]);
    if (svr->_users == NULL)
        svr->_users = user;
    else
        append_user(user, &svr->_users);
    server_event_user_loaded(_sms_words[1], _sms_words[2]);
    return (0);
}

int sms_loading(m_server *svr, char **wrds)
{
    uuid_t _shipper_uid;
    uuid_t _recipient_uid;
    messag_e *message;

    uuid_parse(wrds[1], _shipper_uid);
    uuid_parse(wrds[2], _recipient_uid);
    message = create_sms(_shipper_uid, _recipient_uid, wrds[4]);
    if (message == NULL)
        return (-1);
    message->_s_time = atol(wrds[3]);
    append_sms_list(message, &svr->_messages);
    return (0);
}