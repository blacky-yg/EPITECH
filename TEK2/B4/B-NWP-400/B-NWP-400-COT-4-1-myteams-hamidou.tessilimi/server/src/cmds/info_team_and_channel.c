/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** info _team and _chan cmd
*/

#include "../../include/inc.h"
#include "../../include/cmds.h"
#include "../../include/team_func.h"
#include "../../include/channel_func.h"

static void team_info(int _sock, const char *_teamid, tea_m *_team)
{
    dprintf(_sock, "414 [Team's info] %s \"%s\" \"%s\"\r\n",
    _teamid, _team->_team_name, _team->_descript);
}

int info_team_cmd(b_client *clt, m_server *svr, char **sms)
{
    tea_m *_team;

    if (get_nb_part(sms) != 2)
        return (ERR_404);
    if (user_from_socket(clt->_idsock, svr->_users) == NULL)
        return (ERR_404);
    _team = team_from_id(sms[1], svr->_teams);
    if (_team == NULL) {
        answer_sender_with_string(ERR_404, clt->_idsock, sms[1]);
        return (NOTHING);
    } team_info(clt->_idsock, sms[1], _team);
    return (NOTHING);
}

static void channel_inf(int _sock, channe_l *_chan)
{
    char _chanid[37];

    uuid_unparse(_chan->_uuid, _chanid);
    dprintf(_sock, "414 [Channel's info] %s\n\"%s\"\n\"%s\"\r\n",
    _chanid, _chan->_channel_name, _chan->_descript);
}

int info_channel_cmd(b_client *clt, m_server *svr, char **sms)
{
    channe_l *_chan;

    if (get_nb_part(sms) != 2)
        return (ERR_404);
    if (user_from_socket(clt->_idsock, svr->_users) == NULL)
        return (ERR_404);
    _chan = channel_from_id(sms[1], svr->_channels);
    if (_chan == NULL) {
        answer_sender_with_string(ERR_404, clt->_idsock, sms[1]);
        return (NOTHING);
    } channel_inf(clt->_idsock, _chan);
    return (NOTHING);
}