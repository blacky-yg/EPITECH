/*
** EPITECH PROJECT, 2021
** myteams
** File description:
** client
*/

#ifndef CLIENT_T_H
#define CLIENT_T_H

#include "struct.h"
#include "headers.h"
#include "../../libs/myteams/logging_client.h"

void usage(void);

// SERVER FD & MAIN FUNCTION
int get_server_sock(char *ip, int port);
int client(char *ip, int port);
int manage_client(client_t *user, int server_fd);

// MANAGE INPUTS
int get_sms_word(char **_sms_word, char *_str, const char *freed);
int get_str(char **_sms_word, char *_str);
int get_nb_part(char **_sms);
void free_two_tab(char **_tab);
int count_tab(char **tab);

// SPLIT TAB
char **my_split(char *_str, const char *freed);
bool check_freed(char c, const char *freed);
int get_len(char *str, const char *freed);
int get_size_words(char *str, const char *freed);

// MANAGE_SEND_CMD
void manage_send_cmd(char *buf, client_t *user);
void send_logout(client_t *user, char **tab);
void send_login(client_t *user, char **tab);
void send_user(client_t *user, char  **tab);
void send_users(client_t *user, char **tab);
void send_send(client_t *user, char **tab);
void send_suscribe(client_t *user, char **tab);
void send_messages(client_t *user, char **tab);
void send_unsubscribe(client_t *user, char **tab);
void send_create_team(char *id, char *desc, client_t *user);
void send_create_chan(char *id, char *desc, client_t *user);
void send_create_thread(char *id, char *desc, client_t *user);
void send_create_reply(char *message, client_t *user);
void send_create(client_t *user, char **tab);
void send_use(client_t *user, char **tab);
void send_info(client_t *user, char **tab);
void send_subscribed(client_t *user, char **tab);
void send_list(client_t *user, char **tab);
void send_help(client_t *user, char **tab);

// MANAGE_RECEIVE_CMD
void manage_receive_cmd(char *buf, client_t *user);
void login_receive(client_t *user, char **tab);
void logout_receive(client_t *user, char **tab);
void users_receive(client_t *user, char **tab);
void user_receive(client_t *user, char **tab);
void send_receive(client_t *user, char **tab);
void send_message_receive(client_t *user, char **tab);
void subs_receive(client_t *user, char **tab);
void unsubs_receive(client_t *user, char **tab);
void create_receive(client_t *user, char **tab);
void use_receive(client_t *user, char **tab);
void info_receive(client_t *user, char **tab);
void subscribed_receive(client_t *user, char **tab);
void list_receive(client_t *user, char **tab);
void help_receive(client_t *user, char **tab);
void nothing_receive(client_t *user, char **tab);
void create_team_receive(client_t *user, char **tab);
void create_chan_receive(client_t *user, char **tab);
void create_thread_receive(client_t *user, char **tab);
void create_reply_receive(client_t *user, char **tab);
#endif /* !CLIENT_T_H */