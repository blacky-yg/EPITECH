/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** svr.c
*/

#include "inc.h"
#include "basic_server.h"
#include "cmds.h"
#include "server.h"
#include "loading.h"
#include "back_up.h"

void init_main_server(m_server *svr)
{
    svr->_teams = NULL;
    svr->_channels = NULL;
    svr->_threads = NULL;
    svr->_comments = NULL;
    svr->_users = NULL;
    svr->_messages = NULL;
}

void sig_handler(int _sig)
{
    _sig = _sig;
}

int server_loop(b_server *b_svr, m_server *srv)
{
    fd_set fd_s;
    int _b_fd = 1;
    bs_sms *_sms = NULL;

    signal(SIGINT, sig_handler);
    while (1) {
        _b_fd = get_bigest(b_svr->_idsock, b_svr->_client);
        append_fd(b_svr->_client, b_svr->_idsock, &fd_s);
        if (select(_b_fd + 1, &fd_s, NULL, NULL, NULL) < 0)
            return (errno);
        recover_connections(b_svr, &fd_s);
        _sms = get_message(&b_svr->_client, &fd_s);
        handle_sms(&_sms, srv);
        destroy_message(&_sms);
    }
    return (0);
}

int run_server(int _port)
{
    b_server b_svr;
    m_server svr;

    init_main_server(&svr);
    if (loader(&svr) == -1)
        printf("Could not loader ressources.\n");
    init_bserver(&b_svr, _port);
    server_loop(&b_svr, &svr);
    destroy_basic_server(&b_svr);
    back_up(&svr);
    return (0);
}