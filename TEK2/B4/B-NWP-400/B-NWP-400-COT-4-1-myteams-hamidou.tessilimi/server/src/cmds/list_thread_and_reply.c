/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** list thread and reply cmd
*/

#include "../../include/inc.h"
#include "../../include/cmds.h"

void thread_spread_sms(use_r *user, threa_d *threads)
{
    threa_d *index = threads;
    char thread_id[37], user_id[37];

    for (; index; index = index->_nxt) {
        uuid_unparse(index->_uuid, thread_id);
        uuid_unparse(index->_user, user_id);
        if (uuid_compare(user->_part_uuid, index->_channel_uuid) == 0) {
            dprintf(user->_b_client->_idsock,
            "410 [Threads] %s %s %ld \"%s\" \"%s\"\r\n",
            thread_id, user_id, index->_created_time,
            index->_thread_name, index->_sms);
        }
    }
}

int list_thread_cmd(b_client *clt, m_server *svr, char **_sms)
{
    use_r *user;

    if (get_nb_part(_sms) != 1)
        return (ERR_404);
    user = user_from_socket(clt->_idsock, svr->_users);
    if (user == NULL)
        return (ERR_404);
    thread_spread_sms(user, svr->_threads);
    return (NOTHING);
}

static void reply_spread_sms(use_r *user, commen_t *replys)
{
    commen_t *index = replys;
    char thread_id[37], user_id[37];
    const int _sock = user->_b_client->_idsock;

    for (; index; index = index->_nxt) {
        uuid_unparse(index->_thread_uuid, thread_id);
        uuid_unparse(index->_shipper, user_id);
        if (uuid_compare(user->_part_uuid, index->_thread_uuid) == 0) {
            dprintf(_sock, "410 [Replys] %s %s %ld \"%s\"\r\n", thread_id,
            user_id, index->_created_time, index->_answer);
        }
    }
}

int list_reply_cmd(b_client *clt, m_server *svr, char **_sms)
{
    use_r *user;

    if (get_nb_part(_sms) != 1)
        return (ERR_404);
    user = user_from_socket(clt->_idsock, svr->_users);
    if (user == NULL)
        return (ERR_404);
    reply_spread_sms(user, svr->_comments);
    return (NOTHING);
}

int list_cmd(b_client *clt, m_server *svr, char **_sms)
{
    switch (svr->_users->_part) {
        case NONE: list_team_cmd(clt, svr, _sms); break;
        case TEAM: list_channel_cmd(clt, svr, _sms); break;
        case CHANNEL: list_thread_cmd(clt, svr, _sms); break;
        case THREAD: list_reply_cmd(clt, svr, _sms); break;
        default: return (NOTHING); break;
    } return (0);
}