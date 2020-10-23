/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** my_ls.h
*/

#ifndef _MY_LS_H_
#define _MY_LS_H_

#include "struct.h"
#include "my.h"

void usage(void);
int my_simple_ls(char const *filepath);
void ls_command(int ac, char *av[]);
int ls_command2(int ac, char *av[], int i, int j);
int ls_l(char *filepath);
void ls_l_2(struct dirent *folder, struct stat info);
void ls_r_r(char *filepath, int flag);
void print_right(mode_t mode, struct stat info);
char *correct_date(char *date);
int get_total_block(struct dirent *folder, struct stat info, char *filepath);

#endif /* !_MY_LS_H_ */