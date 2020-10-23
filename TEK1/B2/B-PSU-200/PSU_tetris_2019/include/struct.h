/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** struct.h
*/

#ifndef _STRUCT_H_
#define _STRUCT_H_

typedef struct position
{
    int x;
    int y;
    int ch;
} position_t;


typedef struct map_size_t
{
    int nb_cols;
    int nb_rows;
} map_size_t;

typedef struct tab_int
{
    int nb_tetris_files;
    char **tab;
} tab_int_t;

typedef struct tetris
{
    int level;
    char *key_left;
    char *key_right;
    char *key_turn;
    char *key_drop;
    char *key_quit;
    char *key_pause;
    map_size_t map_size;
    int next;
} tetris_t;

typedef struct tetrimino
{
    int width;
    int height;
    int color;
    int error;
    char **mino;
    char **void_mino;
} tetrimino_t;

typedef struct window_s
{
    int data;
} window_t;

#endif /* !STRUCT_H */
