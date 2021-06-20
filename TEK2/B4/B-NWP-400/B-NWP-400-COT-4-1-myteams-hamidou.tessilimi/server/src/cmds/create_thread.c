/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** create _thread
*/

#include "../../include/inc.h"
#include "../../include/cmds.h"
#include "../../include/team_func.h"
#include "../../include/logging_server.h"
#include "../../include/channel_func.h"
#include "../../include/thread_func.h"

int user_check(use_r *_user)
{
    if (_user == NULL)
        return (ERR_404);
    if (_user->_part != CHANNEL)
        return (ERR_404);
    return (D_400);
}

tea_m *team_from_chan(uuid_t _chanuid, m_server *svr)
{
    channe_l *channel = channel_from_uuid(_chanuid, svr->_channels);
    tea_m *_team;

    if (channel == NULL)
        return (NULL);
    _team = team_from_uuid(channel->_team_uuid, svr->_teams);
    return (_team);
}

static void spread_sms(use_r *_user, threa_d *_thread, m_server *svr)
{
    use_r *_tmp_u;
    char _thread_id[37], user_id[37];
    tea_m *_team = team_from_chan(_user->_part_uuid, svr);
    lis_t *index = _team->_users;

    uuid_unparse(_thread->_uuid, _thread_id);
    uuid_unparse(_thread->_user, user_id);
    for (; index; index = index->_nxt) {
        _tmp_u = index->_ptr;
        if (_tmp_u->_logged) {
            dprintf(_tmp_u->_b_client->_idsock,
            "400 [ThreadCreated] %s %s %ld \"%s\" \"%s\"\r\n",
            _thread_id, user_id, _thread->_created_time,
            _thread->_thread_name, _thread->_sms);
        }
    }
}

int thread_cmd(b_client *clt, m_server *svr, char **sms)
{
    use_r *_user = user_from_socket(clt->_idsock, svr->_users);
    threa_d *_thread;
    int _state;

    if (get_nb_part(sms) != 3)
        return (ERR_404);
    _state = user_check(_user);
    if (_state != D_400)
        return (_state);
    _thread = create_thread(sms[1], sms[2], _user->_part_uuid, _user->uuid);
    if (_thread == NULL)
        return (ERR_404);
    append_thread(&svr->_threads, _thread);
    spread_sms(_user, _thread, svr);
    return (NOTHING);
}