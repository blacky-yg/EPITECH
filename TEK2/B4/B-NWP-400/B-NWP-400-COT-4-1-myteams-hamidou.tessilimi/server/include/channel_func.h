/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** channel_func.h
*/

#pragma once

#ifndef CHANNEL_H_
#define CHANNEL_H_

#include "struct.h"
#include "basic_server.h"
#include "logging_server.h"

channe_l *create_channel(const char *_channel_name, const char *desc,
                        uuid_t _teauid);
void append_channel(channe_l **chnls, channe_l *_chnl);
void build_channel(const char *_channel_name, uuid_t _teauid,
                    uuid_t _chnuid);
channe_l *channel_from_uuid(uuid_t uuid, channe_l *_chnls);
channe_l *channel_from_id(const char *id, channe_l *_chnls);

#endif /* !CHANNEL_H_ */