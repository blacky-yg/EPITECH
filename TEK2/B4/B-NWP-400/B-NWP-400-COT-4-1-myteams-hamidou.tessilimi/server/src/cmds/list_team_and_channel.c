/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** list team and channel cmd
*/

#include "../../include/inc.h"
#include "../../include/cmds.h"

static void spread_sms_of_team(int _sock, tea_m *_teams)
{
    tea_m *index = _teams;
    char team_id[37];

    for (; index; index = index->_nxt) {
        uuid_unparse(index->_uuid, team_id);
        dprintf(_sock, "410 [Teams] %s \"%s\" \"%s\"\r\n",
        team_id, index->_team_name, index->_descript);
    }
}

int list_team_cmd(b_client *clt, m_server *svr, char **_sms)
{
    use_r *_user;

    if (get_nb_part(_sms) != 1)
        return (ERR_404);
    _user = user_from_socket(clt->_idsock, svr->_users);
    if (_user == NULL)
        return (ERR_404);
    spread_sms_of_team(clt->_idsock, svr->_teams);
    return (NOTHING);
}

void spread_sms_of_chan(use_r *_user, channe_l *_chan)
{
    channe_l *index = _chan;
    char chan_id[37];

    for (; index; index = index->_nxt) {
        uuid_unparse(index->_uuid, chan_id);
        if (uuid_compare(_user->_part_uuid, index->_team_uuid) == 0) {
            dprintf(_user->_b_client->_idsock,
            "410 [Channels] %s \"%s\" \"%s\"\r\n",
            chan_id, index->_channel_name, index->_descript);
        }
    }
}

int list_channel_cmd(b_client *clt, m_server *svr, char **_sms)
{
    use_r *_user;

    if (get_nb_part(_sms) != 1)
        return (ERR_404);
    _user = user_from_socket(clt->_idsock, svr->_users);
    if (_user == NULL)
        return (ERR_404);
    spread_sms_of_chan(_user, svr->_channels);
    return (NOTHING);
}