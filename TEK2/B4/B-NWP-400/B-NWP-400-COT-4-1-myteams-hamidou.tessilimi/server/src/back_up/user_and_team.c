/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** userandteam
*/


#include "../../include/inc.h"
#include "../../include/struct.h"

void user_back_up(int _fd, use_r *_us)
{
    lis_t *index = _us->_teams;
    char user_id[37], team_id[37];
    tea_m *_team;

    uuid_unparse(_us->uuid, user_id);
    dprintf(_fd, "USER %s \"%s\" ", user_id, _us->username);
    for (; index; index = index->_nxt) {
        _team = index->_ptr;
        uuid_unparse(_team->_uuid, team_id);
        dprintf(_fd, "%s ", team_id);
    } write(_fd, "\n", 1);
}

void save_user(int _fd, use_r *_users)
{
    use_r *index = _users;
    for (; index; index = index->_nxt)
        user_back_up(_fd, index);
}

void team_back_up(int _fd, tea_m *_team)
{
    lis_t *index = _team->_users;
    use_r *user;
    char team_id[37], user_id[37];

    uuid_unparse(_team->_uuid, team_id);
    dprintf(_fd, "TEAM %s %ld \"%s\" \"%s\" ",
    team_id, _team->_created_time, _team->_team_name, _team->_descript);
    for (; index; index = index->_nxt) {
        user = index->_ptr;
        uuid_unparse(user->uuid, user_id);
        write(_fd, user_id, 36);
        write(_fd, " ", 1);
    } write(_fd, "\n", 1);
}

void save_team(int _fd, tea_m *_teams)
{
    tea_m *index = _teams;
    for (; index; index = index->_nxt)
        team_back_up(_fd, index);
}