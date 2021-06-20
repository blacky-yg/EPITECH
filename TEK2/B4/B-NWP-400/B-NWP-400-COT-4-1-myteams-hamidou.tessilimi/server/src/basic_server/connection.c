/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** connection.c
*/

#include "inc.h"
#include "basic_server.h"

int recover_connections(b_server *b_svr, fd_set *fd_s)
{
    struct sockaddr_in _adr;
    socklen_t len = sizeof(_adr);
    int _n_sck;

    if (!FD_ISSET(b_svr->_idsock, fd_s))
        return (0);
    _n_sck = accept(b_svr->_idsock, (struct sockaddr *)&_adr, &len);
    if (_n_sck == -1)
        handle_error("new_sock");
    create_client(&b_svr->_client, _n_sck);
    return (0);
}
