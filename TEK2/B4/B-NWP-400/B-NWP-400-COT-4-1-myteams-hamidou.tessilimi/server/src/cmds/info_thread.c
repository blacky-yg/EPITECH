/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** info of thread
*/

#include "../../include/inc.h"
#include "../../include/cmds.h"
#include "../../include/thread_func.h"

static void thread_inf(int socket, threa_d *thread)
{
    char _threadid[37], _userid[37];

    uuid_unparse(thread->_uuid, _threadid);
    uuid_unparse(thread->_user, _userid);
    dprintf(socket, "414 [Thread info] %s %s %ld\n\"%s\"\n\"%s\"\r\n",
    _threadid, _userid, thread->_created_time,
    thread->_thread_name, thread->_sms);
}

int info_thread_cmd(b_client *clt, m_server *svr, char **_sms)
{
    threa_d *thread;

    if (get_nb_part(_sms) != 2)
        return (ERR_404);
    if (user_from_socket(clt->_idsock, svr->_users) == NULL)
        return (ERR_404);
    thread = thread_from_id(_sms[1], svr->_threads);
    if (thread == NULL) {
        answer_sender_with_string(ERR_404, clt->_idsock, _sms[1]);
        return (NOTHING);
    } thread_inf(clt->_idsock, thread);
    return (NOTHING);
}

int info_cmd(b_client *clt, m_server *svr, char **_sms)
{
    switch (svr->_users->_part) {
        case NONE:return (NOTHING); break;
        case TEAM: info_team_cmd(clt, svr, _sms); break;
        case CHANNEL: info_channel_cmd(clt, svr, _sms); break;
        case THREAD: info_thread_cmd(clt, svr, _sms); break;
        default: return (NOTHING); break;
    } return (0);
}