/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** basic_server functions header
*/

#ifndef BASIC_SERVER_H
#define BASIC_SERVER_H

#include "struct.h"

#define handle_error(msg)   \
    do                      \
    {                       \
        perror(msg);        \
        exit(EXIT_FAILURE); \
    } while (0)

int recover_connections(b_server *b_svr, fd_set *fd_s);
void append_client(b_client *_n_clt, b_client **list);
int create_client(b_client **clts, int sock);

void quit_client(b_client *client);
void delete_st_client(b_client **clts);
b_client *delete_client_fd(int sock, b_client **clts);
void destroy_basic_clients(b_client *clts);
void destroy_message(bs_sms **sms);

void destroy_basic_server(b_server *b_svr);

void destroy_sms(bs_sms *_sms);

void append_sms(bs_sms *_sms, bs_sms **_sms_lst);
bs_sms *receive_clt_sms(b_client *clt, fd_set *fd_s);
bs_sms *get_message(b_client **clts, fd_set *fd_s);
bs_sms *init_sms(void);

void sender(int _sock, const char *_sms);
int init_socket(int _port);
int init_bserver(b_server *svr_bs, int _port);

#endif /* !BASIC_SERVER_H */