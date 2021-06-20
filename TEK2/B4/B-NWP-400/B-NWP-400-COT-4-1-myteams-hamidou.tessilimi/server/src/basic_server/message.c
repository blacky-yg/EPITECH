/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** message.c
*/

#include "../../include/inc.h"
#include "../../include/basic_server.h"

void append_sms(bs_sms *_sms, bs_sms **_sms_list)
{
    bs_sms *index = *_sms_list;
    if (*_sms_list == NULL) {
        *_sms_list = _sms;
        return;
    }
    for (; index->_nxt; index = index->_nxt);
    index->_nxt = _sms;
}

bs_sms *receive_clt_sms(b_client *clt, fd_set *fd_s)
{
    bs_sms *_sms = NULL;
    char buf[1024];
    int _sta = 0;

    if (FD_ISSET(clt->_idsock, fd_s)) {
        _sms = init_sms();
        if (_sms == NULL)
            return (NULL);
        memset(buf, 0, 1024);
        _sta = read(clt->_idsock, buf, 1024);
        _sms->_sms = malloc(sizeof(char) * (strlen(buf) + 1));
        strcpy(_sms->_sms, buf);
        if (_sta == 0) {
            _sms->_sms = NULL;
            printf("Client disconnected\n");
        } _sms->_client = clt;
    } return (_sms);
}

bs_sms *get_message(b_client **clts, fd_set *fd_s)
{
    b_client *index = *clts;
    bs_sms *sms = NULL, *_rcv_sms;

    while (index != NULL) {
        _rcv_sms = receive_clt_sms(index, fd_s);
        if (_rcv_sms && _rcv_sms->_sms == NULL)
            index = delete_client_fd(index->_idsock, clts);
        else if (_rcv_sms)
            append_sms(_rcv_sms, &sms);
        if (index)
            index = index->_nxt;
    } return (sms);
}