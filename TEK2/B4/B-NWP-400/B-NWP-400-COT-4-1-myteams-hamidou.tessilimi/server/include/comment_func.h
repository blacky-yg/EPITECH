/*
** EPITECH PROJECT, 2021
** my_teams.c
** File description:
** comment_func.h
*/

#pragma once

#ifndef COMMENT_FUNC_H_
#define COMMENT_FUNC_H_

#include "struct.h"
#include "logging_server.h"

void build_cmt(uuid_t _threa_du, uuid_t _useru, const char *_sms);
commen_t *create_cmt(const char *_sms, uuid_t sender, uuid_t _threa_du);
void append_cmt(commen_t **_cmt_list, commen_t *_cmt);

#endif /* !COMMENT_FUNC_H_ */