/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** send.c
*/

#include "logging_server.h"
#include "../../include/cmds.h"
#include "../../include/sms_func.h"

void shipp(uuid_t rec_uid, uuid_t ship_id, const char *_sms)
{
    char recipient_id[37], shipper_id[37];

    uuid_unparse(rec_uid, recipient_id);
    uuid_unparse(ship_id, shipper_id);
    server_event_private_message_sent(shipper_id, recipient_id, _sms);
}

void know_shipper(uuid_t rec, uuid_t send, m_server *svr, char *sms)
{
    use_r *_us = user_from_uuid(rec, svr->_users);
    char shipper_id[37];
    if (_us == NULL)
        return;
    uuid_unparse(send, shipper_id);
    if (_us->_logged && _us->_b_client) {
        dprintf(_us->_b_client->_idsock, "140 [MESSAGEFROM] %s \"%s\"\r\n",
        shipper_id, sms);
    }
}

int send_cmd(b_client *bclt, m_server *svr, char **_sms)
{
    messag_e *sms;
    use_r *_us;
    uuid_t rec_uid;

    _us = user_from_socket(bclt->_idsock, svr->_users);
    if (_us == NULL)
        return (ERR_404);
    if (get_nb_part(_sms) != 3)
        return (ERR_404);
    if (uuid_parse(_sms[1], rec_uid) == -1) {
        answer_sender_with_string(ERR_404, bclt->_idsock, _sms[1]);
        return (NOTHING);
    } sms = create_sms(_us->uuid, rec_uid, _sms[2]);
    append_sms_list(sms, &svr->_messages);
    shipp(rec_uid, _us->uuid, _sms[2]);
    know_shipper(rec_uid, _us->uuid, svr, _sms[2]);
    return (D_400);
}