/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** user_tools.c
*/

#include "../../include/inc.h"
#include "../../include/struct.h"

use_r *create_user(void)
{
    use_r *user = malloc(sizeof(use_r));
    if (user == NULL)
        return (NULL);
    memset(user->username, 0, MAX_NAME_LENGTH);
    memset(user->uuid, 0, 37);
    user->help = malloc(sizeof(char) * MAX_BODY_LENGTH);
    user->_logged = 0;
    user->_nxt = NULL;
    user->_part = NONE;
    user->_teams = NULL;
    user->_b_client = NULL;
    return (user);
}

void append_user(use_r *user, use_r **list)
{
    use_r *index = *list;

    if (*list == NULL) {
        *list = index;
        return;
    }
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = user;
}

int add_to_team(use_r *user, tea_m *team)
{
    lis_t *node = malloc(sizeof(lis_t));
    lis_t *index = user->_teams;
    if (node == NULL)
        return (-1);
    node->_ptr = team;
    node->_nxt = NULL;
    if (user->_teams == NULL) {
        user->_teams = node;
        return (0);
    }
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = node;
    return (0);
}

void del_from_team(tea_m *team, use_r *user)
{
    tea_m *_team_list;
    lis_t *index = user->_teams, *back_up = user->_teams;
    if (user->_teams->_nxt == NULL) {
        free(user->_teams);
        user->_teams = NULL;
        return;
    }
    while (index) {
        back_up = index;
        index = index->_nxt;
        _team_list = index->_ptr;
        if (uuid_compare(_team_list->_uuid, team->_uuid) == 0) {
            back_up->_nxt = index->_nxt;
            free(index);
            return;
        }
    }
}