/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator.h
*/

#ifndef _GENERATOR_H_
#define _GENERATOR_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
#include "my.h"

typedef struct maze_s
{
    int x;
    int y;
    bool perfect;
    char **map;
} maze_t;

char **re_find_path(maze_t *maze);
int check_size(char *str);
int check_error(char *av[]);
char **find_path(maze_t *maze);
void labyrinthe(maze_t *maze, int i, int j);
void init_maze(maze_t *maze);
char **malloc_maze(maze_t *maze);
char **fill_maze_perfect(maze_t *maze);
char **fill_maze_imperfect(maze_t *maze);
void display_maze(maze_t *maze);
void free_maze(maze_t *maze);
int generate(int ac, char *av[], maze_t *maze);

#endif /* !_GENERATOR_H_ */