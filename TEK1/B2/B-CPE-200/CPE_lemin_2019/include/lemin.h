/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** lemin.h
*/

#ifndef LEMIN_H
#define LEMIN_H

#include "my.h"
#include "header.h"
#include "struct.h"
#include "global.h"
#include "get_next_line.h"

int ants;
int h_gal;
int h_tun;
int pos_start;
int pos_end;
int pos_tun;

void dodo(anthill ant[], int pos_o, int pos_t, int r);

//read_file
char **read_file(int fd);

//check_file
int is_n_a_pos_int(char **file);
int check_bloc_one(char **file, int *pos);
int check_bloc_two(char **file, int pos);
int check_file(char **file);

//check_file_utils
int is_valid_gal(char **line, int i);
int is_to_ign(char *line);
int is_good_command(char **line, int i);
int is_not_a_tunnel(char *line);

//clean_lines
char *clean_line(char *src);
char **clean_lines(char **lines);

//fill_struct
void fill_start(int k, lem_t *lemin, char **lines, int d);
void fill_end(int k, lem_t *lemin, char **lines, int d);
void fill_rooms(int k, lem_t *lemin, char **lines, int d);

//get_elmnt_nb and fill_struct
int nb_start(char **lines, lem_t *lemin);
int nb_end(char **lines, lem_t *lemin);
int nb_rooms(char **lines, lem_t *lemin);
int nb_tunnels(char **lines, lem_t *lemin);

//init_struct
void init_struct(lem_t *lemin, char **lines);
int parse_info_n_print(char **input);

//output
int how_much(void);
void malloc_moves(void);
int output(anthill ant[], char **input);

//display_data
void display_the_rest(lem_t *lemin);
void display_y(lem_t *lemin);
void display_data(lem_t *lemin);
void display_input(char **input);

//solve
int solve_the_anthill(char **input);

//inlem
int inlem(char **input, lem_t *lemin);

//dood
char *dood(char *str);
int check_now(void);
void dod(void);

//equalize
int d_equalize(int *a, int *b, int *x, int *y);
int h_equalize(int *a, int *b, int *x, int *y);

//get
int get_s(char *str, int y);
int get_h(int q, int s);
int get_d(int q, int s);

//check
int check_i(char *i_i, char *j_j, char *str);
int check_j(char *i_i, char *j_j, char *str);

//create_mat
int check_mat(void);
int **create_mat(char **input, anthill ant[]);

//anthill
void malloc_me_anthill(anthill ant[]);
int create_anthill(char **input, anthill ant[]);
int create_the_anthill(char **input, anthill ant[]);

//see
int seeee(anthill ant[], char **bef_and_aft);
int see_is_in(anthill ant[], char *tun);

//moves_for_ant
int nbb_gal(lem_t lem);
int moves_for_ant(anthill ant[], char **input);

//quit_the_start
int call_your_bro(anthill ant[], int i, int *n_ants);
int quitstart(anthill ant[], int *n_ants);
char *go_to(int x, anthill ant[], int w);
char *quit_the_start(int x, anthill ant[]);

//logic
void do_logic(int *n_ants, int nb, int d);
void math_logic(int *n_ants, int nb);

//sort
int nb_path(void);
int is_gd(int *n_ants, int nb);
void sort(void);

//moves
void see_moves(void);
int move_move(anthill ant[], int b, int *n_ants, int nb);
void move_your_ass(anthill ant[], int *n_ants, int nb);
int do_that_bro(anthill ant[], int i, int *n_ants);

//let_me_out
int are_there_related(anthill ant[], int i, char *j_j);
void put(char *str, int i, int j);
void putt(char *str, int i, int j);

//fill_it
char *fill_it(char *name, char *str);
char *fill_t(char *name, char *str, char *nb);

//free_all
int free_some_ant(anthill ant[], char **input);
void free_anthill(anthill ant[]);
void free_tab(char **tab);
void free_lem(lem_t lemin);

#endif /* !LEMIN_H */
