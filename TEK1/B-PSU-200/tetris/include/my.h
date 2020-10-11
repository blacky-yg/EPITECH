/*
** EPITECH PROJECT, 2019
** library
** File description:
** prototypes of all functions
*/

#ifndef _MY_H
#define _MY_H

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);
int my_putnbr(int nb);
void my_putstr(char *str);
int my_strlen(char *str);
int my_getnbr(char *str);
char *my_strcpy(char *dest, char *src);
int my_strcmp(char *s1, char *s2);
char *my_strcat(char *dest, char *src);
char *my_revstr(char *str);
void my_swap(char **s1, char **s2);
void my_putstr_mino(char *str);
char *my_strdup(char *str);
char **order_words(char **tab, int k);

#endif /* _MY_H */