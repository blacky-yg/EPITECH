/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** help.c
*/

#include "logging_server.h"
#include "../../include/cmds.h"
#include "../../include/user_func.h"

static const char * help_str = "214 [help]:\n/login [name]: log with your id\n";

static void spread_mess(use_r *_us)
{
    char *_sms = malloc(sizeof(char) * MAX_BODY_LENGTH);

    if (_sms == NULL)
        return;
    sprintf(_sms, " ");
    send_sms_to_connected_users(_sms, _us);
    free(_sms);
}

int help(b_client *_clt, m_server *svr, char **_sms)
{
    if (get_nb_part(_sms) != 1)
        return (ERR_404);
    spread_mess(svr->_users);
    sender(_clt->_idsock, help_str);
    return (NOTHING);
}