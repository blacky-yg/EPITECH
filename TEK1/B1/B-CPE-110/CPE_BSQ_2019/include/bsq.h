/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq_h
*/

#ifndef BSQ_H
#define BSQ_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

typedef struct bsq_s
{
    char *filepath;
    char **map;
    char *buffer;
    int first_line_size;
    int map_size;
    int rows;
    int cols;
    int rect_x;
    int rect_y;
    int rect_max;
} bsq_t;

bsq_t *init_bsq(bsq_t *bsq);
void get_map_info(bsq_t *bsq);
char *fill_map(bsq_t *bsq);
void transform_map(bsq_t *bsq);
char set_level(char **str, int i, int j);
int sort_list(char *tab);
void find_and_set_max(bsq_t *bsq);
void retransform_map(bsq_t *bsq);
void display_map(bsq_t *bsq);
void do_it(bsq_t *bsq);
void destroy_all(bsq_t *bsq);
void bsq_mission(bsq_t *bsq, int fd);
int check_fd_ac(int ac, char *av[]);

#endif /* BSQ_H */