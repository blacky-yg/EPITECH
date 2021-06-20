/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** sms_func.c
*/

#include "../../include/inc.h"
#include "../../include/struct.h"

messag_e *create_sms(uuid_t _shipper, uuid_t _recipient, const char *_mess)
{
    messag_e *_sms = malloc(sizeof(messag_e));
    if (_sms == NULL)
        return (NULL);
    uuid_copy(_sms->_shipper, _shipper);
    uuid_copy(_sms->_recipient, _recipient);
    strcpy(_sms->_sms, _mess);
    _sms->_s_time = time(NULL);
    _sms->_nxt = NULL;
    return (_sms);
}

void append_sms_list(messag_e *_sms, messag_e **_sms_list)
{
    messag_e *index = *_sms_list;
    if (*_sms_list == NULL) {
        *_sms_list = _sms;
        return;
    }
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = _sms;
}