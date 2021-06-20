/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** use_cmd.c
*/

#include "logging_server.h"
#include "../../include/cmds.h"
#include "../../include/team_func.h"
#include "../../include/user_func.h"

int init_part(use_r *_user, m_server *svr, char **_sms)
{
    if (_user->_part == NONE)
        return (init_team(_user, _sms, svr));
    else if (_user->_part == TEAM)
        init_channel(_user, _sms, svr);
    else
        init_thread(_user, _sms, svr);
    return (NOTHING);
}

int use_cmd(b_client *clt, m_server *svr, char **_sms)
{
    use_r *_user = user_from_socket(clt->_idsock, svr->_users);
    int nb = get_nb_part(_sms);

    if (_user == NULL)
        return (ERR_404);
    if (nb == 1) {
        _user->_part = NONE;
        dprintf(clt->_idsock, "350 [Use] done!\r\n");
        return (NOTHING);
    } return (init_part(_user, svr, _sms));
}