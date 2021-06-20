/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** thread_func.h
*/

#pragma once

#include "struct.h"
#include "basic_server.h"

threa_d *mem_thread(void);
void build_thread(uuid_t _thuid, uuid_t _chuid,
                uuid_t _usuid, char const *str, const char *_sms);
threa_d *create_thread(const char *_th_name, const char *_sms,
                    uuid_t _chuid, uuid_t _usuid);
void append_thread(threa_d **_thds, threa_d *thread_to_add);
threa_d *thread_from_id(const char *id, threa_d *_thrds);
threa_d *thread_from_uuid(uuid_t uuid, threa_d *_thrds);