/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** createreply
*/

#include "../../include/inc.h"
#include "../../include/cmds.h"
#include "../../include/thread_func.h"
#include "../../include/comment_func.h"

static void spread_sms(int _sock, commen_t *_reply)
{
    char _thread_uid[37], _useruid[37];

    if (_reply == NULL) {
        dprintf(_sock, "Server Error\r\n");
        return;
    } uuid_unparse(_reply->_thread_uuid, _thread_uid);
    uuid_unparse(_reply->_shipper, _useruid);
    dprintf(_sock, "400 [ReplyCreated] %s %s %ld \"%s\"\r\n",
    _thread_uid, _useruid, _reply->_created_time, _reply->_answer);
}

int reply_cmd(b_client *clt, m_server *svr, char **sms)
{
    use_r *_user;
    threa_d *_thread;
    commen_t *_reply;

    if (get_nb_part(sms) != 2)
        return (ERR_404);
    _user = user_from_socket(clt->_idsock, svr->_users);
    if (_user == NULL)
        return (ERR_404);
    _thread = thread_from_uuid(_user->_part_uuid, svr->_threads);
    if (_thread == NULL)
        return (ERR_404);
    _reply = create_cmt(sms[1], _user->uuid, _thread->_uuid);
    append_cmt(&svr->_comments, _reply);
    spread_sms(clt->_idsock, _reply);
    return (NOTHING);
}

int create_cmd(b_client *clt, m_server *svr, char **sms)
{
    switch (svr->_users->_part) {
        case NONE: team_cmd(clt, svr, sms); break;
        case TEAM: channel_cmd(clt, svr, sms); break;
        case CHANNEL: thread_cmd(clt, svr, sms); break;
        case THREAD: reply_cmd(clt, svr, sms); break;
        default: return (NOTHING); break;
    } return (0);
}