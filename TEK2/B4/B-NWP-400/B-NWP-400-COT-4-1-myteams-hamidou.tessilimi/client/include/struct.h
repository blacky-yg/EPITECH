/*
** EPITECH PROJECT, 2021
** client
** File description:
** struct
*/

#ifndef STRUCT_H
#define STRUCT_H

#include "headers.h"

typedef enum CONTEXT
{
    PERSONAL,
    TEAM,
    CHANNEL,
    THREAD
} CONTEXT;

typedef struct client_s
{
    int _fd;
    bool _is_connected;
    char const *_user_name;
    char const *_user_uuid;
    char const *_context_id;
    CONTEXT _context;
} client_t;

typedef struct teams_cmd_s
{
    char *cmd;
    void (*cmd_func)(client_t *, char **tab);
} teams_cmd_t;

#endif /* !STRUCT_H */