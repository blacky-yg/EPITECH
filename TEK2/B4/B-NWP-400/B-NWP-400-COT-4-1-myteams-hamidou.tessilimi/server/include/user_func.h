/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** user_functions
*/

#ifndef USER_FUNC_H_
#define USER_FUNC_H_

#include "struct.h"

use_r *create_user(void);
void append_user(use_r *user, use_r **list);
int add_to_team(use_r *user, tea_m *team);
void del_from_team(tea_m *team, use_r *user);

#endif /* !USER_FUNC_H_ */
