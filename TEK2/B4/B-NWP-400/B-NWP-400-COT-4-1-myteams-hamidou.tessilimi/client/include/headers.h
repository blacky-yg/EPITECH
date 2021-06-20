/*
** EPITECH PROJECT, 2021
** client
** File description:
** headers
*/

#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <netinet/in.h>

#define MAX_NAME_LENGTH 32
#define MAX_DESCRIPTION_LENGTH 255
#define MAX_BODY_LENGTH 512
#define BUFF_SIZE 1024
#define ERROR 84
#define INVALID_CMD "[ERR]: Invalid command\n"
#define CONNEXION_CLOSED "The server has closed the connection\n"

#endif /* !HEADERS_H */