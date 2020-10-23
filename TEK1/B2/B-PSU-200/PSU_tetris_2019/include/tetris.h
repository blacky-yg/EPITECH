/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** tetris.h
*/

#ifndef _TETRIS_H_
#define _TETRIS_H_

#include "header.h"
#include "struct.h"
#include "get_next_line.h"
#include "my.h"

void usage(char *av[]);
/*
//draw tetriminos
void draw_tetrimino(char **mino, position_t *position, WINDOW *win,
int color);
position_t *draw_update_tetriminos(position_t *prev, position_t *new,
WINDOW *win, tetrimino_t *tetrimino);

//get next position
int get_right(position_t *prev, WINDOW *win, int rows,
int cols);
int get_left(position_t *prev, char **mino, WINDOW *win,
int rows);
int get_down(position_t *prev, char **mino, WINDOW *win,
int last);
int get_up(position_t *prev, char **mino, WINDOW *win);

//move_tetrimino
position_t *move_tetrimino(WINDOW *win, position_t *prev,
tetrimino_t *tetrimino, tetris_t *tetris);
position_t *move_left_right(WINDOW *win, position_t *prev,
tetrimino_t *tetrimino, tetris_t *tetris);
position_t *move_up_down(WINDOW *win, position_t *prev,
tetrimino_t *tetrimino, tetris_t *tetris);
*/
//array
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
void mem_free_2d_array(char ** arr, int x);
char **fill_space(int nb_rows, int nb_cols);

//check
void check_error(char *str);
int check_file(char *str);
char *cut(char *str);

//handopt
char *get_key(char *str);
map_size_t get_size(char *str);
tetris_t handopt(const struct option *longopts, int ac,
                                char **av, tetris_t tetris);

//open_tetriminos
tab_int_t open_tetriminos(DIR *dir, struct dirent *rd_dir, int i);

//print debug
void print_key(char const *str);
void print_size(tetris_t tetris);
void print_debug(tetris_t tetris);

//my_debug
tetrimino_t check_line(char **str, int fd, tetrimino_t tetrimino,
                                            tetris_t tetris);
void print_tetrimino(tetrimino_t tetrimino, char *filepath, char **mino);
tetrimino_t manage_tetrimino(char *filepath, tetris_t tetris);
tetrimino_t *my_debug(tetris_t tetris, int *nb);

//game
void game(tetris_t *tetris);
char *load_file_in_mem(char const *filepath);


#endif /* !_TETRIS_H */
