/*
** EPITECH PROJECT, 2019
** library
** File description:
** prototypes of all functions
*/

#ifndef _MY_H
#define _MY_H

#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);

#endif /* _MY_H */