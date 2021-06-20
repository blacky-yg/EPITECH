/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** unsubscribed_cmd.c
*/

#include "logging_server.h"
#include "../../include/cmds.h"
#include "../../include/team_func.h"
#include "../../include/user_func.h"

void unsubscribe(uuid_t teamid, uuid_t _userid)
{
    char team_id[37], user_id[37];

    uuid_unparse(teamid, team_id);
    uuid_unparse(_userid, user_id);
    server_event_user_unsubscribed(team_id, user_id);
}

int unsubscribe_cmd(b_client *clt, m_server *svr, char **sms)
{
    use_r *user;
    tea_m *team;

    user = user_from_socket(clt->_idsock, svr->_users);
    if (user == NULL)
        return (ERR_404);
    if (get_nb_part(sms) != 2)
        return (ERR_404);
    team = team_from_id(sms[1], svr->_teams);
    if (team == NULL) {
        answer_sender_with_string(ERR_404, clt->_idsock, sms[1]);
        return (NOTHING);
    }
    del_from_team(team, user);
    t_del_from_team(team, user);
    unsubscribe(team->_uuid, user->uuid);
    dprintf(user->_b_client->_idsock, "320 [Unsubscribed]! \"%s\"\r\n",
    sms[1]);
    return (NOTHING);
}