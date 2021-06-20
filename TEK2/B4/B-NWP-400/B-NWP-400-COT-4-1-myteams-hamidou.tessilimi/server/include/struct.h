/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "inc.h"

#define MAX_NAME_LENGTH (32)
#define MAX_DESCRIPTION_LENGTH (255)
#define MAX_BODY_LENGTH (512)

typedef struct basic_client
{
    int _idsock;
    struct basic_client *_nxt;
} b_client;

typedef struct basic_server
{
    int _idsock;
    b_client *_client;
} b_server;

typedef struct bserver_sms
{
    char *_sms;
    b_client *_client;
    struct bserver_sms *_nxt;
} bs_sms;

typedef enum user_tools
{
    NONE,
    TEAM,
    CHANNEL,
    THREAD
} user_t;

typedef enum answers
{
    D_400,
    S_400,
    U_400,
    S_404,
    L_404,
    ERR_404,
    I_404,
    T_404,
    C_404,
    Y_404,
    N_404,
    NOTHING
} answers;

typedef struct l_list
{
    void *_ptr;
    struct l_list *_nxt;
} lis_t;

typedef struct user
{
    char username[MAX_NAME_LENGTH];
    bool _logged;
    uuid_t uuid;
    b_client *_b_client;
    user_t _part;
    uuid_t _part_uuid;
    lis_t *_teams;
    struct user *_nxt;
    char const *help;
} use_r;

typedef struct message
{
    char _sms[MAX_BODY_LENGTH];
    uuid_t _shipper;
    uuid_t _recipient;
    time_t _s_time;
    struct message *_nxt;
} messag_e;

typedef struct comment
{
    char _answer[MAX_BODY_LENGTH];
    uuid_t _shipper;
    uuid_t _thread_uuid;
    time_t _created_time;
    struct comment *_nxt;
} commen_t;

typedef struct thread
{
    char _thread_name[MAX_NAME_LENGTH];
    char _sms[MAX_BODY_LENGTH];
    uuid_t _uuid;
    uuid_t _user;
    uuid_t _channel_uuid;
    time_t _created_time;
    struct thread *_nxt;
} threa_d;

typedef struct channel
{
    char _channel_name[MAX_NAME_LENGTH];
    char _descript[MAX_DESCRIPTION_LENGTH];
    uuid_t _uuid;
    uuid_t _team_uuid;
    time_t _created_time;
    struct channel *_nxt;
} channe_l;

typedef struct team
{
    char _team_name[MAX_NAME_LENGTH];
    char _descript[MAX_DESCRIPTION_LENGTH];
    uuid_t _uuid;
    time_t _created_time;
    lis_t *_users;
    struct team *_nxt;
} tea_m;

typedef struct main_server
{
    use_r *_users;
    messag_e *_messages;
    commen_t *_comments;
    threa_d *_threads;
    channe_l *_channels;
    tea_m *_teams;
} m_server;

#endif /* !STRUCT_H_ */
