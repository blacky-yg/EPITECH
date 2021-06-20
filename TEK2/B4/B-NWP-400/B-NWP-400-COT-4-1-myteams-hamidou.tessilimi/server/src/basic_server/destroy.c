/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** destroy.c
*/

#include "../../include/inc.h"
#include "../../include/basic_server.h"

void destroy_basic_server(b_server *b_svr)
{
    destroy_basic_clients(b_svr->_client);
    close(b_svr->_idsock);
}

void quit_client(b_client *client)
{
    if (client->_idsock != -1)
        close(client->_idsock);
}

void delete_st_client(b_client **clts)
{
    b_client *_nxt;

    if (*clts == NULL)
        return;
    _nxt = (*clts)->_nxt;
    quit_client(*clts);
    free(*clts);
    *clts = _nxt;
}

b_client *delete_client_fd(int sock, b_client **clts)
{
    b_client *cursor = *clts, *prev = NULL;

    if (cursor->_idsock == sock) {
        delete_st_client(clts);
        return (*clts);
    }
    while (cursor->_nxt) {
        prev = cursor;
        cursor = cursor->_nxt;
        if (cursor->_idsock == sock) {
            prev->_nxt = cursor->_nxt;
            quit_client(cursor);
            free(cursor);
            return (prev);
        }
    } return (NULL);
}

void destroy_basic_clients(b_client *clts)
{
    b_client *cursor = clts;
    while (clts) {
        clts = clts->_nxt;
        quit_client(cursor);
        free(cursor);
        cursor = clts;
    }
}
