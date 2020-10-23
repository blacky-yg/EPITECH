/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef get_next_line_h_
#define get_next_line_h_

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#ifndef READ_SIZE
#define READ_SIZE (100000)
# endif /* !READ_SIZE */

char *get_next_line(int fd);

#endif /* !GET_NEXT_LINE_H_ */
