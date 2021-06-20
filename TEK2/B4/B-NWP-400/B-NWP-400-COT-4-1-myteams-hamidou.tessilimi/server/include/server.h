/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** server.h
*/

#ifndef SERVER_H_
#define SERVER_H_

#include "struct.h"

void init_server(m_server *server);
int run_server(int _port);

void append_fd(b_client *clts, int svr_sck, fd_set *set);
int get_bigest(int svr_fd, b_client *clts);

void free_two_tab(char **_tab);
int get_sms_word(char **_sms_word, char *str, const char *freed);
int get_str(char **_sms_word, char *str);

bool check_freed(char c, const char *freed);
int get_len(char *str, const char *freed);
int get_size_words(char *str, const char *freed);
char **my_split(char *_str, const char *freed);


#endif /* !SERVER_H_ */
