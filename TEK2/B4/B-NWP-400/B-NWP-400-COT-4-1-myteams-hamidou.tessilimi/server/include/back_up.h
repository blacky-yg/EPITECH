/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** back_up.h
*/

#pragma once

#ifndef BACK_UP_H
#define BACK_UP_H

#include "struct.h"

void user_back_up(int _fd, use_r *_us);
void save_user(int _fd, use_r *_users);

void team_back_up(int _fd, tea_m *_team);
void save_team(int _fd, tea_m *_teams);

void channel_back_up(int fd, channe_l *_chan);
void save_channel(int fd, channe_l *_chnls);

void thread_back_up(int fd, threa_d *_thr);
void save_thread(int fd, threa_d *threads);

void sms_back_up(int fd, messag_e *_sms);
void save_message(int fd, messag_e *sms);

void reply_back_up(int _fd, commen_t *rpl);
void save_reply(int _fd, commen_t *rpl);

int back_up(m_server *svr);

#endif /* !BACK_UP_H */