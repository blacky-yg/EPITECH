/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** _tms.c
*/

#include "../../include/team_func.h"

tea_m *team_from_uuid(uuid_t uuid, tea_m *_tms)
{
    tea_m *index = _tms;
    for (; index; index = index->_nxt) {
        if (uuid_compare(uuid, index->_uuid) == 0)
            return (index);
    } return (NULL);
}

tea_m *team_from_id(const char *id, tea_m *_tms)
{
    uuid_t uuid;
    tea_m *index = _tms;
    uuid_parse(id, uuid);
    for (; index; index = index->_nxt) {
        if (uuid_compare(uuid, index->_uuid) == 0)
            return (index);
    } return (NULL);
}

int t_add_to_team(tea_m *_tms, use_r *_us)
{
    lis_t *index = _tms->_users;
    lis_t *node = malloc(sizeof(lis_t));

    if (node == NULL)
        return (-1);
    node->_ptr = _us;
    node->_nxt = NULL;
    if (_tms->_users == NULL) {
        _tms->_users = node;
        return (0);
    }
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = node;
    return (0);
}

void t_del_from_team(tea_m *_tms, use_r *_us)
{
    use_r *tmp_user;
    lis_t *index = _tms->_users, *back_up = _tms->_users;
    if (_tms->_users->_nxt == NULL) {
        free(_tms->_users);
        _tms->_users = NULL;
        return;
    }
    while (index) {
        back_up = index;
        index = index->_nxt;
        tmp_user = index->_ptr;
        if (uuid_compare(tmp_user->uuid, _us->uuid) == 0) {
            back_up->_nxt = index->_nxt;
            free(index);
            return;
        }
    }
}