/*
** EPITECH PROJECT, 2020
** dante
** File description:
** solver.h
*/

#ifndef _SOLVER_H
#define _SOLVER_H

#include "my.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void show_maze(char **maze, char *tab);
int find_x(char *tab);
int find_y(char *tab);
int scan_map(char **maze, char *tab);
char *open_and_read(char *file);
char **fill_tab(char *tab, char **maze);
char **my_malloc(char *tab);
char **kill_the_game(char **maze, char *tab);

#endif /* !_SOLVER_H */
