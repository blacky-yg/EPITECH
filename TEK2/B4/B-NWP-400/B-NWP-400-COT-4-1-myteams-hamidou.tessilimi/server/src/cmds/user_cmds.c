/*
** EPITECH PROJECT, 2021
** my_team
** File description:
** user_list.c
*/

#include "logging_server.h"
#include "../../include/cmds.h"

void shipp_user(int socket, use_r *_us)
{
    char _usid[37];
    use_r *index = _us;
    for (; index; index = index->_nxt) {
        uuid_unparse(index->uuid, _usid);
        dprintf(socket, "150 [Users] %s \"%s\" %d\r\n",
        index->username, _usid, index->_logged);
    }
}

int user_list_cmd(b_client *clt, m_server *svr, char **sms)
{
    if (user_from_socket(clt->_idsock, svr->_users) == NULL)
        return (ERR_404);
    if (get_nb_part(sms) != 1)
        return (ERR_404);
    shipp_user(clt->_idsock, svr->_users);
    return (NOTHING);
}

int user_cmd(b_client *clt, m_server *svr, char **sms)
{
    char user_id[37];
    use_r *_us;

    if (user_from_socket(clt->_idsock, svr->_users) == NULL)
        return (ERR_404);
    if (get_nb_part(sms) != 2)
        return (ERR_404);
    if (strlen(sms[1]) != 36) {
        answer_sender_with_string(ERR_404, clt->_idsock, sms[1]);
        return (NOTHING);
    } _us = user_from_id(sms[1], svr->_users);
    if (_us == NULL) {
        answer_sender_with_string(ERR_404, clt->_idsock, sms[1]);
        return (NOTHING);
    } uuid_unparse(_us->uuid, user_id);
    dprintf(clt->_idsock, "100 [User] %s \"%s\" %d\r\n",
    user_id, _us->username, _us->_logged);
    return (NOTHING);
}