/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** sokoban.h
*/

#ifndef _SOKOBAN_H
#define _SOKOBAN_H

#include <ncurses.h>
#include <curses.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

typedef struct sokoban_s
{
    unsigned char *map;
    unsigned char *map_dup;
    unsigned int rows;
    unsigned int cols;
    unsigned int rows_dup;
    unsigned int cols_dup;
    unsigned int nb_of_x;
    unsigned int loose;
    unsigned int p_pos;
} sokoban_t;

void usage(void);
char *load_map(char *filepath);
void get_map_info(sokoban_t *sokoban);
int check_map(char *av);
void init_sokoban(sokoban_t *sokoban, char **av);
int resize_screen(sokoban_t *sokoban);
void manage_key_event(sokoban_t *sokoban);
void move_up(sokoban_t *sokoban);
void move_down(sokoban_t *sokoban);
void move_right(sokoban_t *sokoban);
void move_left(sokoban_t *sokoban);
int win(sokoban_t *sokoban);
int loose(sokoban_t *sokoban);
int init_game(sokoban_t *sokoban);
void re_game(sokoban_t *sokoban);

#endif /* !_SOKOBAN_H */