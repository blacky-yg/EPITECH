/*
** EPITECH PROJECT, 2021
** manage_fd.c
** File description:
** manage_fd.c
*/

#include "../../include/cmds.h"
#include "../../include/inc.h"

void append_fd(b_client *clts, int svr_sck, fd_set *set)
{
    FD_ZERO(set);
    for (b_client *index = clts; index; index = index->_nxt) {
        FD_SET(index->_idsock, set);
    } FD_SET(svr_sck, set);
}

int get_bigest(int svr_fd, b_client *clts)
{
    int b_fd = 0;

    for (b_client *index = clts; index; index = index->_nxt) {
        if (index->_idsock > 0 && index->_idsock > b_fd)
            b_fd = index->_idsock;
    }
    if (svr_fd > b_fd)
        return (svr_fd);
    return (b_fd);
}