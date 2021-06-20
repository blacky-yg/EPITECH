/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** team_func.h
*/

#pragma once

#ifndef TEAM_H_
#define TEAM_H_

#include "struct.h"
#include "basic_server.h"
#include "logging_server.h"

tea_m *team_mem(void);
void build_team(const char *_team_name, uuid_t _tmuid, uuid_t _usuid);
tea_m *create_team(const char *_team_name, const char *_descript, uuid_t usd);
void append_team(tea_m **teams, tea_m *team_to_add);

tea_m *team_from_uuid(uuid_t uuid, tea_m *_tms);
tea_m *team_from_id(const char *id, tea_m *_tms);

int t_add_to_team(tea_m *_tms, use_r *_us);
void t_del_from_team(tea_m *_tms, use_r *_us);

int check_in(use_r *_us, tea_m *_tms);

#endif /* !TEAM_H_ */