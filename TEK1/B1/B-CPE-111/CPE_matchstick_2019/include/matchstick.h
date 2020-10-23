/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** matchsich.h
*/

#ifndef _MATCHSTICK_H_
#define _MATCHSTICK_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);
int my_getnbr(char const *str);
char **malloc_2d_array(char **array, int nb_rows, int nb_cols);
void fill_tab(char **tab, int i, int j);
void space_in_tab(char **tab, int nb_line, int nb_col);
void wildcard_in_tab(char **tab, int nb_line, int nb_col);
void pipe_in_tab(char **tab, int nb_line, int nb_col);
void display_tab(char **tab, int nb_line, int nb_col);
void free_tab(char **array, int nb_line);
char **player_turn(char **tab, int i, int j);
void game(char **tab, int i, int j);
int matchstick(char *av[]);

#endif /* !_MATCHSTICK_H_ */