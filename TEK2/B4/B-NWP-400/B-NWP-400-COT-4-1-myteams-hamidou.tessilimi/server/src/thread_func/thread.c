/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** thread
*/

#include "../../include/inc.h"
#include "../../include/struct.h"
#include "../../include/basic_server.h"

threa_d *thread_from_id(const char *id, threa_d *_thrds)
{
    uuid_t uuid;
    threa_d *index = _thrds;
    uuid_parse(id, uuid);
    for (; index; index = index->_nxt) {
        if (uuid_compare(uuid, index->_uuid) == 0)
            return (index);
    } return (NULL);
}