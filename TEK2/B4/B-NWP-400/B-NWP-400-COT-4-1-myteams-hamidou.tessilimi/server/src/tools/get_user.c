/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** get_user.c
*/

#include "../../include/cmds.h"
#include "../../include/inc.h"

use_r *user_from_uuid(uuid_t uuid, use_r *_user)
{
    for (use_r *index = _user; index; index = index->_nxt) {
        if (uuid_compare(uuid, index->uuid) == 0)
            return (index);
    } return (NULL);
}

use_r *user_from_id(const char *id, use_r *_user)
{
    uuid_t _u_uuid;
    uuid_parse(id, _u_uuid);
    for (use_r *index = _user; index; index = index->_nxt) {
        if (uuid_compare(_u_uuid, index->uuid) == 0)
            return (index);
    } return (NULL);
}

use_r *user_from_name(const char *_name, use_r *_user)
{
    for (use_r *index = _user; index; index = index->_nxt) {
        if (strcmp(_name, index->username) == 0)
            return (index);
    } return (NULL);
}

use_r *user_from_socket(int socket, use_r *_user)
{
    for (use_r *index = _user; index; index = index->_nxt) {
        if (index->_b_client && index->_b_client->_idsock == socket)
            return (index);
    } return (NULL);
}