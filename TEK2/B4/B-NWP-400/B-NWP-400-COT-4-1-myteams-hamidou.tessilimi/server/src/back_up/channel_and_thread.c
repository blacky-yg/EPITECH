/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** channelandthread
*/

#include "../../include/inc.h"
#include "../../include/struct.h"

void channel_back_up(int fd, channe_l *_chan)
{
    char team_id[37], chan_id[37];

    uuid_unparse(_chan->_team_uuid, team_id);
    uuid_unparse(_chan->_uuid, chan_id);
    dprintf(fd, "CHAN %s %s \"%s\" \"%s\"\n",
    chan_id, team_id, _chan->_channel_name, _chan->_descript);
}

void save_channel(int fd, channe_l *_chnls)
{
    channe_l *index = _chnls;
    for (; index; index = index->_nxt)
        channel_back_up(fd, index);
}

void thread_back_up(int fd, threa_d *_thr)
{
    char thread_id[37], user_id[37];

    uuid_unparse(_thr->_uuid, thread_id);
    uuid_unparse(_thr->_user, user_id);
    dprintf(fd, "THREAD %s %s %ld \"%s\" \"%s\"\n",
    thread_id, user_id, _thr->_created_time, _thr->_thread_name, _thr->_sms);
}

void save_thread(int fd, threa_d *threads)
{
    threa_d *index = threads;
    for (; index; index = index->_nxt)
        thread_back_up(fd, index);
}