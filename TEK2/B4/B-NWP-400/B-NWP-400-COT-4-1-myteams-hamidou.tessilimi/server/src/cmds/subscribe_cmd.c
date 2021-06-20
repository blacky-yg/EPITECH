/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** subscribecmd
*/


#include "logging_server.h"
#include "../../include/cmds.h"
#include "../../include/team_func.h"
#include "../../include/user_func.h"

void subscribe(uuid_t _useruid, uuid_t _teamuid)
{
    char user_id[37], team_id[37];

    uuid_unparse(_useruid, user_id);
    uuid_unparse(_teamuid, team_id);
    server_event_user_subscribed(team_id, user_id);
}

int subscribe_cmd(b_client *clt, m_server *svr, char **_sms)
{
    use_r *_user;
    tea_m *_team;

    _user = user_from_socket(clt->_idsock, svr->_users);
    if (_user == NULL)
        return (ERR_404);
    if (get_nb_part(_sms) != 2)
        return (ERR_404);
    _team = team_from_id(_sms[1], svr->_teams);
    if (_team == NULL) {
        answer_sender_with_string(ERR_404, clt->_idsock, _sms[1]);
        return (NOTHING);
    } if (add_to_team(_user, _team) == -1
        || t_add_to_team(_team, _user) == -1)
        return (ERR_404);
    subscribe(_user->uuid, _team->_uuid);
    dprintf(_user->_b_client->_idsock, "300 [Subscribed]! \"%s\"\r\n",
    _sms[1]);
    return (NOTHING);
}

void spread_list(int _sock, use_r *_user)
{
    lis_t *index = _user->_teams;
    char team_id[37];
    tea_m *team;

    while (index) {
        team = index->_ptr;
        uuid_unparse(team->_uuid, team_id);
        dprintf(_sock, "314 [Teams] %s \"%s\" \"%s\"\n",
        team_id, team->_team_name, team->_descript);
        index = index->_nxt;
    }
    dprintf(_sock, "\r\n");
}

int subscribed_cmd(b_client *clt, m_server *svr, char **_sms)
{
    use_r *_user;

    if (get_nb_part(_sms) != 1)
        return (ERR_404);
    _user = user_from_socket(clt->_idsock, svr->_users);
    if (_user == NULL)
        return (ERR_404);
    spread_list(clt->_idsock, _user);
    return (NOTHING);
}