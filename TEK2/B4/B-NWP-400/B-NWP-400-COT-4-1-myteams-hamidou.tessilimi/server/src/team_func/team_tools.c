/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** team_tools.c
*/

#include "../../include/team_func.h"

tea_m *team_mem(void)
{
    tea_m *_tm = malloc(sizeof(tea_m));
    if (_tm == NULL)
        return (NULL);
    _tm->_users = NULL;
    _tm->_nxt = NULL;
    memset(_tm->_team_name, 0, MAX_NAME_LENGTH);
    memset(_tm->_descript, 0, MAX_DESCRIPTION_LENGTH);
    return (_tm);
}

void build_team(const char *_team_name, uuid_t _tmuid, uuid_t _usuid)
{
    char user_id[37], team_id[37];
    uuid_unparse(_usuid, user_id);
    uuid_unparse(_tmuid, team_id);
    server_event_team_created(team_id, _team_name, user_id);
}

tea_m *create_team(const char *_team_name, const char *_descript, uuid_t usd)
{
    tea_m *_tm = team_mem();
    if (_tm == NULL)
        return (NULL);
    strncpy(_tm->_team_name, _team_name, MAX_NAME_LENGTH);
    strncpy(_tm->_descript, _descript, MAX_DESCRIPTION_LENGTH);
    uuid_generate_random(_tm->_uuid);
    _tm->_created_time = time(NULL);
    build_team(_tm->_team_name, _tm->_uuid, usd);
    return (_tm);
}

void append_team(tea_m **teams, tea_m *team_to_add)
{
    tea_m *index = *teams;
    if (*teams == NULL) {
        *teams = team_to_add;
        return;
    }
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = team_to_add;
}

int check_in(use_r *_us, tea_m *_tms)
{
    lis_t *index = _tms->_users;
    for (; index; index = index->_nxt) {
        if (index->_ptr == _us)
            return (1);
    } return (0);
}