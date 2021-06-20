/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** channeltools.c
*/


#include "../../include/channel_func.h"

channe_l *create_channel(const char *_channel_name, const char *desc,
                        uuid_t _teauid)
{
    channe_l *_ch = malloc(sizeof(channe_l));
    if (_ch == NULL)
        return (NULL);
    strncpy(_ch->_channel_name, _channel_name, MAX_NAME_LENGTH);
    strncpy(_ch->_descript, desc, MAX_DESCRIPTION_LENGTH);
    uuid_generate_random(_ch->_uuid);
    uuid_copy(_ch->_team_uuid, _teauid);
    _ch->_nxt = NULL;
    build_channel(_channel_name, _teauid, _ch->_uuid);
    return (_ch);
}

void append_channel(channe_l **chnls, channe_l *_chnl)
{
    channe_l *index;
    if (*chnls == NULL) {
        *chnls = _chnl;
        return;
    } index = *chnls;
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = _chnl;
}

void build_channel(const char *_channel_name, uuid_t _teauid,
                    uuid_t _chnuid)
{
    char _tmid[37], _chid[37];
    uuid_unparse(_teauid, _tmid);
    uuid_unparse(_chnuid, _chid);
    server_event_channel_created(_tmid, _chid, _channel_name);
}

channe_l *channel_from_uuid(uuid_t uuid, channe_l *_chnls)
{
    channe_l *index = _chnls;

    for (; index; index = index->_nxt) {
        if (uuid_compare(uuid, index->_uuid) == 0)
            return (index);
    } return (NULL);
}

channe_l *channel_from_id(const char *id, channe_l *_chnls)
{
    uuid_t uuid;
    channe_l *index = _chnls;
    uuid_parse(id, uuid);
    for (; index; index = index->_nxt) {
        if (uuid_compare(uuid, index->_uuid) == 0)
            return (index);
    } return (NULL);
}