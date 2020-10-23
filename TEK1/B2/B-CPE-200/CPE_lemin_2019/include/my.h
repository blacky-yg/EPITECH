/*
** EPITECH PROJECT, 2019
** library
** File description:
** prototypes of all functions
*/

#ifndef _MY_H
#define _MY_H

#include <unistd.h>
#include <stdlib.h>

int my_printf(char const *format, ...);
int my_flag1(int nb, int limit);
int ent(char const *format);
int kk(char const *format);
int count_nbr(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
int is_digit(char c);
int is_not_digit(char c);
int is_not_alpha(char c);
int count_this(char *str, char d);
int my_strcmp(char const *s1, char const *s2);

//for lemin
char *my_getstring(int nb);
int get_a(int nb);
int is_r(char *str);
int is_n(char *str);
int nb_u(char **lines);
char *my_catt(char *dest, char *src);
int is_invalid(char c);
int is_good(char *str);
int nb_tu(char **lines);
int cmp(char *s1, char *s2);
int total(char **lines);
int is_tunnel(char *str);
char *return_me_str(char *str);
char **malloc_array(int x, int y);
void display_array(char **array);
void free_lines(char **lines);

#endif /* _MY_H */