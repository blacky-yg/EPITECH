/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** init_context.c
*/

#include "../../include/cmds.h"
#include "../../include/team_func.h"
#include "../../include/user_func.h"
#include "../../include/channel_func.h"
#include "../../include/thread_func.h"

static void give_reponse(int _sock, int _state, uuid_t uuid)
{
    char id[37];

    uuid_unparse(uuid, id);
    dprintf(_sock, "use %d %s\r\n", _state, id);
}

void init_thread(use_r *user, char **_sms, m_server *svr)
{
    threa_d *_thread;
    const int sock = user->_b_client->_idsock;

    _thread = thread_from_id(_sms[1], svr->_threads);
    if (_thread == NULL) {
        answer_sender_with_string(ERR_404, sock, _sms[1]);
        return;
    }
    user->_part = THREAD;
    uuid_copy(user->_part_uuid, _thread->_uuid);
    give_reponse(user->_b_client->_idsock, 3, _thread->_uuid);
}

void init_channel(use_r *user, char **_sms, m_server *svr)
{
    channe_l *_channel;
    const int sock = user->_b_client->_idsock;

    _channel = channel_from_id(_sms[1], svr->_channels);
    if (_channel == NULL) {
        answer_sender_with_string(ERR_404, sock, _sms[1]);
        return;
    } user->_part = CHANNEL;
    uuid_copy(user->_part_uuid, _channel->_uuid);
    give_reponse(user->_b_client->_idsock, 2, _channel->_uuid);
    if (get_nb_part(_sms) > 2)
        init_thread(user, &_sms[1], svr);
}

answers init_team(use_r *user, char **_sms, m_server *svr)
{
    tea_m *_team = team_from_id(_sms[1], svr->_teams);
    const int sock = user->_b_client->_idsock;

    if (_team == NULL) {
        answer_sender_with_string(ERR_404, sock, _sms[1]);
        return (NOTHING);
    } if (!check_in(user, _team))
        return (ERR_404);
    user->_part = TEAM;
    uuid_copy(user->_part_uuid, _team->_uuid);
    give_reponse(user->_b_client->_idsock, 1, _team->_uuid);
    if (get_nb_part(_sms) > 2)
        init_channel(user, &_sms[1], svr);
    return (NOTHING);
}