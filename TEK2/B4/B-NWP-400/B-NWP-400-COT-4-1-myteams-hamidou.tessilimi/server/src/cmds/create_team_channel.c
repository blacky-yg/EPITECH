/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** createcontext
*/

#include "../../include/inc.h"
#include "../../include/cmds.h"
#include "../../include/team_func.h"
#include "../../include/logging_server.h"
#include "../../include/channel_func.h"

static void spread_sms(tea_m *_team, use_r *_users)
{
    int size = strlen(_team->_team_name) + strlen(_team->_descript) + 100;
    char *_sms = malloc(sizeof(char) * size);
    char team_id[37];

    if (_sms == NULL)
        return;
    uuid_unparse(_team->_uuid, team_id);
    sprintf(_sms, "400 [TeamCreated] %s \"%s\" \"%s\"\n",
        team_id, _team->_team_name, _team->_descript);
    send_sms_to_connected_users(_sms, _users);
    free(_sms);
}

int team_cmd(b_client *_clt, m_server *_svr, char **_sms)
{
    tea_m *_team;
    use_r *_user;

    _user = user_from_socket(_clt->_idsock, _svr->_users);
    if (_user == NULL)
        return (ERR_404);
    if (get_nb_part(_sms) != 3)
        return (ERR_404);
    _team = create_team(_sms[1], _sms[2], _user->uuid);
    if (_team == NULL)
        return (ERR_404);
    append_team(&_svr->_teams, _team);
    spread_sms(_team, _svr->_users);
    return (NOTHING);
}

static void spread_sms_of_chan(channe_l *_chan, m_server *_svr)
{
    char channel_id[37];
    tea_m *team = team_from_uuid(_chan->_team_uuid, _svr->_teams);
    lis_t *index = team->_users;
    use_r *user;

    uuid_unparse(_chan->_uuid, channel_id);
    for (; index; index = index->_nxt) {
        user = index->_ptr;
        if (user->_logged) {
            dprintf(user->_b_client->_idsock,
            "400 [ChannelCreated] %s\n\"%s\"\n\"%s\"\r\n",
            channel_id, _chan->_channel_name, _chan->_descript);
        }
    }
}

int channel_cmd(b_client *_clt, m_server *_svr, char **_sms)
{
    use_r *user = user_from_socket(_clt->_idsock, _svr->_users);
    channe_l *_chan;

    if (get_nb_part(_sms) != 3)
        return (ERR_404);
    if (user == NULL)
        return (ERR_404);
    if (user->_part != TEAM)
        return (ERR_404);
    _chan = create_channel(_sms[1], _sms[2], user->_part_uuid);
    if (_chan == NULL)
        return (ERR_404);
    append_channel(&_svr->_channels, _chan);
    spread_sms_of_chan(_chan, _svr);
    return (NOTHING);
}