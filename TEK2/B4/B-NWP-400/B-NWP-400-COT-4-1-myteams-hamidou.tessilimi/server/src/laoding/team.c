/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** team.c
*/


#include "logging_server.h"
#include "../../include/struct.h"
#include "../../include/user_func.h"
#include "../../include/cmds.h"
#include "../../include/team_func.h"

lis_t *create_node(void)
{
    lis_t *nd = malloc(sizeof(lis_t));

    if (nd == NULL)
        return (NULL);
    nd->_nxt = NULL;
    nd->_ptr = NULL;
    return (nd);
}

void append_node(lis_t *nd, lis_t **list)
{
    lis_t *index = *list;

    if (*list == NULL) {
        *list = nd;
        return;
    }
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = nd;
}

void user_lk_list(const char *_usid, tea_m *_team, m_server *svr)
{
    use_r *user = user_from_id(_usid, svr->_users);
    lis_t *_tnd, *_und;

    if (user == NULL)
        return;
    _tnd = create_node();
    if (_tnd == NULL)
        return;
    _tnd->_ptr = user;
    append_node(_tnd, &_team->_users);
    _und = create_node();
    if (_und == NULL)
        return;
    _und->_ptr = _team;
    append_node(_und, &user->_teams);
}

int team_loading(m_server *svr, char **wrds)
{
    tea_m *_team = team_mem();
    if (_team == NULL)
        return (-1);
    uuid_parse(wrds[1], _team->_uuid);
    _team->_created_time = atol(wrds[2]);
    strcpy(_team->_team_name, wrds[3]);
    strcpy(_team->_descript, wrds[4]);
    for (int i = 5; wrds[i] != NULL; i++)
        user_lk_list(wrds[i], _team, svr);
    if (svr->_teams == NULL) {
        svr->_teams = _team;
        return (0);
    } append_team(&svr->_teams, _team);
    return (0);
}