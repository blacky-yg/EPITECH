/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** thread_tools
*/

#include "../../include/inc.h"
#include "../../include/struct.h"
#include "../../include/basic_server.h"
#include "../../include/logging_server.h"

threa_d *mem_thread(void)
{
    threa_d *_the = malloc(sizeof(threa_d));
    if (_the == NULL)
        return (NULL);
    memset(_the->_thread_name, 0, MAX_NAME_LENGTH);
    memset(_the->_sms, 0, MAX_BODY_LENGTH);
    return (_the);
}

void build_thread(uuid_t _thuid, uuid_t _chuid,
                uuid_t _usuid, char const *str, const char *_sms)
{
    char _thid[37], _chid[37], _usid[37];

    uuid_unparse(_thuid, _thid);
    uuid_unparse(_chuid, _chid);
    uuid_unparse(_usuid, _usid);
    server_event_thread_created(_chid, _thid, _usid, str, _sms);
}

threa_d *create_thread(const char *_th_name, const char *_sms,
                    uuid_t _chuid, uuid_t _usuid)
{
    threa_d *_the = mem_thread();
    if (_the == NULL)
        return (NULL);
    strncpy(_the->_thread_name, _th_name, MAX_NAME_LENGTH);
    strncpy(_the->_sms, _sms, MAX_BODY_LENGTH);
    uuid_copy(_the->_user, _usuid);
    uuid_copy(_the->_channel_uuid, _chuid);
    uuid_generate_random(_the->_uuid);
    _the->_created_time = time(NULL);
    _the->_nxt = NULL;
    build_thread(_the->_uuid, _chuid, _usuid, _the->_thread_name, _sms);
    return (_the);
}

void append_thread(threa_d **_thds, threa_d *thread_to_add)
{
    threa_d *index;
    if (*_thds == NULL)
    {
        *_thds = thread_to_add;
        return;
    }
    index = *_thds;
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = thread_to_add;
}

threa_d *thread_from_uuid(uuid_t uuid, threa_d *_thrds)
{
    threa_d *index = _thrds;
    for (; index; index = index->_nxt)
    {
        if (uuid_compare(uuid, index->_uuid) == 0)
            return (index);
    }
    return (NULL);
}