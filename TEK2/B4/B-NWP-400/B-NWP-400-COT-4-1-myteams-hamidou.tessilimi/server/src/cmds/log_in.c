/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** log_in.c
*/

#include "logging_server.h"
#include "../../include/cmds.h"
#include "../../include/user_func.h"

static use_r *init_user(use_r **_user, const char *username)
{
    use_r *_new_user = create_user();
    if (_new_user == NULL)
        return (NULL);
    (*_user == NULL)  ? *_user = _new_user : append_user(_new_user, _user);
    strncpy(_new_user->username, username, MAX_NAME_LENGTH);
    uuid_generate_random(_new_user->uuid);
    return (_new_user);
}

static void spread_sms(const char *name, const char *id, use_r *_new_user)
{
    int len = strlen(name) + 100;
    char *_sms = malloc(sizeof(char) * len);
    if (_sms == NULL)
        return;
    sprintf(_sms, "203 [login] %s %s\r\n", name, id);
    send_sms_to_connected_users(_sms, _new_user);
    free(_sms);
}

static use_r *add_user(m_server *svr, const char *username)
{
    char user_id[37];
    use_r *_new_user = init_user(&svr->_users, username);

    if (_new_user == NULL)
        return (NULL);
    uuid_unparse(_new_user->uuid, user_id);
    server_event_user_created(user_id, _new_user->username);
    return (_new_user);
}

int login_cmd(b_client *clt, m_server *svr, char **_sms)
{
    use_r *_new_user;
    char user_id[37];

    if (get_nb_part(_sms) != 2)
        return (ERR_404);
    _new_user = user_from_name(_sms[1], svr->_users);
    if (_new_user == NULL) {
        _new_user = add_user(svr, _sms[1]);
        if (_new_user == NULL)
            return (ERR_404);
    } _new_user->_b_client = clt;
    _new_user->_logged = true;
    uuid_unparse(_new_user->uuid, user_id);
    server_event_user_logged_in(user_id);
    spread_sms(_new_user->username, user_id, svr->_users);
    return (NOTHING);
}
