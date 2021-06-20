/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** sms_and_reply.c
*/

#include "../../include/inc.h"
#include "../../include/struct.h"

void sms_back_up(int _fd, messag_e *_sms)
{
    char _shipper_id[37], recepient_id[37];

    uuid_unparse(_sms->_shipper, _shipper_id);
    uuid_unparse(_sms->_recipient, recepient_id);
    dprintf(_fd, "MESSAGE %s %s %ld \"%s\"\n",
    _shipper_id, recepient_id, _sms->_s_time, _sms->_sms);
}

void save_message(int _fd, messag_e *sms)
{
    messag_e *index = sms;
    for (; index; index = index->_nxt)
        sms_back_up(_fd, index);
}

void reply_back_up(int _fd, commen_t *rpl)
{
    char thread_id[37], user_id[37];

    uuid_unparse(rpl->_thread_uuid, thread_id);
    uuid_unparse(rpl->_shipper, user_id);
    dprintf(_fd, "REPLY %s %s %ld \"%s\"\n",
    thread_id, user_id, rpl->_created_time, rpl->_answer);
}

void save_reply(int _fd, commen_t *rpl)
{
    while (rpl) {
        reply_back_up(_fd, rpl);
        rpl = rpl->_nxt;
    }
}