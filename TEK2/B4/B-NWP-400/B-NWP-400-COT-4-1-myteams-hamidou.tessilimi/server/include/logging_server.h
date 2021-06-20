/*
** EPITECH PROJECT, 2021
** NWP_myteams_2021
** File description:
** a file containing libs functions that should be called in myteams_server
*/

#ifndef LIB_MYTEAMS_LOGGING_SERVER_H
#define LIB_MYTEAMS_LOGGING_SERVER_H

int server_event_team_created(
    char const *team_uuid,
    char const *team_name,
    char const *user_uuid);

int server_event_channel_created(
    char const *team_uuid,
    char const *channel_uuid,
    char const *channel_name);

int server_event_thread_created(
    char const *channel_uuid,
    char const *thread_uuid,
    char const *user_uuid,
    char const *thread_title,
    char const *thread_body);

int server_event_thread_new_reply(
    char const *thread_uuid,
    char const *user_uuid,
    char const *reply_body);

int server_event_user_subscribed(
    char const *team_uuid,
    char const *user_uuid);

int server_event_user_unsubscribed(
    char const *team_uuid,
    char const *user_uuid);

int server_event_user_created(
    char const *user_uuid,
    char const *user_name);

int server_event_user_loaded(
    char const *user_uuid,
    char const *user_name);

int server_event_user_logged_in(char const *user_uuid);

int server_event_user_logged_out(char const *user_uuid);

int server_event_private_message_sent(
    char const *sender_uuid,
    char const *receiver_uuid,
    char const *message_body);

#endif /* LIB_MYTEAMS_LOGGING_SERVER_H */