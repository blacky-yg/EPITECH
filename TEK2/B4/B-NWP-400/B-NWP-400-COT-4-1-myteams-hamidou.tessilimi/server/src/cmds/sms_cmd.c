/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** sms_cmd
*/

#include "logging_server.h"
#include "../../include/cmds.h"

int check_bet(messag_e *sms, use_r *st, use_r *sd)
{
    const int st1 = uuid_compare(sms->_shipper, st->uuid);
    const int sd1 = uuid_compare(sms->_recipient, sd->uuid);
    const int st2 = uuid_compare(sms->_shipper, sd->uuid);
    const int sd2 = uuid_compare(sms->_recipient, st->uuid);

    if (st1 == 0 && sd1 == 0)
        return (1);
    else if (st2 == 0 && sd2 == 0)
        return (1);
    return (0);
}

void shipp_sms(b_client *clt, m_server *svr,
                                use_r *st, use_r *sd)
{
    messag_e *index = svr->_messages;
    char _shipper_id[37];

    for (; index; index = index->_nxt) {
        if (check_bet(index, st, sd)) {
            uuid_unparse(index->_shipper, _shipper_id);
            dprintf(clt->_idsock, "150 [Messages] %s \"%s\" %ld\r\n",
                    _shipper_id, index->_sms, index->_s_time);
        }
    }
}

int sms_cmd(b_client *clt, m_server *svr, char **sms)
{
    use_r *st, *sd;
    if (get_nb_part(sms) != 2)
        return (ERR_404);
    st = user_from_id(sms[1], svr->_users);
    if (st == NULL) {
        answer_sender_with_string(ERR_404, clt->_idsock, sms[1]);
        return (NOTHING);
    } sd = user_from_socket(clt->_idsock, svr->_users);
    if (sd == NULL)
        return (ERR_404);
    shipp_sms(clt, svr, st, sd);
    return (NOTHING);
}