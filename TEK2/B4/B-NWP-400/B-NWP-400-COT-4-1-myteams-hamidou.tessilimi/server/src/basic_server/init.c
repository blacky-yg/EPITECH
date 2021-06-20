/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** init.c
*/

#include "../../include/inc.h"
#include "../../include/basic_server.h"

int init_socket(int _port)
{
    int _sock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in _adr = {0};

    if (_sock == -1)
        handle_error("socket");
    _adr.sin_family = AF_INET;
    _adr.sin_port = htons(_port);
    _adr.sin_addr.s_addr = INADDR_ANY;
    if (bind(_sock, (struct sockaddr *)&_adr, sizeof(_adr)) == -1)
        handle_error("bind");
    return (_sock);
}

int init_bserver(b_server *svr_bs, int _port)
{
    svr_bs->_idsock = init_socket(_port);
    if (svr_bs->_idsock == -1 || listen(svr_bs->_idsock, 100) == -1)
        handle_error("listen");
    svr_bs->_client = NULL;
    return (0);
}

bs_sms *init_sms(void)
{
    bs_sms *_sms = malloc(sizeof(bs_sms));

    if (_sms == NULL)
        return (NULL);
    _sms->_client = NULL;
    _sms->_sms = NULL;
    _sms->_nxt = NULL;
    return (_sms);
}

void destroy_sms(bs_sms *_sms)
{
    if (_sms->_sms)
        free(_sms->_sms);
    free(_sms);
}

void destroy_message(bs_sms **sms)
{
    bs_sms *save = *sms, *cursor = *sms;

    if (sms == NULL || *sms == NULL)
        return;
    while (cursor) {
        save = cursor;
        cursor = cursor->_nxt;
        destroy_sms(save);
    }
}