/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** cmds.h
*/

#ifndef CMDS_H_
#define CMDS_H_

#include "struct.h"
#include "basic_server.h"

int handle_sms(bs_sms **messages, m_server *server);
int get_nb_part(char **_sms);

void answer_sender(answers type, int socket);
void answer_sender_with_string(answers type, int socket, const char *str);
void send_sms_to_connected_users(const char *message, use_r *users);

use_r *user_from_uuid(uuid_t uuid, use_r *users);
use_r *user_from_id(const char *id, use_r *users);
use_r *user_from_name(const char *username, use_r *users);
use_r *user_from_socket(int socket, use_r *users);

void init_thread(use_r *user, char **_sms, m_server *svr);
void init_channel(use_r *user, char **_sms, m_server *svr);
answers init_team(use_r *user, char **_sms, m_server *svr);

int login_cmd(b_client *clt, m_server *svr, char **_sms);
int logout_cmd(b_client *_clt, m_server *svr, char **_sms);

void shipp_user(int socket, use_r *_us);
int user_list_cmd(b_client *clt, m_server *svr, char **sms);
int user_cmd(b_client *clt, m_server *svr, char **sms);

void shipp(uuid_t rec_uid, uuid_t ship_id, const char *_sms);
void know_shipper(uuid_t rec, uuid_t send, m_server *svr, char *sms);
int send_cmd(b_client *bclt, m_server *svr, char **_sms);

int check_bet(messag_e *sms, use_r *st, use_r *sd);
void shipp_sms(b_client *clt, m_server *svr,
                                use_r *st, use_r *sd);
int sms_cmd(b_client *clt, m_server *svr, char **sms);
int help(b_client *clt, m_server *svr, char **sms);

void subscribe(uuid_t _useruid, uuid_t _teamuid);
int subscribe_cmd(b_client *clt, m_server *svr, char **_sms);

int subscribed_cmd(b_client *clt, m_server *svr, char **_sms);
void spread_list(int _sock, use_r *_user);

void unsubscribe(uuid_t teamid, uuid_t _userid);
int unsubscribe_cmd(b_client *clt, m_server *svr, char **sms);

int init_part(use_r *_user, m_server *svr, char **_sms);
int use_cmd(b_client *clt, m_server *svr, char **_sms);

int team_cmd(b_client *_clt, m_server *_svr, char **_sms);
int channel_cmd(b_client *_clt, m_server *_svr, char **_sms);
int thread_cmd(b_client *clt, m_server *svr, char **sms);
int reply_cmd(b_client *clt, m_server *svr, char **sms);
int create_cmd(b_client *clt, m_server *svr, char **sms);

int list_team_cmd(b_client *clt, m_server *svr, char **_sms);
int list_channel_cmd(b_client *clt, m_server *svr, char **_sms);
int list_thread_cmd(b_client *clt, m_server *svr, char **_sms);
int list_reply_cmd(b_client *clt, m_server *svr, char **_sms);
int list_cmd(b_client *clt, m_server *svr, char **_sms);

int info_team_cmd(b_client *clt, m_server *svr, char **sms);
int info_channel_cmd(b_client *clt, m_server *svr, char **sms);
int info_thread_cmd(b_client *clt, m_server *svr, char **_sms);
int info_cmd(b_client *clt, m_server *svr, char **_sms);

#endif /* !CMDS_H_ */
