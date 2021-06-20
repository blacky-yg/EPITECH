/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** log_out.c
*/


#include "logging_server.h"
#include "../../include/cmds.h"
#include "../../include/user_func.h"

static void spread_sms(const char *_name, char *id, use_r *_us)
{
    int len = strlen(_name) + 100;
    char *_sms = malloc(sizeof(char) * len);

    if (_sms == NULL)
        return;
    sprintf(_sms, "221 [Logout] %s %s\r\n", _name, id);
    send_sms_to_connected_users(_sms, _us);
    free(_sms);
}

int logout_cmd(b_client *_clt, m_server *svr, char **_sms)
{
    char _uid[37];
    use_r *_us;

    if (get_nb_part(_sms) != 1)
        return (ERR_404);
    _us = user_from_socket(_clt->_idsock, svr->_users);
    if (_us == NULL)
        return (ERR_404);
    uuid_unparse(_us->uuid, _uid);
    server_event_user_logged_out(_uid);
    spread_sms(_us->username, _uid, svr->_users);
    _us->_b_client = NULL;
    _us->_logged = false;
    return (NOTHING);
}