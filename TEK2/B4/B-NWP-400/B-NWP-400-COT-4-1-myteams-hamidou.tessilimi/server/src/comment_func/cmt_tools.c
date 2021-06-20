/*
** EPITECH PROJECT, 2021
** cmt_tools.c
** File description:
** cmt_tools.c
*/

#include "../../include/inc.h"
#include "../../include/struct.h"
#include "../../include/logging_server.h"

void build_cmt(uuid_t _threa_du, uuid_t _useru, const char *_sms)
{
    char _threadid[37], _userid[37];
    uuid_unparse(_threa_du, _threadid);
    uuid_unparse(_useru, _userid);
    server_event_thread_new_reply(_threadid, _userid, _sms);
}

commen_t *create_cmt(const char *_sms, uuid_t sender, uuid_t _threa_du)
{
    commen_t *_cmt = malloc(sizeof(commen_t));

    if (_cmt == NULL)
        return (NULL);
    strncpy(_cmt->_answer, _sms, MAX_BODY_LENGTH);
    uuid_copy(_cmt->_thread_uuid, _threa_du);
    uuid_copy(_cmt->_shipper, sender);
    _cmt->_created_time = time(NULL);
    _cmt->_nxt = NULL;
    build_cmt(sender, _threa_du, _sms);
    return (_cmt);
}

void append_cmt(commen_t **_cmt_list, commen_t *_cmt)
{
    commen_t *index;
    if (*_cmt_list == NULL) {
        *_cmt_list = _cmt;
        return;
    } index = *_cmt_list;
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = _cmt;
}