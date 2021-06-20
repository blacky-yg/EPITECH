/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** answer_sender.c
*/

#include "../../include/cmds.h"
#include "../../include/basic_server.h"
#include "../../include/inc.h"

void send_sms_to_connected_users(const char *_sms, use_r *users)
{
    use_r *_index = users;
    for (; _index; _index = _index->_nxt) {
        if (_index->_logged && _index->_b_client)
            sender(_index->_b_client->_idsock, _sms);
    }
}

void answer_sender(answers type, int socket)
{
    static const char *answers[11] = {
    "D_400", "S_400", "U_400", "S_404", "L_404",
    "ERR_404", "I_404", "T_404", "C_404", "Y_404",
    "N_404"};

    if (type != NOTHING) {
        sender(socket, answers[type]);
    }
}

void answer_sender_with_string(answers type, int socket, const char *str)
{
    static const char *answers[11] = {
    "D_400", "S_400", "U_400", "S_404", "L_404",
    "ERR_404", "I_404", "T_404", "C_404", "Y_404",
    "N_404"};
    int _sz = strlen(answers[type]) + strlen(str) + 1;
    char *all_sms = malloc(sizeof(char) * (_sz + 1));

    sprintf(all_sms, "%s %s", answers[type], str);
    if (type != NOTHING) {
        sender(socket, all_sms);
    }
}
