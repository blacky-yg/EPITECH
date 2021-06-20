/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** myftp.h
*/

#ifndef MYFTP_H
#define MYFTP_H

#include "define.h"
#include "headers.h"
#include "struct.h"

// USAGE
void usage(void);

// CHECK_AV
int check_av(int ac, char *av[]);

// HANDLE_ERROR
int display_error(char *error_msg);
void *display_ptr_error(char *error_msg);

// INIT
info_t *init_struct(struct sockaddr_in *_addr);
struct sockaddr_in *init_addr(int port);
int init_socket(struct sockaddr_in addr);

// SEND_MSG
void send_msg(info_t *cur_info);

// FTP_SERVER
int ftp_server(info_t *info, struct sockaddr_in _addr);

// CMD_LOOP
int cmd_loop(info_t *info, info_t *cur_info, struct sockaddr_in _addr,
                        fd_set *r_fd_set);

// GET_CMD
int get_cmd(int fd, info_t *info);

// MANAGE_CMD
int manage_cmd(info_t *info);

// UTILS
void go_to_home(info_t *info);

// COMMAND1
void user_func(info_t *info);
void pass_func(info_t *info);
void noop_func(info_t *info);
void help_func(info_t *info);

// COMMAND2
void quit_func(info_t *info);
void cdup_func(info_t *info);
void cwd_func(info_t *info);
void pwd_func(info_t *info);

// COMMAND3
void pasv_func(info_t *info);
void port_func(info_t *info);
void list_func(info_t *info);

#endif /* !MYFTP_H */