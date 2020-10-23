/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** get_next_line
*/

#ifndef _GET_NEXT_LINE_
#define _GET_NEXT_LINE_

#ifndef READ_SIZE
#define READ_SIZE (1)
#endif /* !READ_SIZE_ */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char *get_next_line(int fd);

#endif /* !_GET_NEXT_LINE_ */