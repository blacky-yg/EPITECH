/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** client.c
*/

#include "../../include/inc.h"
#include "../../include/basic_server.h"

void append_client(b_client *_n_clt, b_client **list)
{
    b_client *index = *list;

    if (*list == NULL) {
        *list = _n_clt;
        return;
    }
    for (; index->_nxt != NULL; index = index->_nxt);
    index->_nxt = _n_clt;
}

int create_client(b_client **clts, int _sock)
{
    b_client *_n_clt;

    _n_clt = malloc(sizeof(b_client));
    if (_n_clt == NULL)
        return (-1);
    _n_clt->_nxt = NULL;
    _n_clt->_idsock = _sock;
    append_client(_n_clt, clts);
    return (0);
}

void sender(int _sock, const char *_sms)
{
    dprintf(_sock, "%s\r\n", _sms);
}