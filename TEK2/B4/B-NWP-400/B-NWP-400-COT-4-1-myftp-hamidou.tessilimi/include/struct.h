/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** struct
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct info_s {
    fd_set *_fd_set;
    int _port;
    int _socket;
    int nb_connexion;
    char *_ip_addr;
    char *_msg;
    char *_filepath;
    char *_cmd;
    char *_params;
    bool _is_connected;
    bool _user_login;
} info_t;

typedef struct ftp_cmd_s {
    char *cmd;
    void (*cmd_func)(info_t *);
} ftp_cmd_t;

#endif /* !STRUCT_H */