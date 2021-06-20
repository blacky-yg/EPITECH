/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** loading.h
*/

#pragma once

#ifndef LOADING_H_
#define LOADING_H_

#include "struct.h"
#include "user_func.h"

int user_loading(m_server *svr, char **_sms_words);
int sms_loading(m_server *svr, char **wrds);

lis_t *create_node(void);
void append_node(lis_t *nd, lis_t **list);
void user_lk_list(const char *_usid, tea_m *_team, m_server *svr);
int team_loading(m_server *svr, char **wrds);

int ressources_loading(m_server *svr, char *line);
int loader(m_server *svr);

#endif /* !LOADING_H_ */